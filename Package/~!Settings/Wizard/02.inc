[Variables]
HdBkBt=1
BkBtAc=[]
QtBtAc=[]
CfBtAc_0=[]
CfBtAc_1=[]

HdNtBt=0
NtBtTx=#Tm.Next#

NtBtAc_0=[!WriteKeyValue "Variables" "Page" "03" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
NtBtAc_1=[!WriteKeyValue "Variables" "Page" "05" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
NtBtAc=[#NtBtAc_[&Ms.Cstm.Calc.01]]

Vr.CstmA.Gdnt_01=0

@include=#@#Config\Language\LanguageList.inc

CmLs.Wizard.CMSS_Mt.Op.00.00.T01=#en-us#
CmLs.Wizard.CMSS_Mt.Op.00.00.T02=#zh-cn#
CmLs.Wizard.CMSS_Mt.Op.00.00.T03=#zh-tw#
CmLs.Wizard.CMSS_Mt.Op.00.00.T04=
CmLs.Wizard.CMSS_Mt.Op.00.00.A01=[!WriteKeyValue "Variables" "Lg" "en-us" "#@#Config\Settings.inc"][!Refresh]
CmLs.Wizard.CMSS_Mt.Op.00.00.A02=[!WriteKeyValue "Variables" "Lg" "zh-cn" "#@#Config\Settings.inc"][!Refresh]
CmLs.Wizard.CMSS_Mt.Op.00.00.A03=[!WriteKeyValue "Variables" "Lg" "zh-tw" "#@#Config\Settings.inc"][!Refresh]
CmLs.Wizard.CMSS_Mt.Op.00.00.A04=[]

[Rainmeter]
OnRefreshAction=[!Update][!CommandMeasure "Ms.An_Cstm" "Execute 1"]

[Ms.Cstm.Calc.01]
Measure=Calc
Formula=(#Sy.Dpi#=96)
DynamicVariables=1

[Ms.An_Cstm]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat AL.CstmA.Gdnt_01,15,500 | AL.CstmA.Rept_01
AL.CstmA.Gdnt_01=[!SetVariable Vr.CstmA.Gdnt_01 "(Frac((#Vr.CstmA.Gdnt_01#+1/500)))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_01][!Redraw]
AL.CstmA.Rept_01=[!CommandMeasure "Ms.An_Cstm" "Execute 1"]
DynamicVariables=1

[Mt.Title]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Title
Text=#St.Setup.0001#

[Mt.Welcome]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
Text=#Tm.Welcome#
X=(#CURRENTCONFIGWIDTH#/2)
Y=(#CURRENTCONFIGHEIGHT#/2-32*#sc#)
StringAlign=CenterCenter
FontSize=((48+8*abs(#Vr.CstmA.Gdnt_01#-0.5))*#sc#)
Group=Gp.AL.CstmA.Gdnt_01

[Mt.Welcome.00]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
Text=Willkommen
X=(#CURRENTCONFIGWIDTH#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+00/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+00/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+00/8))-0)*2):0))*(cos(((45+360*(00/4))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2-32*#sc#+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+00/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+00/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+00/8))-0)*2):0))*(sin(((45+360*(00/4))*PI)/180)))
StringAlign=CenterCenter
FontColor=#Cl.Gn.Fg.Gn#,(128*((((Frac(#Vr.CstmA.Gdnt_01#+00/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+00/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+00/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+00/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+00/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+00/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+00/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+00/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+00/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+00/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
Text=欢迎
X=(#CURRENTCONFIGWIDTH#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+01/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+01/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+01/8))-0)*2):0))*(cos(((45+360*(02/4))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2-32*#sc#+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+01/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+01/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+01/8))-0)*2):0))*(sin(((45+360*(02/4))*PI)/180)))
StringAlign=CenterCenter
FontColor=#Cl.Gn.Fg.Gn#,(128*((((Frac(#Vr.CstmA.Gdnt_01#+01/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+01/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+01/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+01/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+01/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+01/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+01/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+01/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+01/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+01/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
Text=Добро Пожаловать
X=(#CURRENTCONFIGWIDTH#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+02/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+02/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+02/8))-0)*2):0))*(cos(((45+360*(01/4))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2-32*#sc#+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+02/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+02/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+02/8))-0)*2):0))*(sin(((45+360*(01/4))*PI)/180)))
StringAlign=CenterCenter
FontColor=#Cl.Gn.Fg.Gn#,(128*((((Frac(#Vr.CstmA.Gdnt_01#+02/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+02/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+02/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+02/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+02/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+02/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+02/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+02/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+02/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+02/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.03]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
Text=Bienvenue
X=(#CURRENTCONFIGWIDTH#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+03/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+03/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+03/8))-0)*2):0))*(cos(((45+360*(03/4))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2-32*#sc#+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+03/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+03/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+03/8))-0)*2):0))*(sin(((45+360*(03/4))*PI)/180)))
StringAlign=CenterCenter
FontColor=#Cl.Gn.Fg.Gn#,(128*((((Frac(#Vr.CstmA.Gdnt_01#+03/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+03/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+03/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+03/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+03/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+03/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+03/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+03/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+03/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+03/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.04]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
Text=Benvenuto
X=(#CURRENTCONFIGWIDTH#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+04/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+04/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+04/8))-0)*2):0))*(cos(((45+360*(00/4))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2-32*#sc#+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+04/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+04/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+04/8))-0)*2):0))*(sin(((45+360*(00/4))*PI)/180)))
StringAlign=CenterCenter
FontColor=#Cl.Gn.Fg.Gn#,(128*((((Frac(#Vr.CstmA.Gdnt_01#+04/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+04/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+04/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+04/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+04/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+04/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+04/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+04/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+04/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+04/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.05]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
Text=ようこそ
X=(#CURRENTCONFIGWIDTH#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+05/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+05/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+05/8))-0)*2):0))*(cos(((45+360*(02/4))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2-32*#sc#+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+05/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+05/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+05/8))-0)*2):0))*(sin(((45+360*(02/4))*PI)/180)))
StringAlign=CenterCenter
FontColor=#Cl.Gn.Fg.Gn#,(128*((((Frac(#Vr.CstmA.Gdnt_01#+05/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+05/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+05/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+05/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+05/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+05/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+05/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+05/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+05/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+05/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.06]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
Text=환영
X=(#CURRENTCONFIGWIDTH#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+06/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+06/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+06/8))-0)*2):0))*(cos(((45+360*(01/4))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2-32*#sc#+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+06/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+06/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+06/8))-0)*2):0))*(sin(((45+360*(01/4))*PI)/180)))
StringAlign=CenterCenter
FontColor=#Cl.Gn.Fg.Gn#,(128*((((Frac(#Vr.CstmA.Gdnt_01#+06/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+06/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+06/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+06/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+06/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+06/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+06/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+06/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+06/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+06/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01
[Mt.Welcome.07]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
Text=Welcome
X=(#CURRENTCONFIGWIDTH#/2+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+07/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+07/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+07/8))-0)*2):0))*(cos(((45+360*(03/4))*PI)/180)))
Y=(#CURRENTCONFIGHEIGHT#/2-32*#sc#+(#CURRENTCONFIGWIDTH#/4)*((((Frac(#Vr.CstmA.Gdnt_01#+07/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+07/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+07/8))-0)*2):0))*(sin(((45+360*(03/4))*PI)/180)))
StringAlign=CenterCenter
FontColor=#Cl.Gn.Fg.Gn#,(128*((((Frac(#Vr.CstmA.Gdnt_01#+07/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+07/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+07/8))<0.25)?(((Frac(#Vr.CstmA.Gdnt_01#+07/8))-0)*4):(((-(Frac(#Vr.CstmA.Gdnt_01#+07/8))+0.5)>=1)?((-(Frac(#Vr.CstmA.Gdnt_01#+07/8))+0.5-1)*4):((-(Frac(#Vr.CstmA.Gdnt_01#+07/8))+0.5)*4))):0)))
FontSize=(48*#sc#*((((Frac(#Vr.CstmA.Gdnt_01#+07/8))>=0)&&((Frac(#Vr.CstmA.Gdnt_01#+07/8))<0.5)?(((Frac(#Vr.CstmA.Gdnt_01#+07/8))-0)*2):0)))
Group=Gp.AL.CstmA.Gdnt_01

[Mt.Op.00.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp
Shape=Rectangle 0,0,(240*#sc#),(32*#sc#),(#Cr#/4),(#Cr#/4) | Fill Color #Cl.Gn.Bg.Ti# | #da.sk# 
Shape2=Rectangle (-#sc#),(-#sc#),((240+2)*#sc#),((32+2)*#sc#),(#Cr#/4+#sc#),(#Cr#/4+#sc#) | #da.sk#  | #Fl.Cl.Ob#
Shape3=Rectangle 0,0,(240*#sc#),(32*#sc#),(#Cr#/4),(#Cr#/4)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle 0,0,(240*#sc#),(32*#sc#),(#Cr#/4),(#Cr#/4) | #da.sk# | Extend Hover
DynamicVariables=1
X=(#CURRENTCONFIGWIDTH#/2-(240/2)*#sc#)
Y=(#CURRENTCONFIGHEIGHT#/2+140*#sc#)
LeftMouseUpAction=[!SetVariable "CM" "CMSS_[#CURRENTSECTION]"][!Delay 16][!Update][!SkinCustomMenu][!Delay 16][!Update][!SetVariable "CM" "CMCommon"][!Delay 16][!Update]
[Mt.Op.00.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
Text=[#[#Lg]]
X=([Mt.Op.00.00:X]+8*#sc#)
Y=([Mt.Op.00.00:Y]+16*#sc#)
StringAlign=LeftCenter
[Mt.Op.00.02]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Sl
ImageName=#@#Image\MonoIcons\16\ADown
W=(16*#sc#)
H=(16*#sc#)
X=([Mt.Op.00.00:XW]-24*#sc#)
Y=([Mt.Op.00.00:Y]+8*#sc#)

[Mt.Op.01.00]
Meter=Image
MeterStyle=St.ZnCt
ImageName=#@#Image\MonoIcons\16\CheckBox#Tf#
ImageTint=[#Cl.Cb.[#Tf]]
W=(16*#sc#)
H=(16*#sc#)
X=([Mt.Op.00.00:X])
Y=([Mt.Op.00.00:Y]+(44)*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "Tf" "(1-#Tf#)" "#@#Config\Settings.inc"][!Refresh]
MouseActionCursor=1
MouseActionCursorName=HAND
[Mt.Op.02.00]
Meter=Image
MeterStyle=St.ZnCt
ImageName=#@#Image\MonoIcons\16\CheckBox#Un#
ImageTint=[#Cl.Cb.[#Un]]
W=(16*#sc#)
H=(16*#sc#)
X=0r
Y=(24*#sc#)r
LeftMouseUpAction=[!WriteKeyValue "Variables" "Un" "(1-#Un#)" "#@#Config\Settings.inc"][!Refresh]
MouseActionCursor=1
MouseActionCursorName=HAND
[Mt.Op.01.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
Text=#OpLs.TimeFormat.Nm#
X=([Mt.Op.00.00:X]+(16+8)*#sc#)
Y=([Mt.Op.00.00:Y]+(44+8)*#sc#)
StringAlign=LeftCenter
[Mt.Op.02.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl
Text=#OpLs.Units.Nm#
X=0r
Y=(24*#sc#)r
StringAlign=LeftCenter

[Ms.Sy.Vr.Dp]
Measure=String
String=Windows #Sy.Vr#
RegExpSubstitute=1
Substitute="^Windows 11$":"#Tm.Windows_11_or_Newer#","^Windows 8$":"#Tm.Windows_8_or_Other#","^Windows 7$":"#Tm.Windows_7_or_Older#"
[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx
Text=#St.Setup.0002#
FontColor=#Cl.Gn.Fg.Gn#,192
MeasureName=Ms.Sy.Vr.Dp
StringAlign=LeftCenter
X=(16*#Sc#)
Y=(550*#Sc#)