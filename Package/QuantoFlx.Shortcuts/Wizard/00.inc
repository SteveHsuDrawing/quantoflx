[Variables]
HdBkBt=1
BkBtAc=[]
QtBtAc=[!WriteKeyValue "Variables" "Page" "00" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!DeactivateConfig "#CURRENTCONFIG#"]
CfBtAc_0=[!WriteKeyValue "Variables" "Page" "00" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!DeactivateConfig "#CURRENTCONFIG#"]
CfBtAc_1=[!WriteKeyValue "Variables" "Page" "00" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!DeactivateConfig "#CURRENTCONFIG#"]

HdNtBt=1
NtBtTx=#Tm.Next#
NtBtAc=[]

[Rainmeter]
OnRefreshAction=#InitializeAction#

[Mt.Title]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Title
Text=#St.Settings.0000#

[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Ps.Tx.YN.01
Text=#St.Settings.0001#

[Mt.Op.00.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Ps.Tx.YN.01F
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#-48*#sc#),(24*#sc#+[Mt.Op.00.02:H]+[Mt.Op.00.03:H]),(#Cr#/4),(#Cr#/4) | #da.sk# | Extend Hover
DynamicVariables=1
LeftMouseUpAction=[!CommandMeasure "Ms.FlCs_iP" "ChooseFile 1"]
[Mt.Op.00.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.NextArrowIcon
[Mt.Op.00.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionTextTitle|St.Ps.Tx.XN.01
Text=#St.Settings.0100#
[Mt.Op.00.03]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionText|St.Ps.Tx.YN.02
Text=#St.Settings.0101#

[Mt.Op.01.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Ps.Tx.YN.01F
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#-48*#sc#),(24*#sc#+[Mt.Op.01.02:H]+[Mt.Op.01.03:H]),(#Cr#/4),(#Cr#/4) | #da.sk# | Extend Hover
DynamicVariables=1
LeftMouseUpAction=[!CommandMeasure "Ms.FlCs_iP" "ChooseFolder 1"]
[Mt.Op.01.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.NextArrowIcon
[Mt.Op.01.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionTextTitle|St.Ps.Tx.XN.01
Text=#St.Settings.0200#
[Mt.Op.01.03]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionText|St.Ps.Tx.YN.02
Text=#St.Settings.0201#

[Mt.Op.02.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp|St.Ps.Tx.YN.01F
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#-48*#sc#),(24*#sc#+[Mt.Op.02.02:H]+[Mt.Op.02.03:H]),(#Cr#/4),(#Cr#/4) | #da.sk# | Extend Hover
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue "Variables" "Page" "01" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
[Mt.Op.02.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.NextArrowIcon
[Mt.Op.02.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionTextTitle|St.Ps.Tx.XN.01
Text=#St.Settings.0300#
[Mt.Op.02.03]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.OpTx|St.OptionText|St.Ps.Tx.YN.02
Text=#St.Settings.0301#

[Ms.FlCs_iP]
Measure=Plugin
Plugin=FileChoose
UseNewStyle=[#Dv.Sy_[#Sy.Vr].FlCs.UNS]
GetTarget=1
AllowNonstorageFolder=1
CopyLink=1
LinkCache=#@#Cache\Link\
GetIcon=1
IconCache=#Pk@#Config\SkinSettings\IconCache\
IconSize=3
ReturnValue=Path
FileInitialDirectory=%ProgramFiles%
ImageInitialDirectory=%USERPROFILE%\Pictures
Command1=[!WriteKeyValue Variables "Temp.StCt.Nm" "$Name$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue Variables "Temp.StCt.Im.Cl" "$Icon$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue Variables "Temp.StCt.Tg" "$Path$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue Variables "Temp.StCt.TgPm" "" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!WriteKeyValue "Variables" "Page" "01" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]