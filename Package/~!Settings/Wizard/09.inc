[Variables]
HdBkBt=1
BkBtAc=[]
QtBtAc=[]
CfBtAc_0=[]
CfBtAc_1=[]

HdNtBt=0
NtBtTx=#Tm.OK#
NtBtAc=[!WriteKeyValue "Variables" "Page" "00" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh "#ROOTCONFIG#\Package\~!Settings\Main"][!DeactivateConfig "#CURRENTCONFIG#"]

@include=#@#Config\Language\en-us\Colors.inc
@include2=#@#Config\Language\#Lg#\Colors.inc

Vr.Theme_01=[!WriteKeyValue "Variables" "Cl.Sh"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Dt"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Ag"  "270" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.St"  "0.2" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Op"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Bd"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Cl"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Cr"     "10"  "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sp"     "2"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bg"  "0.8" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Fg"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bd"  "0.1" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.X" "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.Y" "0"   "#@#Config\Settings.inc"]
Vr.Theme_02=[!WriteKeyValue "Variables" "Cl.Sh"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Dt"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Ag"  "270" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.St"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Op"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Bd"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Cl"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Cr"     "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sp"     "2"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bg"  "0.8" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Fg"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bd"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.X" "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.Y" "0"   "#@#Config\Settings.inc"]
Vr.Theme_03=[!WriteKeyValue "Variables" "Cl.Sh"  "3"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Dt"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Ag"  "270" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.St"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Op"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Bd"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Cl"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Cr"     "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sp"     "2"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bg"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Fg"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bd"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.X" "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.Y" "0"   "#@#Config\Settings.inc"]
Vr.Theme_04=[!WriteKeyValue "Variables" "Cl.Sh"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Dt"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Ag"  "270" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.St"  "0.2" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Op"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Bd"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Cl"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Cr"     "10"  "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sp"     "2"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bg"  "0.8" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Fg"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bd"  "0.1" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.X" "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.Y" "0"   "#@#Config\Settings.inc"]
Vr.Theme_05=[!WriteKeyValue "Variables" "Cl.Sh"  "2"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Dt"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Ag"  "270" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.St"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Op"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Bd"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Cl"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Cr"     "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sp"     "2"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bg"  "0.5" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Fg"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bd"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.X" "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.Y" "0"   "#@#Config\Settings.inc"]
Vr.Theme_06=[!WriteKeyValue "Variables" "Cl.Sh"  "2"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Dt"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.Ag"  "270" "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Le.St"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Op"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Bd"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Hl.Cl"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Cr"     "10"  "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Sp"     "2"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bg"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Fg"  "1"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Op.Bd"  "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.X" "0"   "#@#Config\Settings.inc"][!WriteKeyValue "Variables" "Ppos.Y" "0"   "#@#Config\Settings.inc"]

[Mt.Title]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Title
Text=#St.Setup.0201#

[St.Cstm.Sp.00]
Shape=Rectangle 0,0,(160*#sc#),(140*#sc#) | Extend Hover | #da.sk#
LeftMouseUpAction=[]
MouseActionCursor=1
MouseActionCursorName=HAND
[St.Cstm.Sp.00.01]
X=([Mt.Sel.00.00:X]+10*#sc#)
Y=([Mt.Sel.00.00:Y]+10*#sc#)
[St.Cstm.Sp.00.02]
X=(160*#sc#)r
Y=(0)r
[St.Cstm.Sp.00.03]
X=(160*#sc#)r
Y=(0)r
[St.Cstm.Sp.00.04]
X=([Mt.Sel.00.00:X]+10*#sc#)
Y=(140*#sc#)r
[St.Cstm.Sp.00.05]
X=(160*#sc#)r
Y=(0)r
[St.Cstm.Sp.00.06]
X=(160*#sc#)r
Y=(0)r

[St.Cstm.Im.01]
MeasureName=Ms.WlPp
W=(64*(#SCREENAREAWIDTH#/#SCREENAREAHEIGHT#)*#sc#)
H=(64*#sc#)
PreserveAspectRatio=2
[St.Cstm.Im.01.01]
X=([Mt.Sel.00.00:X]+(150-64*(#SCREENAREAWIDTH#/#SCREENAREAHEIGHT#)+10)*#sc#)
Y=([Mt.Sel.00.00:Y]+(10+10)*#sc#)
[St.Cstm.Im.01.02]
X=(160*#sc#)r
Y=(0)r
[St.Cstm.Im.01.03]
X=(160*#sc#)r
Y=(0)r
[St.Cstm.Im.01.04]
X=([Mt.Sel.00.00:X]+(150-64*(#SCREENAREAWIDTH#/#SCREENAREAHEIGHT#)+10)*#sc#)
Y=(140*#sc#)r
[St.Cstm.Im.01.05]
X=(160*#sc#)r
Y=(0)r
[St.Cstm.Im.01.06]
X=(160*#sc#)r
Y=(0)r

[St.Cstm.Im.02]
W=(150*#sc#)
H=(100*#sc#)
[St.Cstm.Im.02.01]
X=([Mt.Sel.00.00:X]+(10+10)*#sc#)
Y=([Mt.Sel.00.00:Y]+(10+10)*#sc#)
[St.Cstm.Im.02.02]
X=(160*#sc#)r
Y=(0)r
[St.Cstm.Im.02.03]
X=(160*#sc#)r
Y=(0)r
[St.Cstm.Im.02.04]
X=([Mt.Sel.00.00:X]+(10+10)*#sc#)
Y=(140*#sc#)r
[St.Cstm.Im.02.05]
X=(160*#sc#)r
Y=(0)r
[St.Cstm.Im.02.06]
X=(160*#sc#)r
Y=(0)r

[St.Cstm.Tx.03]
StringAlign=CenterCenter
[St.Cstm.Tx.03.01]
X=([Mt.Sel.00.00:X]+(84+10)*#sc#)
Y=([Mt.Sel.00.00:Y]+(125+10)*#sc#)
[St.Cstm.Tx.03.02]
X=(160*#sc#)r
Y=(0)r
[St.Cstm.Tx.03.03]
X=(160*#sc#)r
Y=(0)r
[St.Cstm.Tx.03.04]
X=([Mt.Sel.00.00:X]+(84+10)*#sc#)
Y=(140*#sc#)r
[St.Cstm.Tx.03.05]
X=(160*#sc#)r
Y=(0)r
[St.Cstm.Tx.03.06]
X=(160*#sc#)r
Y=(0)r

[St.Cstm.Sp.04]
Shape=Rectangle 0,0,(160*#sc#),(140*#sc#) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#
Shape2=Rectangle (2*#sc#),(2*#sc#),((160-4)*#sc#),((140-4)*#sc#)
Shape3=Combine Shape | Exclude Shape2
[St.Cstm.Sp.04.01]
X=([Mt.Sel.00.00:X]+10*#sc#)
Y=([Mt.Sel.00.00:Y]+10*#sc#)
[St.Cstm.Sp.04.02]
X=(160*#sc#)r
Y=(0)r
[St.Cstm.Sp.04.03]
X=(160*#sc#)r
Y=(0)r
[St.Cstm.Sp.04.04]
X=([Mt.Sel.00.00:X]+10*#sc#)
Y=(140*#sc#)r
[St.Cstm.Sp.04.05]
X=(160*#sc#)r
Y=(0)r
[St.Cstm.Sp.04.06]
X=(160*#sc#)r
Y=(0)r

[St.Cstm.Sp.05]
Shape=Rectangle 0,0,(64*(#SCREENAREAWIDTH#/#SCREENAREAHEIGHT#)*#sc#),(64*#sc#) | #da.sk# | Fill Color [Ms.DtCl]
[St.Cstm.Sp.05.01]
X=([Mt.Sel.00.00:X]+(150-64*(#SCREENAREAWIDTH#/#SCREENAREAHEIGHT#)+10)*#sc#)
Y=([Mt.Sel.00.00:Y]+(10+10)*#sc#)
[St.Cstm.Sp.05.02]
X=(160*#sc#)r
Y=(0)r
[St.Cstm.Sp.05.03]
X=(160*#sc#)r
Y=(0)r
[St.Cstm.Sp.05.04]
X=([Mt.Sel.00.00:X]+(150-64*(#SCREENAREAWIDTH#/#SCREENAREAHEIGHT#)+10)*#sc#)
Y=(140*#sc#)r
[St.Cstm.Sp.05.05]
X=(160*#sc#)r
Y=(0)r
[St.Cstm.Sp.05.06]
X=(160*#sc#)r
Y=(0)r

[Ms.WlPp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey="Control Panel\Desktop"
RegValue=WallPaper
DynamicVariables=1

[Ms.DtCl]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey="Control Panel\Colors"
RegValue=Background
Substitute=" ":","
DynamicVariables=1

[Mt.Sel.00.00]
Meter=Shape
MeterStyle=St.ZnCt
X=(38*#sc#)
Y=(105*#sc#)
Shape=Rectangle 0,0,(500*#sc#),(300*#sc#) | #da.sk# | Fill Color #Cl.Gn.Bg.Gn#
Shape2=Rectangle 0,0,(500*#sc#),(300*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,(64)
Shape3=Rectangle (#sc#),(#sc#),((500-2)*#sc#),((300-2)*#sc#)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1

[Mt.Sel.00.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.00|St.Bt.Sp|St.Cstm.Sp.00.01
LeftMouseUpAction=#Vr.Theme_01#[!WriteKeyValue "Variables" "Temp.ThmSl" "01" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh][!Refresh]
[Mt.Sel.00.02]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.00|St.Bt.Sp|St.Cstm.Sp.00.02
LeftMouseUpAction=#Vr.Theme_02#[!WriteKeyValue "Variables" "Temp.ThmSl" "02" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh][!Refresh]
[Mt.Sel.00.03]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.00|St.Bt.Sp|St.Cstm.Sp.00.03
LeftMouseUpAction=#Vr.Theme_03#[!WriteKeyValue "Variables" "Temp.ThmSl" "03" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh][!Refresh]
[Mt.Sel.00.04]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.00|St.Bt.Sp|St.Cstm.Sp.00.04
LeftMouseUpAction=#Vr.Theme_04#[!WriteKeyValue "Variables" "Temp.ThmSl" "04" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh][!Refresh]
[Mt.Sel.00.05]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.00|St.Bt.Sp|St.Cstm.Sp.00.05
LeftMouseUpAction=#Vr.Theme_05#[!WriteKeyValue "Variables" "Temp.ThmSl" "05" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh][!Refresh]
[Mt.Sel.00.06]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.00|St.Bt.Sp|St.Cstm.Sp.00.06
LeftMouseUpAction=#Vr.Theme_06#[!WriteKeyValue "Variables" "Temp.ThmSl" "06" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh][!Refresh]

[Mt.Sel.05.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.05|St.Cstm.Sp.05.01
[Mt.Sel.05.02]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.05|St.Cstm.Sp.05.02
[Mt.Sel.05.03]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.05|St.Cstm.Sp.05.03
[Mt.Sel.05.04]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.05|St.Cstm.Sp.05.04
[Mt.Sel.05.05]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.05|St.Cstm.Sp.05.05
[Mt.Sel.05.06]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.05|St.Cstm.Sp.05.06

[Mt.Sel.01.01]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.01|St.Cstm.Im.01.01
[Mt.Sel.01.02]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.01|St.Cstm.Im.01.02
[Mt.Sel.01.03]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.01|St.Cstm.Im.01.03
[Mt.Sel.01.04]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.01|St.Cstm.Im.01.04
[Mt.Sel.01.05]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.01|St.Cstm.Im.01.05
[Mt.Sel.01.06]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.01|St.Cstm.Im.01.06

[Mt.Sel.02.01]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.02|St.Cstm.Im.02.01
ImageName=#Pk@#Image\Theme_01
[Mt.Sel.02.02]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.02|St.Cstm.Im.02.02
ImageName=#Pk@#Image\Theme_02
[Mt.Sel.02.03]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.02|St.Cstm.Im.02.03
ImageName=#Pk@#Image\Theme_03
[Mt.Sel.02.04]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.02|St.Cstm.Im.02.04
ImageName=#Pk@#Image\Theme_04
[Mt.Sel.02.05]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.02|St.Cstm.Im.02.05
ImageName=#Pk@#Image\Theme_05
[Mt.Sel.02.06]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.02|St.Cstm.Im.02.06
ImageName=#Pk@#Image\Theme_06

[Mt.Sel.03.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cstm.Tx.03|St.Cstm.Tx.03.01
Text=#Tm.Theme.01#
[Mt.Sel.03.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cstm.Tx.03|St.Cstm.Tx.03.02
Text=#Tm.Theme.02#
[Mt.Sel.03.03]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cstm.Tx.03|St.Cstm.Tx.03.03
Text=#Tm.Theme.03#
[Mt.Sel.03.04]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cstm.Tx.03|St.Cstm.Tx.03.04
Text=#Tm.Theme.04#
[Mt.Sel.03.05]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cstm.Tx.03|St.Cstm.Tx.03.05
Text=#Tm.Theme.05#
[Mt.Sel.03.06]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.Cstm.Tx.03|St.Cstm.Tx.03.06
Text=#Tm.Theme.06#

[Mt.Sel.04.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.04|St.Cstm.Sp.04.01
Hidden=(#Temp.ThmSl#<>1)
[Mt.Sel.04.02]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.04|St.Cstm.Sp.04.02
Hidden=(#Temp.ThmSl#<>2)
[Mt.Sel.04.03]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.04|St.Cstm.Sp.04.03
Hidden=(#Temp.ThmSl#<>3)
[Mt.Sel.04.04]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.04|St.Cstm.Sp.04.04
Hidden=(#Temp.ThmSl#<>4)
[Mt.Sel.04.05]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.04|St.Cstm.Sp.04.05
Hidden=(#Temp.ThmSl#<>5)
[Mt.Sel.04.06]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Sp.04|St.Cstm.Sp.04.06
Hidden=(#Temp.ThmSl#<>6)
