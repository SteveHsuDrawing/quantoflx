[Rainmeter]
DynamicVariables=1
AccurateText=1
Update=-1
RightMouseUpAction=[!SkinCustomMenu]

ContextTitle=[#CmLs.[#Sk.Nm].[#CM].T01]
ContextTitle2=[#CmLs.[#Sk.Nm].[#CM].T02]
ContextTitle3=[#CmLs.[#Sk.Nm].[#CM].T03]
ContextTitle4=[#CmLs.[#Sk.Nm].[#CM].T04]
ContextTitle5=[#CmLs.[#Sk.Nm].[#CM].T05]
ContextTitle6=[#CmLs.[#Sk.Nm].[#CM].T06]
ContextTitle7=[#CmLs.[#Sk.Nm].[#CM].T07]
ContextTitle8=[#CmLs.[#Sk.Nm].[#CM].T08]
ContextTitle9=[#CmLs.[#Sk.Nm].[#CM].T09]
ContextTitle10=[#CmLs.[#Sk.Nm].[#CM].T10]
ContextTitle11=[#CmLs.[#Sk.Nm].[#CM].T11]
ContextTitle12=[#CmLs.[#Sk.Nm].[#CM].T12]
ContextTitle13=[#CmLs.[#Sk.Nm].[#CM].T13]
ContextTitle14=[#CmLs.[#Sk.Nm].[#CM].T14]
ContextTitle15=[#CmLs.[#Sk.Nm].[#CM].T15]
ContextTitle16=[#CmLs.[#Sk.Nm].[#CM].T16]
ContextTitle17=[#CmLs.[#Sk.Nm].[#CM].T17]
ContextTitle18=[#CmLs.[#Sk.Nm].[#CM].T18]
ContextTitle19=[#CmLs.[#Sk.Nm].[#CM].T19]
ContextTitle20=[#CmLs.[#Sk.Nm].[#CM].T20]
ContextTitle21=[#CmLs.[#Sk.Nm].[#CM].T21]
ContextTitle22=[#CmLs.[#Sk.Nm].[#CM].T22]
ContextTitle23=[#CmLs.[#Sk.Nm].[#CM].T23]
ContextTitle24=[#CmLs.[#Sk.Nm].[#CM].T24]
ContextTitle25=[#CmLs.[#Sk.Nm].[#CM].T25]
ContextAction=[#CmLs.[#Sk.Nm].[#CM].A01]
ContextAction2=[#CmLs.[#Sk.Nm].[#CM].A02]
ContextAction3=[#CmLs.[#Sk.Nm].[#CM].A03]
ContextAction4=[#CmLs.[#Sk.Nm].[#CM].A04]
ContextAction5=[#CmLs.[#Sk.Nm].[#CM].A05]
ContextAction6=[#CmLs.[#Sk.Nm].[#CM].A06]
ContextAction7=[#CmLs.[#Sk.Nm].[#CM].A07]
ContextAction8=[#CmLs.[#Sk.Nm].[#CM].A08]
ContextAction9=[#CmLs.[#Sk.Nm].[#CM].A09]
ContextAction10=[#CmLs.[#Sk.Nm].[#CM].A10]
ContextAction11=[#CmLs.[#Sk.Nm].[#CM].A11]
ContextAction12=[#CmLs.[#Sk.Nm].[#CM].A12]
ContextAction13=[#CmLs.[#Sk.Nm].[#CM].A13]
ContextAction14=[#CmLs.[#Sk.Nm].[#CM].A14]
ContextAction15=[#CmLs.[#Sk.Nm].[#CM].A15]
ContextAction16=[#CmLs.[#Sk.Nm].[#CM].A16]
ContextAction17=[#CmLs.[#Sk.Nm].[#CM].A17]
ContextAction18=[#CmLs.[#Sk.Nm].[#CM].A18]
ContextAction19=[#CmLs.[#Sk.Nm].[#CM].A19]
ContextAction20=[#CmLs.[#Sk.Nm].[#CM].A20]
ContextAction21=[#CmLs.[#Sk.Nm].[#CM].A21]
ContextAction22=[#CmLs.[#Sk.Nm].[#CM].A22]
ContextAction23=[#CmLs.[#Sk.Nm].[#CM].A23]
ContextAction24=[#CmLs.[#Sk.Nm].[#CM].A24]
ContextAction25=[#CmLs.[#Sk.Nm].[#CM].A25]

MouseActionCursor=0
DefaultKeepOnScreen=0
BackgroundMode=2
SolidColor=0,0,0,(#EzSl#)
SelectedColor=#Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#,128

[Variables]
Project.Name=Quanto Flx
Null=0

Pk@=#ROOTCONFIGPATH##Pk.Rt#\#Pk.Nm#\@\
Ac.Variants=[!SetVariable "CM" "CMStyle"][!Delay 16][!Update][!SkinCustomMenu][!Delay 16][!Update][!SetVariable "CM" "CMCommon"][!Delay 16][!Update]
Ac.Skin_Settings=[!ActivateConfig "#CURRENTCONFIG#" "Settings.ini"]
Ac.Manage_Project=[!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\Main\" "Main.ini"][!Refresh "#ROOTCONFIG#\Package\~!Settings\Main\" "Main.ini"]
Ac.Refresh=[!Refresh]
Ac.Unload=[!DeactivateConfig "#CURRENTCONFIG#"]
Ac.More=[!SkinMenu "#CURRENTCONFIG#"]
Tf_0=%#I:%M
Tf_1=%#H:%M
Tf_0_Ex=%#I:%M %p
Tf_1_Ex=%#H:%M
Tf_0_AMPM=%p
Tf_1_AMPM=" "

@include=#@#Config\Settings.inc
@include2=#@#Config\Language\en-us\Terms.inc
@include3=#@#Config\Language\#Lg#\Terms.inc
Cl.Ac.Ar=((#Cl.Ac.R#+#Cl.Ac.G#+#Cl.Ac.B#)/3)
; Average Value of Accent Color ((R+G+B)/3)
@include4=#@#Config\ColorScheme\#Cl.Sh#\#Sk.Ty#.inc

CM=CMCommon

Da.Sk=StrokeWidth 0 | Stroke Color 0,0,0,0
; Disable Stroke
Da.Bg=Fill Color 0,0,0,0
; To make a Blank Shape, usually used in Restricted Zone

Fl.Cl.Bd=Fill Color 0,0,0,(128*#Op.Bd#)
; Fill in Borders color
Fl.Cl.Ob=Fill Color #Cl.Gn.Fg.Gn#,(32*#Cl.SwBd#)
; Fill in Option Borders color
Fl.Cl.Hv=Fill Color #Cl.Gn.Fg.Gn#,12
; Fill in Hover color

Cl.Cb.-1=#Cl.Gn.Fg.Gn#
Cl.Cb.0=#Cl.Gn.Fg.Gn#
Cl.Cb.1=#Cl.Ac.Bg.Gn#
; Check Box Color

[St.Ft]
; Global Font Style
FontFace=#Ft.Fc.Gn#
FontSize=(10*#Sc#*#Ft.Sc.Gn#)
FontColor=#Cl.Gn.Fg.Gn#,(255*#Op.Fg#)
FontWeight=(Clamp(#Ft.Wt.Gn#,1,999))
AntiAlias=1
DynamicVariables=1

[St.Ft.Bd]
; Make the text (Global Font) Bolder. Must be used with "St.Ft"
FontWeight=(Clamp((#Ft.Wt.Gn#+#Ft.Wt.Bd#),1,999))

[St.Sl]
; Protect text (Global Font) from "Op.Fg". Must be used with "St.Ft" or "St.Mi"
FontColor=#Cl.Gn.Fg.Gn#
ImageTint=#Cl.Gn.Fg.Gn#

[St.Ft.Ww]
; Word warp. Must be used with "St.Ft"
ClipString=2

[St.Ft.Splk]
; Superlink Style. Must be used with "St.Ft"
FontColor=#Cl.Ac.Bg.Gn#,(255*#Op.Fg#)
InlineSetting=None
InlineSetting2=None
InlinePattern=.*
InlinePattern2=.*
MouseActionCursor=1
MouseActionCursorName=HAND
MouseOverAction=[!SetOption #CURRENTSECTION# "InlineSetting" "Underline"][!SetOption #CURRENTSECTION# "InlineSetting2" "Color | #Cl.Ac.Bg.Gn#"][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# "InlineSetting" "None"][!SetOption #CURRENTSECTION# "InlineSetting2" "None"][!Update]
LeftMouseUpAction=[]

[St.Ft.Splk.Sl]
; Superlink Style, protecting text from "Op.Fg". Must be used with "St.Ft"
FontColor=#Cl.Ac.Bg.Gn#
InlineSetting=None
InlinePattern=.*
MouseActionCursor=1
MouseActionCursorName=HAND
MouseOverAction=[!SetOption #CURRENTSECTION# "InlineSetting" "Underline"][!Update]
MouseLeaveAction=[!SetOption #CURRENTSECTION# "InlineSetting" "None"][!Update]
LeftMouseUpAction=[]

[St.Rz]
; Restricted Zone Style
LeftMouseUpAction=[]
LeftMouseDownAction=[]
RightMouseUpAction=[]
RightMouseDownAction=[]
DynamicVariables=1

[St.Mi]
; Monochrome Icon Style
ImageTint=#Cl.Gn.Fg.Gn#,(255*#Op.Fg#)
SolidColor=0,0,0,1
DynamicVariables=1

[St.Hv]
; Hover Style
Hidden=1

[St.Bt.Gn]
; Button Style, in response to one Hover Meter
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]
DynamicVariables=1

[St.Bt.Mt]
; Button Style, in response to multiple Hover Meters in a Group
MouseOverAction=[!ShowMeterGroup H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeterGroup H#CURRENTSECTION#][!Redraw]
DynamicVariables=1

[St.Bt.Sp]
; Button Style, for "Shape" Meters ONLY
Hover=#Da.Bg#
MouseOverAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Fl.Cl.Hv#"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Da.Bg#"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
DynamicVariables=1

[St.WrngIm]
ImageName=#@#Image\MonoIcons\32\Warning
W=(32*#sc#)
H=(32*#sc#)
X=(#CURRENTCONFIGWIDTH#/2-16*#sc#)
Y=(#CURRENTCONFIGHEIGHT#/2-16*#sc#)
DynamicVariables=1
Hidden=1
ToolTipTitle=Text
ToolTipText=Text

[St.ZnCt]
; Set "Mt.Zn" as a container
Container=Mt.Zn
DynamicVariables=1
[St.ZnCt2]
; Set "Mt.Zn2" as a container
Container=Mt.Zn2
DynamicVariables=1
[St.ZnCt3]
; Set "Mt.Zn3" as a container
Container=Mt.Zn3
DynamicVariables=1
[St.ZnCt4]
; Set "Mt.Zn4" as a container
Container=Mt.Zn4
DynamicVariables=1