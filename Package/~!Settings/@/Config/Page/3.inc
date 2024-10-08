[Variables]
Pg.Ty=Settings

; Write the File you want to modify
MdFl=#@#Config\Settings.inc

; Hide this Option or not
; 0 - Show
; 1 - Hide
Mt.Op.11----=0
Mt.Op.12----=0
Mt.Op.13----=0
Mt.Op.14----=0
Mt.Op.15----=0
Mt.Op.16----=0
Mt.Op.17----=1
Mt.Op.18----=1
Mt.Op.21----=1
Mt.Op.22----=1
Mt.Op.23----=1
Mt.Op.24----=1
Mt.Op.25----=1
Mt.Op.26----=1
Mt.Op.27----=1
Mt.Op.28----=1

; Internal Name of this option to display
; If not needed, write "Null"
Mt.Op.11-----=TrayIcon
Mt.Op.12-----=AutoSwitchCS
Mt.Op.13-----=EnergySavingMode
Mt.Op.14-----=AutoESM
Mt.Op.15-----=EasierSelect
Mt.Op.16-----=TouchMode
Mt.Op.17-----=Null
Mt.Op.18-----=Null
Mt.Op.21-----=Null
Mt.Op.22-----=Null
Mt.Op.23-----=Null
Mt.Op.24-----=Null
Mt.Op.25-----=Null
Mt.Op.26-----=Null
Mt.Op.27-----=Null
Mt.Op.28-----=Null

; Option Width
; 0 - Short
; 1 - Wide
Mt.Op.11------=1
Mt.Op.12------=1
Mt.Op.13------=1
Mt.Op.14------=1
Mt.Op.15------=1
Mt.Op.16------=1
Mt.Op.17------=0
Mt.Op.18------=0
Mt.Op.21------=0
Mt.Op.22------=0
Mt.Op.23------=0
Mt.Op.24------=0
Mt.Op.25------=0
Mt.Op.26------=0
Mt.Op.27------=0
Mt.Op.28------=0

; Display description or not
; 0 - Hide
; 1 - Show
Mt.Op.11-------=0
Mt.Op.12-------=0
Mt.Op.13-------=1
Mt.Op.14-------=0
Mt.Op.15-------=1
Mt.Op.16-------=1
Mt.Op.17-------=0
Mt.Op.18-------=0
Mt.Op.21-------=0
Mt.Op.22-------=0
Mt.Op.23-------=0
Mt.Op.24-------=0
Mt.Op.25-------=0
Mt.Op.26-------=0
Mt.Op.27-------=0
Mt.Op.28-------=0

; The control type of this option
; 0 - Hide
; 1 - Long box (Text Input)
; 2 - Long box (Context Menu)
; 3 - Switcher
; 4 - Small box (Text Input)
; 5 - Small box (Context Menu)
; 6 - Switcher (No text)
Mt.Op.11--------=0
Mt.Op.12--------=0
Mt.Op.13--------=3
Mt.Op.14--------=0
Mt.Op.15--------=3
Mt.Op.16--------=3
Mt.Op.17--------=0
Mt.Op.18--------=0
Mt.Op.21--------=0
Mt.Op.22--------=0
Mt.Op.23--------=0
Mt.Op.24--------=0
Mt.Op.25--------=0
Mt.Op.26--------=0
Mt.Op.27--------=0
Mt.Op.28--------=0

; The Variable to modify
; If not needed, write "Null"
Mt.Op.11---------=Null
Mt.Op.12---------=Null
Mt.Op.13---------=Em
Mt.Op.14---------=Null
Mt.Op.15---------=EzSl
Mt.Op.16---------=TcMd
Mt.Op.17---------=Null
Mt.Op.18---------=Null
Mt.Op.21---------=Null
Mt.Op.22---------=Null
Mt.Op.23---------=Null
Mt.Op.24---------=Null
Mt.Op.25---------=Null
Mt.Op.26---------=Null
Mt.Op.27---------=Null
Mt.Op.28---------=Null

; Text displays in/beside the control
; If not needed, you can leave it blank
Mt.Op.11----------=
Mt.Op.12----------=
Mt.Op.13----------=[#Tm.[#Em]]
Mt.Op.14----------=
Mt.Op.15----------=[#Tm.[#EzSl]]
Mt.Op.16----------=[#Tm.[#TcMd]]
Mt.Op.17----------=
Mt.Op.18----------=
Mt.Op.21----------=
Mt.Op.22----------=
Mt.Op.23----------=
Mt.Op.24----------=
Mt.Op.25----------=
Mt.Op.26----------=
Mt.Op.27----------=
Mt.Op.28----------=

[Ms.Active.01]
Measure=Plugin
Plugin=ConfigActive
DynamicVariables=1
IfCondition=[&Ms.Active.01:IsActive("#ROOTCONFIG#\Package\~!Settings\TrayIcon")] = 1
IfTrueAction=[!SetOption Mt.Cstm.11.00 "LeftMouseUpAction" """[!DeactivateConfig "#ROOTCONFIG#\Package\~!Settings\TrayIcon"][!Update]"""][!Update][!Redraw]
IfFalseAction=[!SetOption Mt.Cstm.11.00 "LeftMouseUpAction" """[!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\TrayIcon" "Main.ini"][!Update]"""][!Update][!Redraw]
[Mt.Cstm.11.00]
Meter=Shape
MeterStyle=St.ZnCt3
X=((393-44)*#sc#)
Y=(170*#sc#)
Shape=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.01:IsActive("#ROOTCONFIG#\Package\~!Settings\TrayIcon")]],(192+63*([&Ms.Active.01:IsActive("#ROOTCONFIG#\Package\~!Settings\TrayIcon")]=1?1:0))
Shape2=Rectangle ((120+1)*#sc#),((6+1)*#sc#),((40-2)*#sc#),((20-2)*#sc#),((10-1)*#sc#),((10-1)*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.01:IsActive("#ROOTCONFIG#\Package\~!Settings\TrayIcon")]]
Shape3=Ellipse ((120+10+20*([&Ms.Active.01:IsActive("#ROOTCONFIG#\Package\~!Settings\TrayIcon")]=1?1:0))*#sc#),((6+10)*#sc#),(6*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.01:IsActive("#ROOTCONFIG#\Package\~!Settings\TrayIcon")]]
Shape4=Combine Shape | [#St.Op.Ct.3_[&Ms.Active.01:IsActive("#ROOTCONFIG#\Package\~!Settings\TrayIcon")]]
Shape5=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | #da.Bg#
Shape6=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Extend Hover
Hover=#Da.Bg#
DynamicVariables=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Fl.Cl.Hv.1#"][!Update][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Da.Bg#"][!Update][!Redraw]
DynamicVariables=1
[Mt.Cstm.11.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl
Text=[#Tm.[&Ms.Active.01:IsActive("#ROOTCONFIG#\Package\~!Settings\TrayIcon")]]
X=(457*#sc#)
Y=(186*#sc#)
StringAlign=RightCenter
[Mt.Cstm.11.02]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.99|St.Ip.Ps.Op.Ct.1.X1
Y=((170)*#sc#)
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\TrayIcon" "Settings.ini"][!Move (#CURRENTCONFIGX#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Package\~!Settings\TrayIcon"][!ZPos "1" "#ROOTCONFIG#\Package\~!Settings\TrayIcon"]
Hidden=([&Ms.Active.01:IsActive("#ROOTCONFIG#\Package\~!Settings\TrayIcon")]=-1?1:0)
[Mt.Cstm.11.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl
ImageName=#@#Image\MonoIcons\16\Settings
ImageTint=#Cl.Gn.Fg.Gn#,([&Ms.Active.01:IsActive("#ROOTCONFIG#\Package\~!Settings\TrayIcon")]=-1?128:255)
W=(16*#Sc#)
H=(16*#Sc#)
X=((521+8)*#sc#)
Y=((170+8)*#sc#)

[Ms.Active.02]
Measure=Plugin
Plugin=ConfigActive
DynamicVariables=1
IfCondition=[&Ms.Active.02:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")] = 1
IfTrueAction=[!SetOption Mt.Cstm.12.00 "LeftMouseUpAction" """[!DeactivateConfig "#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS"][!Update]"""][!Update][!Redraw]
IfFalseAction=[!SetOption Mt.Cstm.12.00 "LeftMouseUpAction" """[!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS" "Main.ini"][!Update]"""][!Update][!Redraw]
[Mt.Cstm.12.00]
Meter=Shape
MeterStyle=St.ZnCt3
X=((393-44)*#sc#)
Y=((170+77)*#sc#)
Shape=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.02:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")]],(192+63*([&Ms.Active.02:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")]=1?1:0))
Shape2=Rectangle ((120+1)*#sc#),((6+1)*#sc#),((40-2)*#sc#),((20-2)*#sc#),((10-1)*#sc#),((10-1)*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.02:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")]]
Shape3=Ellipse ((120+10+20*([&Ms.Active.02:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")]=1?1:0))*#sc#),((6+10)*#sc#),(6*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.02:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")]]
Shape4=Combine Shape | [#St.Op.Ct.3_[&Ms.Active.02:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")]]
Shape5=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | #da.Bg#
Shape6=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Extend Hover
Hover=#Da.Bg#
DynamicVariables=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Fl.Cl.Hv.1#"][!Update][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Da.Bg#"][!Update][!Redraw]
DynamicVariables=1
[Mt.Cstm.12.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl
Text=[#Tm.[&Ms.Active.02:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")]]
X=(457*#sc#)
Y=((186+77)*#sc#)
StringAlign=RightCenter
[Mt.Cstm.12.02]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.99|St.Ip.Ps.Op.Ct.1.X1
Y=((170+77)*#sc#)
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS" "Settings.ini"][!Move (#CURRENTCONFIGX#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS"][!ZPos "1" "#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS"]
Hidden=([&Ms.Active.02:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")]=-1?1:0)
[Mt.Cstm.12.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl
ImageName=#@#Image\MonoIcons\16\Settings
ImageTint=#Cl.Gn.Fg.Gn#,([&Ms.Active.02:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoSwitchCS")]=-1?128:255)
W=(16*#Sc#)
H=(16*#Sc#)
X=((521+8)*#sc#)
Y=((170+77+8)*#sc#)


[Ms.Active.03]
Measure=Plugin
Plugin=ConfigActive
DynamicVariables=1
IfCondition=[&Ms.Active.03:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoESM")] = 1
IfTrueAction=[!SetOption Mt.Cstm.14.00 "LeftMouseUpAction" """[!DeactivateConfig "#ROOTCONFIG#\Package\~!Settings\AutoESM"][!Update]"""][!Update][!Redraw]
IfFalseAction=[!SetOption Mt.Cstm.14.00 "LeftMouseUpAction" """[!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\AutoESM" "Main.ini"][!Update]"""][!Update][!Redraw]
[Mt.Cstm.14.00]
Meter=Shape
MeterStyle=St.ZnCt3
X=((393-44)*#sc#)
Y=((170+77*3)*#sc#)
Shape=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.02:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoESM")]],(192+63*([&Ms.Active.02:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoESM")]=1?1:0))
Shape2=Rectangle ((120+1)*#sc#),((6+1)*#sc#),((40-2)*#sc#),((20-2)*#sc#),((10-1)*#sc#),((10-1)*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.02:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoESM")]]
Shape3=Ellipse ((120+10+20*([&Ms.Active.02:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoESM")]=1?1:0))*#sc#),((6+10)*#sc#),(6*#sc#) | #da.sk# | Fill Color [#Cl.Cb.[&Ms.Active.02:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoESM")]]
Shape4=Combine Shape | [#St.Op.Ct.3_[&Ms.Active.02:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoESM")]]
Shape5=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | #da.Bg#
Shape6=Rectangle (120*#sc#),(6*#sc#),(40*#sc#),(20*#sc#),(10*#sc#),(10*#sc#) | #da.sk# | Extend Hover
Hover=#Da.Bg#
DynamicVariables=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Fl.Cl.Hv.1#"][!Update][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Da.Bg#"][!Update][!Redraw]
DynamicVariables=1
[Mt.Cstm.14.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl
Text=[#Tm.[&Ms.Active.02:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoESM")]]
X=(457*#sc#)
Y=((186+77*3)*#sc#)
StringAlign=RightCenter
[Mt.Cstm.14.02]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.99|St.Ip.Ps.Op.Ct.1.X1
Y=((170+77*3)*#sc#)
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\AutoESM" "Settings.ini"][!Move (#CURRENTCONFIGX#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Package\~!Settings\AutoESM"][!ZPos "1" "#ROOTCONFIG#\Package\~!Settings\AutoESM"]
Hidden=([&Ms.Active.02:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoESM")]=-1?1:0)
[Mt.Cstm.14.03]
Meter=Image
MeterStyle=St.ZnCt3|St.Mi|St.Sl
ImageName=#@#Image\MonoIcons\16\Settings
ImageTint=#Cl.Gn.Fg.Gn#,([&Ms.Active.02:IsActive("#ROOTCONFIG#\Package\~!Settings\AutoESM")]=-1?128:255)
W=(16*#Sc#)
H=(16*#Sc#)
X=((521+8)*#sc#)
Y=((170+77*3+8)*#sc#)

[Mt.Cstm.14.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.Wrng
X=(356*#sc#)
Y=(401*#sc#)
ToolTipText=#St.ScalingWrng.0001#
Hidden=1