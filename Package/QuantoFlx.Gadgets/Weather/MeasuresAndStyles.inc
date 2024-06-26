[Variables]
Disabled=0

It_0=255,255,255
It_1=#Cl.Gn.Fg.Gn#

Vb.Un_0=metric
Vb.Un_1=imperial

Vb.Un_0.Tp=°C
Vb.Un_1.Tp=°F
Vb.Un_0.Ws=m/s
Vb.Un_1.Ws=mi/h

TTTx.Nw=#Tm.Current#:#CRLF#    [description_0h]#CRLF#    #Tm.Temperature#: [temp_0h:0][#Vb.Un_[#Un].Tp]#CRLF#    #Tm.Feels_Like#: [feels_like_0h:0][#Vb.Un_[#Un].Tp]#CRLF#    #Tm.Pressure#: [pressure_0h]hPa#CRLF#    #Tm.Humidity#: [humidity_0h]%#CRLF#    #Tm.Dew_Point#: [dew_point_0h:0][#Vb.Un_[#Un].Tp]#CRLF#    #Tm.UVI#: [uvi_0h]#CRLF#    #Tm.Cloudiness#: [clouds_0h]%#CRLF#    #Tm.Visibility#: [visibility_0h]km#CRLF#    #Tm.Wind_Speed#: [wind_speed_0h][#Vb.Un_[#Un].Ws] [twind_deg_0h]
TTTx.0d=[t_0d]:#CRLF#    [description_0d]#CRLF#    #Tm.Temperature#: [mintemp_0d:0] - [maxtemp_0d:0][#Vb.Un_[#Un].Tp]#CRLF#    #Tm.Humidity#: [humidity_0d]%
TTTx.1d=[t_1d]:#CRLF#    [description_1d]#CRLF#    #Tm.Temperature#: [mintemp_1d:0] - [maxtemp_1d:0][#Vb.Un_[#Un].Tp]#CRLF#    #Tm.Humidity#: [humidity_1d]%
TTTx.2d=[t_2d]:#CRLF#    [description_2d]#CRLF#    #Tm.Temperature#: [mintemp_2d:0] - [maxtemp_2d:0][#Vb.Un_[#Un].Tp]#CRLF#    #Tm.Humidity#: [humidity_2d]%
TTTx.3d=[t_3d]:#CRLF#    [description_3d]#CRLF#    #Tm.Temperature#: [mintemp_3d:0] - [maxtemp_3d:0][#Vb.Un_[#Un].Tp]#CRLF#    #Tm.Humidity#: [humidity_3d]%

ORA_0=[!ActivateConfig "#CURRENTCONFIG#" "Notice.ini"]
ORA_1=[]

Ms.Main.FA_0.01d=[]
Ms.Main.FA_0.01n=[]
Ms.Main.FA_0.02d=[]
Ms.Main.FA_0.02n=[]
Ms.Main.FA_0.03d=[]
Ms.Main.FA_0.03n=[]
Ms.Main.FA_0.04d=[]
Ms.Main.FA_0.04n=[]
Ms.Main.FA_0.05d=[]
Ms.Main.FA_0.05n=[]
Ms.Main.FA_0.09d=[]
Ms.Main.FA_0.09n=[]
Ms.Main.FA_0.10d=[]
Ms.Main.FA_0.10n=[]
Ms.Main.FA_0.11d=[]
Ms.Main.FA_0.11n=[]
Ms.Main.FA_0.13d=[]
Ms.Main.FA_0.13n=[]
Ms.Main.FA_0.50d=[]
Ms.Main.FA_0.50n=[]

Ms.Main.FA_1.01d=[!SetVariable "PnGdnt.Cl.01" "180,220,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!SetVariable "PnGdnt.Cl.02" "255,255,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!UpdateMeter *][!Redraw]
Ms.Main.FA_1.01n=[!SetVariable "PnGdnt.Cl.01" "180,220,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!SetVariable "PnGdnt.Cl.02" "255,255,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!UpdateMeter *][!Redraw]
Ms.Main.FA_1.02d=[!SetVariable "PnGdnt.Cl.01" "180,220,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!SetVariable "PnGdnt.Cl.02" "255,255,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!UpdateMeter *][!Redraw]
Ms.Main.FA_1.02n=[!SetVariable "PnGdnt.Cl.01" "180,220,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!SetVariable "PnGdnt.Cl.02" "255,255,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!UpdateMeter *][!Redraw]
Ms.Main.FA_1.03d=[!SetVariable "PnGdnt.Cl.01" "180,220,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!SetVariable "PnGdnt.Cl.02" "255,255,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!UpdateMeter *][!Redraw]
Ms.Main.FA_1.03n=[!SetVariable "PnGdnt.Cl.01" "180,220,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!SetVariable "PnGdnt.Cl.02" "255,255,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!UpdateMeter *][!Redraw]
Ms.Main.FA_1.04d=[!SetVariable "PnGdnt.Cl.01" "180,220,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!SetVariable "PnGdnt.Cl.02" "255,255,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!UpdateMeter *][!Redraw]
Ms.Main.FA_1.04n=[!SetVariable "PnGdnt.Cl.01" "180,220,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!SetVariable "PnGdnt.Cl.02" "255,255,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!UpdateMeter *][!Redraw]
Ms.Main.FA_1.05d=[!SetVariable "PnGdnt.Cl.01" "180,220,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!SetVariable "PnGdnt.Cl.02" "255,255,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!UpdateMeter *][!Redraw]
Ms.Main.FA_1.05n=[!SetVariable "PnGdnt.Cl.01" "180,220,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!SetVariable "PnGdnt.Cl.02" "255,255,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!UpdateMeter *][!Redraw]
Ms.Main.FA_1.09d=[!SetVariable "PnGdnt.Cl.01" "180,220,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!SetVariable "PnGdnt.Cl.02" "255,255,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!UpdateMeter *][!Redraw]
Ms.Main.FA_1.09n=[!SetVariable "PnGdnt.Cl.01" "180,220,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!SetVariable "PnGdnt.Cl.02" "255,255,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!UpdateMeter *][!Redraw]
Ms.Main.FA_1.10d=[!SetVariable "PnGdnt.Cl.01" "180,220,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!SetVariable "PnGdnt.Cl.02" "255,255,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!UpdateMeter *][!Redraw]
Ms.Main.FA_1.10n=[!SetVariable "PnGdnt.Cl.01" "180,220,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!SetVariable "PnGdnt.Cl.02" "255,255,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!UpdateMeter *][!Redraw]
Ms.Main.FA_1.11d=[!SetVariable "PnGdnt.Cl.01" "180,220,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!SetVariable "PnGdnt.Cl.02" "255,255,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!UpdateMeter *][!Redraw]
Ms.Main.FA_1.11n=[!SetVariable "PnGdnt.Cl.01" "180,220,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!SetVariable "PnGdnt.Cl.02" "255,255,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!UpdateMeter *][!Redraw]
Ms.Main.FA_1.13d=[!SetVariable "PnGdnt.Cl.01" "180,220,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!SetVariable "PnGdnt.Cl.02" "255,255,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!UpdateMeter *][!Redraw]
Ms.Main.FA_1.13n=[!SetVariable "PnGdnt.Cl.01" "180,220,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!SetVariable "PnGdnt.Cl.02" "255,255,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!UpdateMeter *][!Redraw]
Ms.Main.FA_1.50d=[!SetVariable "PnGdnt.Cl.01" "180,220,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!SetVariable "PnGdnt.Cl.02" "255,255,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!UpdateMeter *][!Redraw]
Ms.Main.FA_1.50n=[!SetVariable "PnGdnt.Cl.01" "180,220,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!SetVariable "PnGdnt.Cl.02" "255,255,255" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!UpdateMeter *][!Redraw]

[Ms.IsHaveAPIKey]
Measure=String
String=#OWMAPIKey#
RegExpSubstitute=1
Substitute="^(.+)$":"1","^$":"0"

[Rainmeter]
Update=1000
OnRefreshAction=[!Update][#ORA_[&Ms.IsHaveAPIKey]]
OnCloseAction=[!CommandMeasure "Ms.RunCommand" "Run"]
DynamicVariables=1

[Ms.Main]
Measure=WebParser
URL=https://api.openweathermap.org/data/2.5/onecall?lat=#Latitude#&lon=#Longitude#&exclude=minutely&lang=#Dv.OWM_Lg#&units=[#Vb.Un_[#Un]]&appid=#OWMAPIKey#
RegExp=(?siU)"current":{"dt":(.*),.*"temp":(.*),.*"feels_like":(.*),.*"pressure":(.*),.*"humidity":(.*),.*"dew_point":(.*),.*"uvi":(.*),.*"clouds":(.*),.*"visibility":(.*),.*"wind_speed":(.*),.*"wind_deg":(.*),.*"description":"(.*)".*"icon":"(.*)".*"dt":(.*),.*"temp":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*"dt":(.*),.*"temp":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*"dt":(.*),.*"temp":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*"dt":(.*),.*"temp":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*"dt":(.*),.*"temp":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*"dt":(.*),.*"temp":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*"dt":(.*),.*"temp":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*"dt":(.*),.*"temp":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*{"dt":(.*),.*"min":(.*),.*"max":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*"dt":(.*),.*"min":(.*),.*"max":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*"dt":(.*),.*"min":(.*),.*"max":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*"dt":(.*),.*"min":(.*),.*"max":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*
UpdateRate=#UpdateRate#
ProxyServer=#ProxyServer#
FinishAction=[!ShowMeterGroup Cstm.Gp.Main][!HideMeter Mt.Tx.Loading][!Update][!Redraw][!EnableMeasure Ms.Alert]
OnConnectErrorAction=[!HideMeter Mt.Tx.Loading][!ShowMeter Mt.WrngIm][!Delay 16][!Update][!SetOption "Mt.WrngIm" "ToolTipTitle" "#Tm.Web_Error.0001#"][!SetOption "Mt.WrngIm" "ToolTipText" "#St.Web_Error.0001#"][!Update][!Redraw]
OnRegExpErrorAction=[!EnableMeasure Ms.Error][!HideMeter Mt.Tx.Loading][!ShowMeter Mt.WrngIm][!Delay 16][!Update][!SetOption "Mt.WrngIm" "ToolTipTitle" "#Tm.Web_Error.0002#"][!SetOption "Mt.WrngIm" "LeftMouseupAction" """["https://openweathermap.org/api/one-call-3#popularerrors"]"""][!Update][!Redraw]
Disabled=#Disabled#
Debug=2

[M]
Measure=Script
ScriptFile=ConvertTime.lua
DynamicVariables=1

[dt_0h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=1
Substitute="":"0"
DynamicVariables=1

[temp_0h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=2
Substitute="":"0"
DynamicVariables=1

[feels_like_0h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=3
Substitute="":"0"
DynamicVariables=1

[pressure_0h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=4
Substitute="":"0"
DynamicVariables=1

[humidity_0h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=5
Substitute="":"0"
DynamicVariables=1

[dew_point_0h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=6
Substitute="":"0"
DynamicVariables=1

[uvi_0h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=7
Substitute="":"0"
DynamicVariables=1

[clouds_0h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=8
Substitute="":"0"
DynamicVariables=1

[visibility_0h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=9
Substitute="":"0"
DynamicVariables=1

[wind_speed_0h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=10
Substitute="":"0"
DynamicVariables=1

[wind_deg_0h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=11
Substitute="":"0"
DynamicVariables=1

[description_0h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=12
Substitute="":"0"
DynamicVariables=1

[icon_0h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=13
Substitute="":"0"
DynamicVariables=1

[dt_1h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=14
Substitute="":"0"
DynamicVariables=1

[temp_1h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=15
Substitute="":"0"
DynamicVariables=1

[humidity_1h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=16
Substitute="":"0"
DynamicVariables=1

[description_1h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=17
Substitute="":"0"
DynamicVariables=1

[icon_1h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=18
Substitute="":"0"
DynamicVariables=1

[dt_2h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=19
Substitute="":"0"
DynamicVariables=1

[temp_2h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=20
Substitute="":"0"
DynamicVariables=1

[humidity_2h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=21
Substitute="":"0"
DynamicVariables=1

[description_2h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=22
Substitute="":"0"
DynamicVariables=1

[icon_2h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=23
Substitute="":"0"
DynamicVariables=1

[dt_3h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=24
Substitute="":"0"
DynamicVariables=1

[temp_3h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=25
Substitute="":"0"
DynamicVariables=1

[humidity_3h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=26
Substitute="":"0"
DynamicVariables=1

[description_3h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=27
Substitute="":"0"
DynamicVariables=1

[icon_3h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=28
Substitute="":"0"
DynamicVariables=1

[dt_4h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=29
Substitute="":"0"
DynamicVariables=1

[temp_4h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=30
Substitute="":"0"
DynamicVariables=1

[humidity_4h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=31
Substitute="":"0"
DynamicVariables=1

[description_4h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=32
Substitute="":"0"
DynamicVariables=1

[icon_4h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=33
Substitute="":"0"
DynamicVariables=1

[dt_5h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=34
Substitute="":"0"
DynamicVariables=1

[temp_5h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=35
Substitute="":"0"
DynamicVariables=1

[humidity_5h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=36
Substitute="":"0"
DynamicVariables=1

[description_5h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=37
Substitute="":"0"
DynamicVariables=1

[icon_5h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=38
Substitute="":"0"
DynamicVariables=1

[dt_6h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=39
Substitute="":"0"
DynamicVariables=1

[temp_6h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=40
Substitute="":"0"
DynamicVariables=1

[humidity_6h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=41
Substitute="":"0"
DynamicVariables=1

[description_6h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=42
Substitute="":"0"
DynamicVariables=1

[icon_6h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=43
Substitute="":"0"
DynamicVariables=1

[dt_7h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=44
Substitute="":"0"
DynamicVariables=1

[temp_7h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=45
Substitute="":"0"
DynamicVariables=1

[humidity_7h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=46
Substitute="":"0"
DynamicVariables=1

[description_7h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=47
Substitute="":"0"
DynamicVariables=1

[icon_7h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=48
Substitute="":"0"
DynamicVariables=1

[dt_8h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=49
Substitute="":"0"
DynamicVariables=1

[temp_8h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=50
Substitute="":"0"
DynamicVariables=1

[humidity_8h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=51
Substitute="":"0"
DynamicVariables=1

[description_8h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=52
Substitute="":"0"
DynamicVariables=1

[icon_8h]
Measure=WebParser
URL=[Ms.Main]
StringIndex=53
Substitute="":"0"
DynamicVariables=1

[dt_0d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=54
Substitute="":"0"
DynamicVariables=1

[mintemp_0d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=55
Substitute="":"0"
DynamicVariables=1

[maxtemp_0d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=56
Substitute="":"0"
DynamicVariables=1

[humidity_0d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=57
Substitute="":"0"
DynamicVariables=1

[description_0d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=58
Substitute="":"0"
DynamicVariables=1

[icon_0d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=59
Substitute="":"0"
DynamicVariables=1

[dt_1d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=60
Substitute="":"0"
DynamicVariables=1

[mintemp_1d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=61
Substitute="":"0"
DynamicVariables=1

[maxtemp_1d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=62
Substitute="":"0"
DynamicVariables=1

[humidity_1d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=63
Substitute="":"0"
DynamicVariables=1

[description_1d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=64
Substitute="":"0"
DynamicVariables=1

[icon_1d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=65
Substitute="":"0"
DynamicVariables=1

[dt_2d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=66
Substitute="":"0"
DynamicVariables=1

[mintemp_2d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=67
Substitute="":"0"
DynamicVariables=1

[maxtemp_2d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=68
Substitute="":"0"
DynamicVariables=1

[humidity_2d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=69
Substitute="":"0"
DynamicVariables=1

[description_2d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=70
Substitute="":"0"
DynamicVariables=1

[icon_2d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=71
Substitute="":"0"
DynamicVariables=1

[dt_3d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=72
Substitute="":"0"
DynamicVariables=1

[mintemp_3d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=73
Substitute="":"0"
DynamicVariables=1

[maxtemp_3d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=74
Substitute="":"0"
DynamicVariables=1

[humidity_3d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=75
Substitute="":"0"
DynamicVariables=1

[description_3d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=76
Substitute="":"0"
DynamicVariables=1

[icon_3d]
Measure=WebParser
URL=[Ms.Main]
StringIndex=77
Substitute="":"0"
DynamicVariables=1

[fwind_deg_0h]
Measure=Calc
Formula=[wind_deg_0h]<22.5?1:([wind_deg_0h]<67.5?2:([wind_deg_0h]<112.5?3:([wind_deg_0h]<157.5?4:([wind_deg_0h]<202.5?5:([wind_deg_0h]<247.5?6:([wind_deg_0h]<292.5?7:([wind_deg_0h]<337.5?8:([wind_deg_0h]<360?1:1))))))))
DynamicVariables=1

[twind_deg_0h]
Measure=String
String=[fwind_deg_0h]
Substitute="1":"#Tm.N#","2":"#Tm.NE#","3":"#Tm.E#","4":"#Tm.SE#","5":"#Tm.S#","6":"#Tm.SW#","7":"#Tm.W#","8":"#Tm.NW#"
DynamicVariables=1

[t_0h]
Measure=String
String=Z[&M:HA[#Tf]([&d[#CURRENTSECTION]])]
Substitute="Z0":"","Z":""
DynamicVariables=1

[t_1h]
Measure=String
String=Z[&M:H[#Tf]([&d[#CURRENTSECTION]])]
Substitute="Z0":"","Z":""
DynamicVariables=1

[t_2h]
Measure=String
String=Z[&M:H[#Tf]([&d[#CURRENTSECTION]])]
Substitute="Z0":"","Z":""
DynamicVariables=1

[t_3h]
Measure=String
String=Z[&M:H[#Tf]([&d[#CURRENTSECTION]])]
Substitute="Z0":"","Z":""
DynamicVariables=1

[t_4h]
Measure=String
String=Z[&M:H[#Tf]([&d[#CURRENTSECTION]])]
Substitute="Z0":"","Z":""
DynamicVariables=1

[t_5h]
Measure=String
String=Z[&M:H[#Tf]([&d[#CURRENTSECTION]])]
Substitute="Z0":"","Z":""
DynamicVariables=1

[t_6h]
Measure=String
String=Z[&M:H[#Tf]([&d[#CURRENTSECTION]])]
Substitute="Z0":"","Z":""
DynamicVariables=1

[t_7h]
Measure=String
String=Z[&M:H[#Tf]([&d[#CURRENTSECTION]])]
Substitute="Z0":"","Z":""
DynamicVariables=1

[t_8h]
Measure=String
String=Z[&M:H[#Tf]([&d[#CURRENTSECTION]])]
Substitute="Z0":"","Z":""
DynamicVariables=1

[t_0d]
Measure=String
String=#Tm.Today#
DynamicVariables=1

[t_1d]
Measure=String
String=[&M:W([&d[#CURRENTSECTION]])]
Substitute=#DtSuTt#
DynamicVariables=1

[t_2d]
Measure=String
String=[&M:W([&d[#CURRENTSECTION]])]
Substitute=#DtSuTt#
DynamicVariables=1

[t_3d]
Measure=String
String=[&M:W([&d[#CURRENTSECTION]])]
Substitute=#DtSuTt#
DynamicVariables=1

[Ms.Alert]
Measure=WebParser
URL=file://#CURRENTPATH#WebParserDump.txt
UpdateRate=#UpdateRate#
RegExp=(?siU)"sender_name":"(.*)".*"event":"(.*)".*"start":(.*),.*"end":(.*),.*"description":"(.*)".*
FinishAction=[!Delay 16][!SetOption "Mt.Title" "Text" "#Tm.Alert# | #LocationName# | [t_0h]"][!SetOption "Mt.Title" "ToolTipTitle" "[Alertevent]"][!SetOption "Mt.Title" "ToolTipText" "[tAlertstart] - [tAlertend]#CRLF#[Alertdescription]#CRLF##CRLF#[Alertsender_name]"][!Update][!Redraw]
OnRegExpErrorAction=[]
Disabled=1
DynamicVariables=1

[Alertsender_name]
Measure=WebParser
URL=[Ms.Alert]
StringIndex=1
DynamicVariables=1

[Alertevent]
Measure=WebParser
URL=[Ms.Alert]
StringIndex=2
DynamicVariables=1

[dtAlertstart]
Measure=WebParser
URL=[Ms.Alert]
StringIndex=3
DynamicVariables=1

[dtAlertend]
Measure=WebParser
URL=[Ms.Alert]
StringIndex=4
DynamicVariables=1

[Alertdescription]
Measure=WebParser
URL=[Ms.Alert]
StringIndex=5
Substitute="\n":"#CRLF#"
DynamicVariables=1


[tAlertstart]
Measure=String
String=[&M:C([&d[#CURRENTSECTION]])]
DynamicVariables=1

[tAlertend]
Measure=String
String=[&M:C([&d[#CURRENTSECTION]])]
DynamicVariables=1


[ptemp_0h]
Measure=Calc
Formula=([temp_0h]-[mintemp_0d])/(Max(([maxtemp_0d]-[mintemp_0d]),1))
MinValue=0
MaxValue=1
DynamicVariables=1

[Ms.Error]
Measure=WebParser
URL=file://#CURRENTPATH#WebParserDump.txt
UpdateRate=#UpdateRate#
RegExp=(?siU)"cod":(.*),.*"message": "(.*)".*
FinishAction=[!Update][!Delay 500][!Update][!SetOption "Mt.WrngIm" "ToolTipText" """#St.Web_Error.0002#"""][!Update][!Redraw]
Disabled=1
DynamicVariables=1

[cod]
Measure=WebParser
URL=[Ms.Error]
StringIndex=1
DynamicVariables=1

[message]
Measure=WebParser
URL=[Ms.Error]
StringIndex=2
DynamicVariables=1

[Ms.RunCommand]
Measure=Plugin
Plugin=RunCommand
Program=cmd.exe /u /c
Parameter=del /f /s /q /a #CURRENTPATH#WebParserDump.txt

[St.Cstm.Gp.Main]
Group=Cstm.Gp.Main
Hidden=1

[St.Cstm.Title]
Text=#LocationName# | [t_0h]
InlinePattern=#Tm.Alert#
InlinePattern2=#Tm.Alert#
InlineSetting=Weight | (Clamp((#Ft.Wt.Gn#+#Ft.Wt.Bd#),1,999))
InlineSetting2=Color | #Cl.Wrng.Fg.Gn#,(255*#Sc#*#Ft.Sc.Gn#)

[St.Cstm.Tx.Loading]
Text=#Tm.Loading#
X=(#CURRENTCONFIGWIDTH#/2)
Y=(#CURRENTCONFIGHEIGHT#/2)
FontSize=(12*#sc#*#Ft.Sc.Gn#)
StringAlign=CenterCenter

[St.Cstm.WtIm]
ImageTint=[#It_[#MonoIcons]]
DynamicVariables=1

[St.SsBt]
X=((256-16-8)*#Sc#)
Y=((16-8)*#Sc#)
W=(16*#sc#)
H=(16*#sc#)
ImageName=#@#Image\MonoIcons\16\Settings.png
LeftMouseUpAction=#Ac.Skin_Settings#
ToolTipText=#Tm.Skin_Settings#

[St.SsBtH]
X=([Mt.SsBt:X]-4*#sc#)
Y=([Mt.SsBt:Y]-4*#sc#)
Shape=Rectangle 0,0,(24*#sc#),(24*#sc#),(#Cr#/4),(#Cr#/4) | #Da.Sk# | #Fl.Cl.Hv#
DynamicVariables=1

[St.Cstm.NwWtIm]
ImageName=#Pk@#Image\Weather_#MonoIcons#\[icon_0h]
X=((30-32/2)*#sc#)
Y=((56-32/2)*#sc#)
W=(32*#sc#)
H=(32*#sc#)
ToolTipText=#TTTx.Nw#

[St.Cstm.NwTp]
Text=[temp_0h:0]
X=(60*#sc#)
Y=(56*#sc#)
FontFace=#Ft.Fc.Cl#
FontWeight=(Clamp(#Ft.Wt.Cl#,1,999))
StringAlign=LeftCenter
FontSize=(24*#sc#*#Ft.Sc.Gn#)

[St.Cstm.NwTpUn]
Text=[#Vb.Un_[#Un].Tp]
X=([Mt.NwTp:XW])
Y=((56-16)*#sc#)

[St.Cstm.NwWtSt]
Text=[description_0h]
StringAlign=RightCenter
StringCase=Proper
X=((256-12)*#sc#)
Y=((56-10)*#sc#)

[St.Cstm.NwWtHm]
Text=💧 [humidity_0h]%
StringAlign=RightCenter
StringCase=Proper
X=((256-12)*#sc#)
Y=((56+10)*#sc#)

[St.Cstm.Ln.01.01.Tx]
FontColor=#Cl.Gn.Fg.Gn#,(225*#Op.Fg#)
Y=(88*#sc#)
StringAlign=LeftCenter
[St.Cstm.Ln.01.02.Tx]
Y=((88+20)*#sc#)
StringAlign=LeftCenter
[St.Cstm.Ln.01.02.Im]
Y=((88+20-8)*#sc#)
[St.Cstm.Ln.02.01.Tx]
FontColor=#Cl.Gn.Fg.Gn#,(225*#Op.Fg#)
Y=(46*#sc#)
StringAlign=LeftCenter
[St.Cstm.Ln.02.02.Tx]
Y=((46+20)*#sc#)
StringAlign=LeftCenter
[St.Cstm.Ln.02.02.Im]
Y=((46+20-8)*#sc#)

[St.Cstm.NwFl.Tt]
Text=#Tm.Feels_Like#
X=(12*#sc#)
[St.Cstm.NwFl.Tx]
Text=[feels_like_0h:0]°
X=([Mt.NwFl.Tt:X])
[St.Cstm.NwWs.Tt]
Text=#Tm.Wind_Speed#
X=(Max([Mt.NwFl.Tt:XW],[Mt.NwFl.Tx:XW])+12*#sc#)
[St.Cstm.NwWs.Im]
ImageName=#Pk@#Image\MonoIcons\16\WindDeg_[fwind_deg_0h]
W=(16*#sc#)
H=(16*#sc#)
X=0r
[St.Cstm.NwWs.Tx]
Text=[wind_speed_0h][#Vb.Un_[#Un].Ws]
X=([Mt.NwWs.Im:XW]+4*#sc#)
[St.Cstm.TdTp.Tt]
Text=#Tm.Today#
X=(Max([Mt.NwWs.Tt:XW],[Mt.NwWs.Tx:XW])+12*#sc#)
[St.Cstm.TdTp.Im]
ImageName=#Pk@#Image\MonoIcons\16\Weather_[icon_0d]
W=(16*#sc#)
H=(16*#sc#)
X=0r
ToolTipText=#TTTx.0d##CRLF##TTTx.1d##CRLF##TTTx.2d##CRLF##TTTx.3d#
[St.Cstm.TdTp.Tx]
Text=[mintemp_0d:0] - [maxtemp_0d:0]°
X=([Mt.TdTp.Im:XW]+4*#sc#)
[St.Cstm.NwDp.Tt]
Text=#Tm.Dew_Point#
X=(Max([Mt.NwWs.Tt:XW],[Mt.NwWs.Tx:XW])+12*#sc#)
[St.Cstm.NwDp.Tx]
Text=[dew_point_0h:0]°
X=([Mt.NwDp.Tt:X])

[St.Cstm.Ps.TdTpHr.XNx.01]
X=(60*#sc#)r
Y=0r

[St.Cstm.TdTpHr.00.01]
Shape=Rectangle 0,0,((256-8*2)*#sc#),((128-8)*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Op#,(255*#Op.Bg#)
Shape2=Rectangle (-1*#sc#),(-1*#sc#),((256-8*2+2)*#sc#),((128-8+2)*#sc#),(#Cr#/2+1*#sc#),(#Cr#/2+1*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,32
Shape3=Rectangle 0,0,((256-8*2)*#sc#),((128-8)*#sc#),(#Cr#/2),(#Cr#/2)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle ((60-1/2)*#sc#),0,(1*#sc#),((128-8)*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,32
Shape6=Rectangle ((60*2-1/2)*#sc#),0,(1*#sc#),((128-8)*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,32
Shape7=Rectangle ((60*3-1/2)*#sc#),0,(1*#sc#),((128-8)*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,32
X=(8*#sc#)
Y=(128*#sc#)
DynamicVariables=1
[St.Cstm.TdTpHr.00.02]
Shape=Rectangle 0,0,((256-8*2)*#sc#),(128*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Op#,(255*#Op.Bg#)
Shape2=Rectangle (-1*#sc#),(-1*#sc#),((256-8*2+2)*#sc#),((128-8+2)*#sc#),(#Cr#/2-1*#sc#),(#Cr#/2-1*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,32
Shape3=Rectangle 0,0,((256-8*2)*#sc#),((128-8)*#sc#),(#Cr#/2),(#Cr#/2)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle ((60-1/2)*#sc#),0,(1*#sc#),(128*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,32
Shape6=Rectangle ((60*2-1/2)*#sc#),0,(1*#sc#),(128*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,32
Shape7=Rectangle ((60*3-1/2)*#sc#),0,(1*#sc#),(128*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,32
X=(8*#sc#)
Y=(128*#sc#)
DynamicVariables=1

[St.Cstm.Ps.TdTpHr.01.01]
X=(38*#sc#)
Y=((128+16)*#sc#)
[St.Cstm.Ps.TdTpHr.02.01]
X=((38-10)*#Sc#)
Y=((128+44-10)*#sc#)
[St.Cstm.Ps.TdTpHr.03.01]
X=(38*#sc#)
Y=((128+76)*#sc#)
[St.Cstm.Ps.TdTpHr.04.01]
X=(38*#sc#)
Y=((128+100)*#sc#)
[St.Cstm.Ps.TdTpHr.01.02]
X=(38*#sc#)
Y=((128+16+4)*#sc#)
[St.Cstm.Ps.TdTpHr.02.02]
X=((38-10)*#Sc#)
Y=((128+44-10+4)*#sc#)
[St.Cstm.Ps.TdTpHr.03.02]
X=(38*#sc#)
Y=((128+76+4)*#sc#)
[St.Cstm.Ps.TdTpHr.04.02]
X=(38*#sc#)
Y=((128+100+4)*#sc#)

[St.Cstm.TdTpHr.01.01]
Text=[t_1h]
StringAlign=CenterCenter
[St.Cstm.TdTpHr.02.01]
Text=[t_2h]
StringAlign=CenterCenter
[St.Cstm.TdTpHr.03.01]
Text=[t_3h]
StringAlign=CenterCenter
[St.Cstm.TdTpHr.04.01]
Text=[t_4h]
StringAlign=CenterCenter
[St.Cstm.TdTpHr.01.02]
ImageName=#Pk@#Image\Weather_#MonoIcons#\[icon_1h]
W=(20*#sc#)
H=(20*#sc#)
ToolTipText=[description_1h]
[St.Cstm.TdTpHr.02.02]
ImageName=#Pk@#Image\Weather_#MonoIcons#\[icon_2h]
W=(20*#sc#)
H=(20*#sc#)
ToolTipText=[description_2h]
[St.Cstm.TdTpHr.03.02]
ImageName=#Pk@#Image\Weather_#MonoIcons#\[icon_3h]
W=(20*#sc#)
H=(20*#sc#)
ToolTipText=[description_3h]
[St.Cstm.TdTpHr.04.02]
ImageName=#Pk@#Image\Weather_#MonoIcons#\[icon_4h]
W=(20*#sc#)
H=(20*#sc#)
ToolTipText=[description_4h]
[St.Cstm.TdTpHr.01.03]
Text=[temp_1h:0]°
StringAlign=CenterCenter
[St.Cstm.TdTpHr.02.03]
Text=[temp_2h:0]°
StringAlign=CenterCenter
[St.Cstm.TdTpHr.03.03]
Text=[temp_3h:0]°
StringAlign=CenterCenter
[St.Cstm.TdTpHr.04.03]
Text=[temp_4h:0]°
StringAlign=CenterCenter
[St.Cstm.TdTpHr.01.04]
Text=💧 [humidity_1h:0]%
StringAlign=CenterCenter
FontSize=(8*#sc#*#Ft.Sc.Gn#)
FontColor=#Cl.Gn.Fg.Gn#,(128*#Op.Fg#)
[St.Cstm.TdTpHr.02.04]
Text=💧 [humidity_2h:0]%
StringAlign=CenterCenter
FontSize=(8*#sc#*#Ft.Sc.Gn#)
FontColor=#Cl.Gn.Fg.Gn#,(128*#Op.Fg#)
[St.Cstm.TdTpHr.03.04]
Text=💧 [humidity_3h:0]%
StringAlign=CenterCenter
FontSize=(8*#sc#*#Ft.Sc.Gn#)
FontColor=#Cl.Gn.Fg.Gn#,(128*#Op.Fg#)
[St.Cstm.TdTpHr.04.04]
Text=💧 [humidity_4h:0]%
StringAlign=CenterCenter
FontSize=(8*#sc#*#Ft.Sc.Gn#)
FontColor=#Cl.Gn.Fg.Gn#,(128*#Op.Fg#)

[St.Cstm.Ps.DlTp.YNx.01]
X=0r
Y=(32*#sc#)r

[St.Cstm.DlTp.01.01]
ImageName=#Pk@#Image\Weather_#MonoIcons#\[icon_0d]
W=(16*#sc#)
H=(16*#sc#)
X=(12*#sc#)
Y=((256+8)*#sc#)
ToolTipText=[description_0d]
[St.Cstm.DlTp.02.01]
ImageName=#Pk@#Image\Weather_#MonoIcons#\[icon_1d]
W=(16*#sc#)
H=(16*#sc#)
ToolTipText=[description_1d]
[St.Cstm.DlTp.03.01]
ImageName=#Pk@#Image\Weather_#MonoIcons#\[icon_1d]
W=(16*#sc#)
H=(16*#sc#)
ToolTipText=[description_2d]
[St.Cstm.DlTp.04.01]
ImageName=#Pk@#Image\Weather_#MonoIcons#\[icon_1d]
W=(16*#sc#)
H=(16*#sc#)
ToolTipText=[description_3d]
[Mt.DlTp.01.02]
Text=#Tm.Today#
StringAlign=LeftCenter
X=(36*#sc#)
Y=((256+16)*#sc#)
[Mt.DlTp.02.02]
Text=[t_1d]
StringAlign=LeftCenter
[Mt.DlTp.03.02]
Text=[t_2d]
StringAlign=LeftCenter
[Mt.DlTp.04.02]
Text=[t_3d]
StringAlign=LeftCenter
[Mt.DlTp.01.03]
Text=[mintemp_0d:0] - [maxtemp_0d:0]°
StringAlign=LeftCenter
X=((Max([Mt.DlTp.01.02:XW],(Max([Mt.DlTp.02.02:XW],(Max([Mt.DlTp.03.02:XW],[Mt.DlTp.04.02:XW]))))))+8*#sc#)
Y=((256+16)*#sc#)
[Mt.DlTp.02.03]
Text=[mintemp_1d:0] - [maxtemp_1d:0]°
StringAlign=LeftCenter
[Mt.DlTp.03.03]
Text=[mintemp_2d:0] - [maxtemp_2d:0]°
StringAlign=LeftCenter
[Mt.DlTp.04.03]
Text=[mintemp_3d:0] - [maxtemp_3d:0]°
StringAlign=LeftCenter
[Mt.DlTp.01.04]
Text=💧 [humidity_0d:0]%
StringAlign=RightCenter
FontColor=#Cl.Gn.Fg.Gn#,(128*#Op.Fg#)
X=((256-12)*#sc#)
Y=((256+16)*#sc#)
InlinePattern=💧
InlineSetting=Size | (8*#sc#*#Ft.Sc.Gn#)
[Mt.DlTp.02.04]
Text=💧 [humidity_1d:0]%
StringAlign=RightCenter
FontColor=#Cl.Gn.Fg.Gn#,(128*#Op.Fg#)
InlinePattern=💧
InlineSetting=Size | (8*#sc#*#Ft.Sc.Gn#)
[Mt.DlTp.03.04]
Text=💧 [humidity_2d:0]%
StringAlign=RightCenter
FontColor=#Cl.Gn.Fg.Gn#,(128*#Op.Fg#)
InlinePattern=💧
InlineSetting=Size | (8*#sc#*#Ft.Sc.Gn#)
[Mt.DlTp.04.04]
Text=💧 [humidity_3d:0]%
StringAlign=RightCenter
FontColor=#Cl.Gn.Fg.Gn#,(128*#Op.Fg#)
InlinePattern=💧
InlineSetting=Size | (8*#sc#*#Ft.Sc.Gn#)