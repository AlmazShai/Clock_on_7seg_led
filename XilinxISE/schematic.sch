<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <attr value="PartialBusOnly|BaseDashIndex" name="RenameBusIO" />
    <netlist>
        <signal name="XLXN_1(3:0)" />
        <signal name="XLXN_2(3:0)" />
        <signal name="XLXN_3(3:0)" />
        <signal name="XLXN_4(3:0)" />
        <signal name="XLXN_5(3:0)" />
        <signal name="XLXN_6(3:0)" />
        <signal name="XLXN_7(3:0)" />
        <signal name="XLXN_8(3:0)" />
        <signal name="XLXN_9(3:0)" />
        <signal name="XLXN_10(3:0)" />
        <signal name="XLXN_11(3:0)" />
        <signal name="XLXN_12(3:0)" />
        <signal name="XLXN_13(3:0)" />
        <signal name="XLXN_14(3:0)" />
        <signal name="XLXN_15(3:0)" />
        <signal name="XLXN_16(3:0)" />
        <signal name="XLXN_17(3:0)" />
        <signal name="XLXN_18(3:0)" />
        <signal name="XLXN_19(3:0)" />
        <signal name="XLXN_20(7:0)" />
        <signal name="XLXN_21" />
        <signal name="XLXN_24" />
        <signal name="XLXN_27(7:0)" />
        <signal name="data" />
        <signal name="SCLK" />
        <signal name="XLXN_34(7:0)" />
        <signal name="CE" />
        <signal name="A" />
        <signal name="B" />
        <signal name="C" />
        <signal name="D" />
        <signal name="E" />
        <signal name="F" />
        <signal name="G" />
        <signal name="SEL0" />
        <signal name="SEL1" />
        <signal name="SEL2" />
        <signal name="SEL3" />
        <signal name="SEL4" />
        <signal name="SEL5" />
        <signal name="clk" />
        <signal name="rst" />
        <signal name="XLXN_51" />
        <signal name="XLXN_52" />
        <signal name="XLXN_53" />
        <signal name="DOT" />
        <signal name="XLXN_57" />
        <signal name="key1" />
        <signal name="key2" />
        <signal name="key3" />
        <signal name="key4" />
        <signal name="XLXN_67" />
        <signal name="XLXN_68" />
        <signal name="XLXN_69(2:0)" />
        <port polarity="BiDirectional" name="data" />
        <port polarity="Output" name="SCLK" />
        <port polarity="Output" name="CE" />
        <port polarity="Output" name="A" />
        <port polarity="Output" name="B" />
        <port polarity="Output" name="C" />
        <port polarity="Output" name="D" />
        <port polarity="Output" name="E" />
        <port polarity="Output" name="F" />
        <port polarity="Output" name="G" />
        <port polarity="Output" name="SEL0" />
        <port polarity="Output" name="SEL1" />
        <port polarity="Output" name="SEL2" />
        <port polarity="Output" name="SEL3" />
        <port polarity="Output" name="SEL4" />
        <port polarity="Output" name="SEL5" />
        <port polarity="Input" name="clk" />
        <port polarity="Input" name="rst" />
        <port polarity="Output" name="DOT" />
        <port polarity="Input" name="key1" />
        <port polarity="Input" name="key2" />
        <port polarity="Input" name="key3" />
        <port polarity="Input" name="key4" />
        <blockdef name="I2C_serial">
            <timestamp>2020-11-6T16:51:19</timestamp>
            <rect width="384" x="-16" y="-320" height="320" />
            <line x2="432" y1="-288" y2="-288" x1="368" />
            <line x2="432" y1="-224" y2="-224" x1="368" />
            <line x2="432" y1="-160" y2="-160" x1="368" />
            <rect width="64" x="368" y="-108" height="24" />
            <line x2="432" y1="-96" y2="-96" x1="368" />
            <line x2="432" y1="-32" y2="-32" x1="368" />
            <rect width="64" x="-76" y="-108" height="24" />
            <rect width="64" x="-76" y="-44" height="24" />
            <line x2="-80" y1="-288" y2="-288" x1="-16" />
            <line x2="-80" y1="-224" y2="-224" x1="-16" />
            <line x2="-80" y1="-160" y2="-160" x1="-16" />
            <line x2="-80" y1="-96" y2="-96" x1="-16" />
            <line x2="-80" y1="-32" y2="-32" x1="-16" />
        </blockdef>
        <blockdef name="set_get_time">
            <timestamp>2020-11-7T17:24:49</timestamp>
            <line x2="384" y1="1056" y2="1056" x1="320" />
            <line x2="384" y1="1120" y2="1120" x1="320" />
            <rect width="64" x="320" y="1172" height="24" />
            <line x2="384" y1="1184" y2="1184" x1="320" />
            <line x2="-144" y1="800" y2="800" x1="-80" />
            <line x2="-144" y1="864" y2="864" x1="-80" />
            <line x2="-144" y1="928" y2="928" x1="-80" />
            <line x2="-144" y1="992" y2="992" x1="-80" />
            <rect width="64" x="320" y="20" height="24" />
            <line x2="384" y1="32" y2="32" x1="320" />
            <rect width="64" x="320" y="84" height="24" />
            <line x2="384" y1="96" y2="96" x1="320" />
            <rect width="64" x="320" y="148" height="24" />
            <line x2="384" y1="160" y2="160" x1="320" />
            <rect width="64" x="320" y="212" height="24" />
            <line x2="384" y1="224" y2="224" x1="320" />
            <rect width="64" x="320" y="276" height="24" />
            <line x2="384" y1="288" y2="288" x1="320" />
            <rect width="64" x="320" y="340" height="24" />
            <line x2="384" y1="352" y2="352" x1="320" />
            <rect width="64" x="320" y="404" height="24" />
            <line x2="384" y1="416" y2="416" x1="320" />
            <rect width="64" x="320" y="468" height="24" />
            <line x2="384" y1="480" y2="480" x1="320" />
            <rect width="64" x="320" y="532" height="24" />
            <line x2="384" y1="544" y2="544" x1="320" />
            <rect width="64" x="320" y="596" height="24" />
            <line x2="384" y1="608" y2="608" x1="320" />
            <rect width="64" x="320" y="660" height="24" />
            <line x2="384" y1="672" y2="672" x1="320" />
            <rect width="64" x="320" y="724" height="24" />
            <line x2="384" y1="736" y2="736" x1="320" />
            <line x2="384" y1="-352" y2="-352" x1="320" />
            <rect width="64" x="320" y="-108" height="24" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
            <rect width="64" x="-144" y="20" height="24" />
            <line x2="-144" y1="32" y2="32" x1="-80" />
            <line x2="-144" y1="-272" y2="-272" x1="-80" />
            <line x2="-144" y1="-112" y2="-112" x1="-80" />
            <line x2="-144" y1="-352" y2="-352" x1="-80" />
            <rect width="400" x="-80" y="-384" height="1856" />
        </blockdef>
        <blockdef name="switch_led">
            <timestamp>2020-11-6T18:49:9</timestamp>
            <line x2="384" y1="32" y2="32" x1="320" />
            <line x2="0" y1="-800" y2="-800" x1="64" />
            <line x2="0" y1="-704" y2="-704" x1="64" />
            <rect width="64" x="0" y="-620" height="24" />
            <line x2="0" y1="-608" y2="-608" x1="64" />
            <rect width="64" x="0" y="-524" height="24" />
            <line x2="0" y1="-512" y2="-512" x1="64" />
            <rect width="64" x="0" y="-428" height="24" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <rect width="64" x="0" y="-332" height="24" />
            <line x2="0" y1="-320" y2="-320" x1="64" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-140" height="24" />
            <line x2="0" y1="-128" y2="-128" x1="64" />
            <line x2="384" y1="-800" y2="-800" x1="320" />
            <line x2="384" y1="-736" y2="-736" x1="320" />
            <line x2="384" y1="-672" y2="-672" x1="320" />
            <line x2="384" y1="-608" y2="-608" x1="320" />
            <line x2="384" y1="-544" y2="-544" x1="320" />
            <line x2="384" y1="-480" y2="-480" x1="320" />
            <line x2="384" y1="-416" y2="-416" x1="320" />
            <line x2="384" y1="-352" y2="-352" x1="320" />
            <line x2="384" y1="-288" y2="-288" x1="320" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
            <rect width="256" x="64" y="-832" height="896" />
        </blockdef>
        <blockdef name="time_date_mux">
            <timestamp>2020-11-7T17:25:38</timestamp>
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="0" y1="32" y2="32" x1="64" />
            <rect width="64" x="0" y="84" height="24" />
            <line x2="0" y1="96" y2="96" x1="64" />
            <line x2="0" y1="-864" y2="-864" x1="64" />
            <rect width="64" x="0" y="-812" height="24" />
            <line x2="0" y1="-800" y2="-800" x1="64" />
            <rect width="64" x="0" y="-748" height="24" />
            <line x2="0" y1="-736" y2="-736" x1="64" />
            <rect width="64" x="0" y="-684" height="24" />
            <line x2="0" y1="-672" y2="-672" x1="64" />
            <rect width="64" x="0" y="-620" height="24" />
            <line x2="0" y1="-608" y2="-608" x1="64" />
            <rect width="64" x="0" y="-556" height="24" />
            <line x2="0" y1="-544" y2="-544" x1="64" />
            <rect width="64" x="0" y="-492" height="24" />
            <line x2="0" y1="-480" y2="-480" x1="64" />
            <rect width="64" x="0" y="-428" height="24" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <rect width="64" x="0" y="-364" height="24" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <rect width="64" x="0" y="-300" height="24" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="384" y="-716" height="24" />
            <line x2="448" y1="-704" y2="-704" x1="384" />
            <rect width="64" x="384" y="-924" height="24" />
            <line x2="384" y1="-912" y2="-912" x1="448" />
            <rect width="64" x="384" y="-812" height="24" />
            <line x2="448" y1="-800" y2="-800" x1="384" />
            <line x2="0" y1="-928" y2="-928" x1="64" />
            <rect width="64" x="384" y="-620" height="24" />
            <line x2="448" y1="-608" y2="-608" x1="384" />
            <rect width="64" x="384" y="-524" height="24" />
            <line x2="448" y1="-512" y2="-512" x1="384" />
            <rect width="64" x="384" y="-428" height="24" />
            <line x2="448" y1="-416" y2="-416" x1="384" />
            <rect width="320" x="64" y="-960" height="1092" />
        </blockdef>
        <block symbolname="I2C_serial" name="XLXI_1">
            <blockpin signalname="XLXN_21" name="ready" />
            <blockpin signalname="SCLK" name="sclk" />
            <blockpin signalname="CE" name="ce" />
            <blockpin signalname="XLXN_20(7:0)" name="data_out(7:0)" />
            <blockpin signalname="data" name="data" />
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="rst" name="rst" />
            <blockpin signalname="XLXN_24" name="send" />
            <blockpin signalname="XLXN_34(7:0)" name="adress_in(7:0)" />
            <blockpin signalname="XLXN_27(7:0)" name="data_in(7:0)" />
        </block>
        <block symbolname="set_get_time" name="XLXI_2">
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="rst" name="rst" />
            <blockpin signalname="key1" name="key1" />
            <blockpin signalname="key2" name="key2" />
            <blockpin signalname="key3" name="key3" />
            <blockpin signalname="key4" name="key4" />
            <blockpin signalname="XLXN_21" name="ready" />
            <blockpin signalname="XLXN_20(7:0)" name="RTC_data(7:0)" />
            <blockpin signalname="XLXN_24" name="send" />
            <blockpin signalname="XLXN_34(7:0)" name="adress(7:0)" />
            <blockpin signalname="XLXN_27(7:0)" name="data(7:0)" />
            <blockpin signalname="XLXN_8(3:0)" name="hours10(3:0)" />
            <blockpin signalname="XLXN_9(3:0)" name="hours(3:0)" />
            <blockpin signalname="XLXN_10(3:0)" name="minutes10(3:0)" />
            <blockpin signalname="XLXN_11(3:0)" name="minutes(3:0)" />
            <blockpin signalname="XLXN_12(3:0)" name="seconds10(3:0)" />
            <blockpin signalname="XLXN_13(3:0)" name="seconds(3:0)" />
            <blockpin signalname="XLXN_14(3:0)" name="days10(3:0)" />
            <blockpin signalname="XLXN_15(3:0)" name="days(3:0)" />
            <blockpin signalname="XLXN_16(3:0)" name="mouths10(3:0)" />
            <blockpin signalname="XLXN_17(3:0)" name="mouths(3:0)" />
            <blockpin signalname="XLXN_18(3:0)" name="years10(3:0)" />
            <blockpin signalname="XLXN_19(3:0)" name="years(3:0)" />
            <blockpin signalname="XLXN_67" name="time_date_sw_en" />
            <blockpin signalname="XLXN_68" name="time_date_sw" />
            <blockpin signalname="XLXN_69(2:0)" name="blink(2:0)" />
        </block>
        <block symbolname="switch_led" name="XLXI_3">
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="rst" name="rst" />
            <blockpin signalname="XLXN_1(3:0)" name="number0(3:0)" />
            <blockpin signalname="XLXN_2(3:0)" name="number1(3:0)" />
            <blockpin signalname="XLXN_3(3:0)" name="number2(3:0)" />
            <blockpin signalname="XLXN_4(3:0)" name="number3(3:0)" />
            <blockpin signalname="XLXN_5(3:0)" name="number4(3:0)" />
            <blockpin signalname="XLXN_7(3:0)" name="number5(3:0)" />
            <blockpin signalname="A" name="A" />
            <blockpin signalname="B" name="B" />
            <blockpin signalname="C" name="C" />
            <blockpin signalname="D" name="D" />
            <blockpin signalname="E" name="E" />
            <blockpin signalname="F" name="F" />
            <blockpin signalname="G" name="G" />
            <blockpin signalname="SEL0" name="SEL0" />
            <blockpin signalname="SEL1" name="SEL1" />
            <blockpin signalname="SEL2" name="SEL2" />
            <blockpin signalname="SEL3" name="SEL3" />
            <blockpin signalname="SEL4" name="SEL4" />
            <blockpin signalname="SEL5" name="SEL5" />
            <blockpin signalname="DOT" name="DOT" />
        </block>
        <block symbolname="time_date_mux" name="XLXI_5">
            <blockpin signalname="rst" name="rst" />
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="XLXN_8(3:0)" name="hours10(3:0)" />
            <blockpin signalname="XLXN_9(3:0)" name="hours(3:0)" />
            <blockpin signalname="XLXN_10(3:0)" name="minutes10(3:0)" />
            <blockpin signalname="XLXN_11(3:0)" name="minutes(3:0)" />
            <blockpin signalname="XLXN_12(3:0)" name="seconds10(3:0)" />
            <blockpin signalname="XLXN_13(3:0)" name="seconds(3:0)" />
            <blockpin signalname="XLXN_14(3:0)" name="days10(3:0)" />
            <blockpin signalname="XLXN_15(3:0)" name="days(3:0)" />
            <blockpin signalname="XLXN_16(3:0)" name="mouths10(3:0)" />
            <blockpin signalname="XLXN_17(3:0)" name="mouths(3:0)" />
            <blockpin signalname="XLXN_18(3:0)" name="years10(3:0)" />
            <blockpin signalname="XLXN_19(3:0)" name="years(3:0)" />
            <blockpin signalname="XLXN_1(3:0)" name="number0(3:0)" />
            <blockpin signalname="XLXN_2(3:0)" name="number1(3:0)" />
            <blockpin signalname="XLXN_3(3:0)" name="number2(3:0)" />
            <blockpin signalname="XLXN_4(3:0)" name="number3(3:0)" />
            <blockpin signalname="XLXN_5(3:0)" name="number4(3:0)" />
            <blockpin signalname="XLXN_7(3:0)" name="number5(3:0)" />
            <blockpin signalname="XLXN_67" name="time_date_sw_en" />
            <blockpin signalname="XLXN_68" name="time_date_sw" />
            <blockpin signalname="XLXN_69(2:0)" name="blink(2:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="5440" height="3520">
        <instance x="3568" y="1632" name="XLXI_3" orien="R0">
        </instance>
        <branch name="XLXN_1(3:0)">
            <wire x2="3552" y1="1008" y2="1008" x1="3248" />
            <wire x2="3552" y1="1008" y2="1024" x1="3552" />
            <wire x2="3568" y1="1024" y2="1024" x1="3552" />
        </branch>
        <branch name="XLXN_2(3:0)">
            <wire x2="3568" y1="1120" y2="1120" x1="3248" />
        </branch>
        <branch name="XLXN_3(3:0)">
            <wire x2="3568" y1="1216" y2="1216" x1="3248" />
        </branch>
        <branch name="XLXN_4(3:0)">
            <wire x2="3568" y1="1312" y2="1312" x1="3248" />
        </branch>
        <branch name="XLXN_5(3:0)">
            <wire x2="3568" y1="1408" y2="1408" x1="3248" />
        </branch>
        <branch name="XLXN_7(3:0)">
            <wire x2="3568" y1="1504" y2="1504" x1="3248" />
        </branch>
        <instance x="2800" y="1920" name="XLXI_5" orien="R0">
        </instance>
        <branch name="XLXN_8(3:0)">
            <wire x2="2800" y1="1120" y2="1120" x1="2208" />
        </branch>
        <instance x="1824" y="1088" name="XLXI_2" orien="R0">
        </instance>
        <branch name="XLXN_9(3:0)">
            <wire x2="2800" y1="1184" y2="1184" x1="2208" />
        </branch>
        <branch name="XLXN_10(3:0)">
            <wire x2="2800" y1="1248" y2="1248" x1="2208" />
        </branch>
        <branch name="XLXN_11(3:0)">
            <wire x2="2800" y1="1312" y2="1312" x1="2208" />
        </branch>
        <branch name="XLXN_12(3:0)">
            <wire x2="2800" y1="1376" y2="1376" x1="2208" />
        </branch>
        <branch name="XLXN_13(3:0)">
            <wire x2="2800" y1="1440" y2="1440" x1="2208" />
        </branch>
        <branch name="XLXN_14(3:0)">
            <wire x2="2800" y1="1504" y2="1504" x1="2208" />
        </branch>
        <branch name="XLXN_15(3:0)">
            <wire x2="2800" y1="1568" y2="1568" x1="2208" />
        </branch>
        <branch name="XLXN_16(3:0)">
            <wire x2="2800" y1="1632" y2="1632" x1="2208" />
        </branch>
        <branch name="XLXN_17(3:0)">
            <wire x2="2800" y1="1696" y2="1696" x1="2208" />
        </branch>
        <branch name="XLXN_18(3:0)">
            <wire x2="2800" y1="1760" y2="1760" x1="2208" />
        </branch>
        <branch name="XLXN_19(3:0)">
            <wire x2="2800" y1="1824" y2="1824" x1="2208" />
        </branch>
        <instance x="1760" y="416" name="XLXI_1" orien="R0">
        </instance>
        <branch name="XLXN_20(7:0)">
            <wire x2="1616" y1="640" y2="1120" x1="1616" />
            <wire x2="1680" y1="1120" y2="1120" x1="1616" />
            <wire x2="2272" y1="640" y2="640" x1="1616" />
            <wire x2="2272" y1="320" y2="320" x1="2192" />
            <wire x2="2272" y1="320" y2="640" x1="2272" />
        </branch>
        <branch name="XLXN_21">
            <wire x2="1632" y1="656" y2="976" x1="1632" />
            <wire x2="1680" y1="976" y2="976" x1="1632" />
            <wire x2="2256" y1="656" y2="656" x1="1632" />
            <wire x2="2256" y1="128" y2="128" x1="2192" />
            <wire x2="2256" y1="128" y2="656" x1="2256" />
        </branch>
        <branch name="XLXN_24">
            <wire x2="1680" y1="256" y2="256" x1="1616" />
            <wire x2="1616" y1="256" y2="480" x1="1616" />
            <wire x2="2240" y1="480" y2="480" x1="1616" />
            <wire x2="2240" y1="480" y2="736" x1="2240" />
            <wire x2="2240" y1="736" y2="736" x1="2208" />
        </branch>
        <branch name="XLXN_27(7:0)">
            <wire x2="1680" y1="384" y2="384" x1="1632" />
            <wire x2="1632" y1="384" y2="432" x1="1632" />
            <wire x2="2336" y1="432" y2="432" x1="1632" />
            <wire x2="2336" y1="432" y2="1056" x1="2336" />
            <wire x2="2336" y1="1056" y2="1056" x1="2208" />
        </branch>
        <branch name="data">
            <wire x2="2416" y1="384" y2="384" x1="2192" />
        </branch>
        <iomarker fontsize="28" x="2416" y="384" name="data" orien="R0" />
        <branch name="SCLK">
            <wire x2="2400" y1="192" y2="192" x1="2192" />
        </branch>
        <iomarker fontsize="28" x="2400" y="192" name="SCLK" orien="R0" />
        <branch name="XLXN_34(7:0)">
            <wire x2="1664" y1="32" y2="320" x1="1664" />
            <wire x2="1680" y1="320" y2="320" x1="1664" />
            <wire x2="2224" y1="32" y2="32" x1="1664" />
            <wire x2="2224" y1="32" y2="992" x1="2224" />
            <wire x2="2224" y1="992" y2="992" x1="2208" />
        </branch>
        <branch name="CE">
            <wire x2="2400" y1="256" y2="256" x1="2192" />
        </branch>
        <iomarker fontsize="28" x="2400" y="256" name="CE" orien="R0" />
        <branch name="A">
            <wire x2="3984" y1="832" y2="832" x1="3952" />
        </branch>
        <iomarker fontsize="28" x="3984" y="832" name="A" orien="R0" />
        <branch name="B">
            <wire x2="3984" y1="896" y2="896" x1="3952" />
        </branch>
        <iomarker fontsize="28" x="3984" y="896" name="B" orien="R0" />
        <branch name="C">
            <wire x2="3984" y1="960" y2="960" x1="3952" />
        </branch>
        <iomarker fontsize="28" x="3984" y="960" name="C" orien="R0" />
        <branch name="D">
            <wire x2="3984" y1="1024" y2="1024" x1="3952" />
        </branch>
        <iomarker fontsize="28" x="3984" y="1024" name="D" orien="R0" />
        <branch name="E">
            <wire x2="3984" y1="1088" y2="1088" x1="3952" />
        </branch>
        <iomarker fontsize="28" x="3984" y="1088" name="E" orien="R0" />
        <branch name="F">
            <wire x2="3984" y1="1152" y2="1152" x1="3952" />
        </branch>
        <iomarker fontsize="28" x="3984" y="1152" name="F" orien="R0" />
        <branch name="G">
            <wire x2="3984" y1="1216" y2="1216" x1="3952" />
        </branch>
        <iomarker fontsize="28" x="3984" y="1216" name="G" orien="R0" />
        <branch name="SEL0">
            <wire x2="3984" y1="1280" y2="1280" x1="3952" />
        </branch>
        <iomarker fontsize="28" x="3984" y="1280" name="SEL0" orien="R0" />
        <branch name="SEL1">
            <wire x2="3984" y1="1344" y2="1344" x1="3952" />
        </branch>
        <iomarker fontsize="28" x="3984" y="1344" name="SEL1" orien="R0" />
        <branch name="SEL2">
            <wire x2="3984" y1="1408" y2="1408" x1="3952" />
        </branch>
        <iomarker fontsize="28" x="3984" y="1408" name="SEL2" orien="R0" />
        <branch name="SEL3">
            <wire x2="3984" y1="1472" y2="1472" x1="3952" />
        </branch>
        <iomarker fontsize="28" x="3984" y="1472" name="SEL3" orien="R0" />
        <branch name="SEL4">
            <wire x2="3984" y1="1536" y2="1536" x1="3952" />
        </branch>
        <iomarker fontsize="28" x="3984" y="1536" name="SEL4" orien="R0" />
        <branch name="SEL5">
            <wire x2="3984" y1="1600" y2="1600" x1="3952" />
        </branch>
        <iomarker fontsize="28" x="3984" y="1600" name="SEL5" orien="R0" />
        <branch name="clk">
            <wire x2="1584" y1="128" y2="128" x1="1392" />
            <wire x2="1680" y1="128" y2="128" x1="1584" />
            <wire x2="1584" y1="128" y2="560" x1="1584" />
            <wire x2="1584" y1="560" y2="736" x1="1584" />
            <wire x2="1680" y1="736" y2="736" x1="1584" />
            <wire x2="2416" y1="560" y2="560" x1="1584" />
            <wire x2="2416" y1="560" y2="1056" x1="2416" />
            <wire x2="2640" y1="1056" y2="1056" x1="2416" />
            <wire x2="2800" y1="1056" y2="1056" x1="2640" />
            <wire x2="3568" y1="832" y2="832" x1="2640" />
            <wire x2="2640" y1="832" y2="1056" x1="2640" />
        </branch>
        <branch name="rst">
            <wire x2="1536" y1="192" y2="192" x1="1392" />
            <wire x2="1680" y1="192" y2="192" x1="1536" />
            <wire x2="1536" y1="192" y2="336" x1="1536" />
            <wire x2="1664" y1="336" y2="336" x1="1536" />
            <wire x2="1664" y1="336" y2="544" x1="1664" />
            <wire x2="1664" y1="544" y2="816" x1="1664" />
            <wire x2="1680" y1="816" y2="816" x1="1664" />
            <wire x2="2288" y1="544" y2="544" x1="1664" />
            <wire x2="2288" y1="544" y2="992" x1="2288" />
            <wire x2="2752" y1="992" y2="992" x1="2288" />
            <wire x2="2800" y1="992" y2="992" x1="2752" />
            <wire x2="3568" y1="928" y2="928" x1="2752" />
            <wire x2="2752" y1="928" y2="992" x1="2752" />
        </branch>
        <iomarker fontsize="28" x="1392" y="192" name="rst" orien="R180" />
        <iomarker fontsize="28" x="1392" y="128" name="clk" orien="R180" />
        <branch name="DOT">
            <wire x2="3984" y1="1664" y2="1664" x1="3952" />
        </branch>
        <iomarker fontsize="28" x="3984" y="1664" name="DOT" orien="R0" />
        <branch name="key1">
            <wire x2="1680" y1="1888" y2="1888" x1="1648" />
        </branch>
        <iomarker fontsize="28" x="1648" y="1888" name="key1" orien="R180" />
        <branch name="key2">
            <wire x2="1680" y1="1952" y2="1952" x1="1648" />
        </branch>
        <iomarker fontsize="28" x="1648" y="1952" name="key2" orien="R180" />
        <branch name="key3">
            <wire x2="1680" y1="2016" y2="2016" x1="1648" />
        </branch>
        <iomarker fontsize="28" x="1648" y="2016" name="key3" orien="R180" />
        <branch name="key4">
            <wire x2="1680" y1="2080" y2="2080" x1="1648" />
        </branch>
        <iomarker fontsize="28" x="1648" y="2080" name="key4" orien="R180" />
        <branch name="XLXN_67">
            <wire x2="2496" y1="2144" y2="2144" x1="2208" />
            <wire x2="2496" y1="1888" y2="2144" x1="2496" />
            <wire x2="2800" y1="1888" y2="1888" x1="2496" />
        </branch>
        <branch name="XLXN_68">
            <wire x2="2512" y1="2208" y2="2208" x1="2208" />
            <wire x2="2512" y1="1952" y2="2208" x1="2512" />
            <wire x2="2800" y1="1952" y2="1952" x1="2512" />
        </branch>
        <branch name="XLXN_69(2:0)">
            <wire x2="2528" y1="2272" y2="2272" x1="2208" />
            <wire x2="2528" y1="2016" y2="2272" x1="2528" />
            <wire x2="2800" y1="2016" y2="2016" x1="2528" />
        </branch>
    </sheet>
</drawing>