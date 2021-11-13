
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name OMDAZZ_project_RTC -dir "E:/projects/Xilinx/OMDAZZ_project_RTC/planAhead_run_2" -part xc6slx9ftg256-2
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "E:/projects/Xilinx/OMDAZZ_project_RTC/schematic.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {E:/projects/Xilinx/OMDAZZ_project_RTC} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "E:/projects/Xilinx/OMDAZZ_project1/top.ucf" [current_fileset -constrset]
add_files [list {E:/projects/Xilinx/OMDAZZ_project1/top.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {schematic.ucf}] -fileset [get_property constrset [current_run]]
link_design
