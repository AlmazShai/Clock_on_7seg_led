# ----------------------------------------------------------------------------
# Useful Procedures and Functions are here
# ----------------------------------------------------------------------------

# findFiles can find files in subdirs and add it into a list
proc findFiles { basedir pattern } {

    # Fix the directory name, this ensures the directory name is in the
    # native format for the platform and contains a final directory seperator
    set basedir [string trimright [file join [file normalize $basedir] { }]]
    set fileList {}
    array set myArray {}
    
    # Look in the current directory for matching files, -type {f r}
    # means ony readable normal files are looked at, -nocomplain stops
    # an error being thrown if the returned list is empty

    foreach fileName [glob -nocomplain -type {f r} -path $basedir $pattern] {
        lappend fileList $fileName
    }
    
    # Now look for any sub direcories in the current directory
    foreach dirName [glob -nocomplain -type {d  r} -path $basedir *] {
        # Recusively call the routine on the sub directory and append any
        # new files to the results
        # put $dirName
        set subDirList [findFiles $dirName $pattern]
        if { [llength $subDirList] > 0 } {
            foreach subDirFile $subDirList {
                lappend fileList $subDirFile
            }
        }
    }
    return $fileList
}
# ---------------------------------------------------------------- 

# Stage 0: You don't need to set project name and dir path !!!
set TclPath [file dirname [file normalize [info script]]]
set NewLoc [string range $TclPath {0} [expr [string last / $TclPath] - 5]]

# Stage 1: Specify project settings 
set PrjDir [string range $TclPath 0 [string last / $NewLoc]]
set TopName [string range $NewLoc [expr [string last / $NewLoc] + 1] end]

# Stage 2: Auto-complete part for path
set PrjName $TopName.xise
set SrcDir $PrjDir/$TopName/src
set IseNm "ise"
set IseDir $PrjDir/$TopName/$IseNm

# Stage 3: Delete trash in project directory
cd $PrjDir/$TopName
pwd

if {[file exists $IseNm] == 1} { 
    file delete -force $IseNm 
}
after 30
file mkdir $IseNm
cd $IseDir

# Stage 4: Find sources: *.vhd, *.ngc *.xci *.xco *.xdc etc.
# This stage used instead of: add_files -scan_for_includes $SrcDir
set SrcVHD [findFiles $SrcDir/rtl "*.vhd"]
set SrcVer [findFiles $SrcDir/rtl "*.v"]
# set SrcNGC [findFiles $SrcDir/ipcores "*.ngc"]
set SrcUCF [findFiles $SrcDir/top "*.ucf"]
set SrcVerTest [findFiles $SrcDir/test "*.v"]
set SrcXDC [findFiles $SrcDir "*.xdc"]

#set DirAdm $NewLoc/adm_simulation
set DirIps $SrcDir/ipcores
#set DirRtl $NewLoc/rtl
set DirTop $SrcDir/top

# Stage 5: Find top file
set SrcTop [findFiles $DirTop "*.v"]
set TopVName [string range $SrcTop [expr [string last / $SrcTop] + 1] end]
puts "Top verilog name: $TopVName"

# Stage 6: Create project and add source files
puts "Creating project $TopName..."
project new $TopName
puts "$TopName: Setting project properties..."

project open $IseDir/$PrjName

project set family "Spartan6"
project set device "xc6slx9"
project set package "ftg256"
project set speed "-2"
project set top_level_module_type "HDL"
project set synthesis_tool "XST (VHDL/Verilog)"
project set simulator "ISim (VHDL/Verilog)"
project set "Preferred Language" "Verilog"
project set "Enable Message Filtering" "false"


# Stage 7: Adding files to project
puts "$TopName: adding files to project"
# Add VHDL source files
if {$SrcVHD != ""} {
    xfile add $SrcVHD 
}
# Add UFC source files
if {$SrcUCF != ""} {
    xfile add $SrcUCF
}
# Add Verilog source files
if {$SrcVer != ""} {
    xfile add $SrcVer
}
# Add tesbench files
if {$SrcVerTest != ""} {
    xfile add $SrcVerTest -view "Simulation"
}
# Add top file
if {$SrcTop != ""} {
    xfile add $SrcTop
}

# Stage 8: Set properties and update compile order
puts "$TopName: setting properies..."
# project set top $TopName

# Stage 9: Find and generate all IP cores
set SrcXco [findFiles $DirIps "*.xco"]
foreach SubDir $SrcXco {
    set IpSubdir [string range $SubDir 0 [string last / $SubDir]]
    set IpName [string range $SubDir [expr [string last / $SubDir] + 1] end]
    set CgpDir [findFiles $IpSubdir "*.cgp"]
    if {$CgpDir != ""} {
        lappend IpDirs $IpSubdir
        puts "$TopName: Generating IP core '$IpName'..."
        catch {exec coregen -p $CgpDir -b $SubDir -intstyle xflow}
        puts "$TopName: Adding IP cores '$IpName' to project..."
        #set IpXise [findFiles $SubDir "*.xise"]
        #puts $IpXise
        xfile add $SubDir
    }
}

# Stage 10: Project ready to use
puts "$TopName: Project ready!"

# Stage 10: Set properties for Synthesis and Implementation (Custom field)
#set_property strategy Flow_PerfOptimized_high [get_runs synth_1]
#set_property STEPS.SYNTH_DESIGN.ARGS.BUFG 0 [get_runs synth_1]
#set_property STEPS.SYNTH_DESIGN.ARGS.FANOUT_LIMIT 1000 [get_runs synth_1]
#
#set_property strategy Performance_ExtraTimingOpt [get_runs impl_1]

# Stage 11: Launch runs for Synthesis and Implementation (Custom field)

# launch_runs synth_1
# wait_on_run synth_1
# open_run synth_1 -name synth_1
# launch_runs impl_1 -to_step write_bitstream
# wait_on_run impl_1
# open_run impl_1 -name impl_1

project close
