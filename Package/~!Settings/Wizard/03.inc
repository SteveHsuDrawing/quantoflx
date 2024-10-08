[Variables]
HdBkBt=0
BkBtAc=[!WriteKeyValue "Variables" "Page" "02" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
QtBtAc=[]
CfBtAc_0=[]
CfBtAc_1=[]

HdNtBt=0
NtBtTx=#Tm.Next#
NtBtAc=[!WriteKeyValue "Variables" "Page" "05" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]

[Mt.Title]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Title
Text=#St.Setup.0100#
[Mt.TestPic]
Meter=Image
MeterStyle=St.ZnCt
ImageName=#Pk@#Image\HDPITest
ImageTint=#Cl.Ac.Bg.Gn#
X=((#CURRENTCONFIGWIDTH#-360)/2)
Y=(112*#sc#)
W=(360)
H=(100)
[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Ps.Tx.YN.01F
Text=#St.Setup.0101#
InlinePattern=//.*?//
InlineSetting=Italic
InlinePattern2=\*\*.*?\*\*
InlineSetting2=Weight | (Clamp((#Ft.Wt.Gn#+#Ft.Wt.Bd#),1,999))
InlinePattern3=__.*?__
InlineSetting3=Underline
InlinePattern4=--.*?--
InlineSetting4=Strikethrough
InlinePattern5=``.*?``
InlineSetting5=Face | Lucida Sans Typewriter
InlinePattern6=@@.*?@@
InlineSetting6=Color | #Cl.Ac.Bg.Gn#
InlinePattern7=\^\^.*?\^\^
InlineSetting7=Case | Upper
InlinePattern8=\+{2}.*?\+{2}
InlineSetting8=Size | (14*#Sc#*#Ft.Sc.Gn#)
InlinePattern9=\+{4}.*?\+{4}
InlineSetting9=Size | (18*#Sc#*#Ft.Sc.Gn#)
InlinePattern10=\+{6}.*?\+{6}
InlineSetting10=Size | (22*#Sc#*#Ft.Sc.Gn#)
InlinePattern11=\*\*|//|__|--|``|\^\^|@@|\+\+
InlineSetting11=Size | 0.01
LeftMouseUpAction=["https://github.com/SteveHsuDrawing/quantoflx/wiki/Guide-for-New-Users#if-the-rainmeter-skins-appear-blurry-on-your-device"]
MouseActionCursor=1
MouseActionCursorName=HAND