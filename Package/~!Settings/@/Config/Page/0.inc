[Variables]
Pg.Ty=Settings

; Write the File you want to modify
MdFl=#@#Config\Settings.inc

; Hide this Option or not
; 0 - Show
; 1 - Hide
Mt.Op.11----=1
Mt.Op.12----=0
Mt.Op.13----=0
Mt.Op.14----=0
Mt.Op.15----=0
Mt.Op.16----=0
Mt.Op.17----=0
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
Mt.Op.11-----=Null
Mt.Op.12-----=Language
Mt.Op.13-----=TimeFormat
Mt.Op.14-----=Units
Mt.Op.15-----=Username
Mt.Op.16-----=UserImage
Mt.Op.17-----=RefreshSystemSettings
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
Mt.Op.11------=0
Mt.Op.12------=1
Mt.Op.13------=1
Mt.Op.14------=1
Mt.Op.15------=1
Mt.Op.16------=1
Mt.Op.17------=1
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
Mt.Op.14-------=1
Mt.Op.15-------=0
Mt.Op.16-------=1
Mt.Op.17-------=1
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
Mt.Op.12--------=2
Mt.Op.13--------=3
Mt.Op.14--------=3
Mt.Op.15--------=1
Mt.Op.16--------=0
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
Mt.Op.12---------=Lg
Mt.Op.13---------=Tf
Mt.Op.14---------=Un
Mt.Op.15---------=Us.Nm
Mt.Op.16---------=Null
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
Mt.Op.12----------=[#[#Lg]]
Mt.Op.13----------=[#Tm.[#Tf]]
Mt.Op.14----------=[#Tm.[#Un]]
Mt.Op.15----------=[#Us.Nm]
Mt.Op.16----------=
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

CmLs.Main.CMSS_Mt.Op.12---.T01=#en-us#
CmLs.Main.CMSS_Mt.Op.12---.T02=#zh-cn#
CmLs.Main.CMSS_Mt.Op.12---.T03=#zh-tw#
CmLs.Main.CMSS_Mt.Op.12---.T04=
CmLs.Main.CMSS_Mt.Op.12---.A01=[!WriteKeyValue "Variables" "Lg" "en-us" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.12---.A02=[!WriteKeyValue "Variables" "Lg" "zh-cn" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.12---.A03=[!WriteKeyValue "Variables" "Lg" "zh-tw" "#MdFl#"][!Refresh]
CmLs.Main.CMSS_Mt.Op.12---.A04=[]

[Mt.Cstm.15.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.98
X=(393*#sc#)
Y=((170+77*5)*#sc#)
LeftMouseUpAction=[!CommandMeasure Ms.FlCs "ChooseImage 1"]
[Mt.Cstm.15.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Op.Ct.Tx.98
Text=#Tm.Browse_files#

[Ms.FlCs]
Measure=Plugin
Plugin=FileChoose
UseNewStyle=0
GetTarget=1
AllowNonstorageFolder=1
CopyLink=1
LinkCache=#@#Cache\Link\
GetIcon=0
IconCache=#@#Cache\Icon\
IconSize=1
ReturnValue=Path
FileInitialDirectory=%HOMEDRIVE%\
ImageInitialDirectory=%USERPROFILE%\Pictures
Command1=[!WriteKeyValue Variables "Us.Im" "$Path$" "#MdFl#"][!Refresh]

[Ms.Sy.Vr]
Measure=SysInfo
SysInfoType=OS_VERSION
RegExpSubstitute=1
Substitute="Windows ":"","Vista":"7","Server.*":"8"
DynamicVariables=1
UpdateDivider=-1
[Ms.Sy.Vr.Fm]
Measure=Calc
Formula=(Clamp((Round([&Ms.Sy.Vr],0)),7,11))
DynamicVariables=1
UpdateDivider=-1
[Ms.Sy.Vr.Dp]
Measure=String
String=Windows #Sy.Vr#
RegExpSubstitute=1
Substitute="^Windows 11$":"#Tm.Windows_11_or_Newer#","^Windows 8$":"#Tm.Windows_8_or_Other#","^Windows 7$":"#Tm.Windows_7_or_Older#"
[Ms.Sy.Dpi]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Control Panel\Desktop\WindowMetrics
RegValue=AppliedDPI
OutputType=Value
DynamicVariables=1
UpdateDivider=-1
[Ms.Sy.Drv]
Measure=String
String=%HOMEDRIVE%
Substitute=":":""
DynamicVariables=1
UpdateDivider=-1

[Mt.Cstm.16.00]
Meter=Shape
MeterStyle=St.ZnCt3|St.Op.Ct.98
X=(393*#sc#)
Y=((170+77*6)*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Sy.Vr" "[Ms.Sy.Vr.Fm]" "#MdFl#"][!WriteKeyValue "Variables" "Sy.Drv" "[Ms.Sy.Drv]" "#MdFl#"][!WriteKeyValue "Variables" "Sy.Dpi" "[Ms.Sy.Dpi]" "#MdFl#"][!Refresh]
[Mt.Cstm.16.01]
Meter=String
MeterStyle=St.ZnCt3|St.Ft|St.Sl|St.Op.Ct.Tx.98
Text=#Tm.Refresh#

[Mt.UsIm.Zn]
Meter=Shape
Shape=Ellipse ((64/2)*#sc#),((64/2)*#sc#),((64/2)*#sc#) | #da.sk#
X=(60*#sc#)
Y=(158*#sc#)
DynamicVariables=1
[Mt.UsIm]
Meter=Image
ImageName=#Us.Im#
Container=Mt.UsIm.Zn
W=(64*#sc#)
H=(64*#sc#)
DynamicVariables=1

[Mt.UsIm.Hello]
Meter=String
MeterStyle=St.ZnCt3|St.Ft
Text=#Tm.Hello#
StringAlign=LeftCenter
FontSize=(14*#sc#*#Ft.Sc.Gn#)
X=((60+64+16)*#sc#)
Y=((158+64/2)*#sc#)
InlinePattern=#Us.Nm#
InlineSetting=Weight | (Clamp((#Ft.Wt.Gn#+#Ft.Wt.Bd#),1,999))