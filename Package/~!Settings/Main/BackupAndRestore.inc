[Variables]
HdTp=1
@include=#@#Config\Parameter\SystemDefault.inc

[Mt.Cstm.Op.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Ip.Op.1|St.Ip.Ps.Op.X0
Hidden=0
[Mt.Cstm.Op.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Ip.Op.1|St.Ip.Ps.Op.Dn
Hidden=0

[Mt.Op.11-]
Meter=Image
MeterStyle=St.ZnCt|St.Ip.Ic|St.Mi|St.Sl|St.Ip.Ps.Ic.X0
ImageName=#Pk@#Image\MonoIcons\20\BackupSettings
Hidden=0
[Mt.Op.12-]
Meter=Image
MeterStyle=St.ZnCt|St.Ip.Ic|St.Mi|St.Sl|St.Ip.Ps.Op.Dn
ImageName=#Pk@#Image\MonoIcons\20\RestoreSettings
Hidden=0

[Mt.Op.11--]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ip.Tx.Op|St.Ip.Tx.Op.W1|St.Ip.Tx.Op.D1|St.Ft.Ww|St.Ip.Ps.Tx.X0
Text=[#OpLs.BackupSettings.Nm][#CRLF][#OpLs.BackupSettings.Dc]
InlinePattern=[#OpLs.BackupSettings.Nm]#CRLF#
InlinePattern2=[#OpLs.BackupSettings.Nm]#CRLF#
Hidden=0
[Mt.Op.12--]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ip.Tx.Op|St.Ip.Tx.Op.W1|St.Ip.Tx.Op.D1|St.Ft.Ww|St.Ip.Ps.Op.Dn
Text=[#OpLs.RestoreSettings.Nm][#CRLF][#OpLs.RestoreSettings.Dc]
InlinePattern=[#OpLs.RestoreSettings.Nm]#CRLF#
InlinePattern2=[#OpLs.RestoreSettings.Nm]#CRLF#
Hidden=0

[Mt.Cstm.Splk.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Ww
Text=#St.Set_Backup_Directory.0001#
X=([Mt.Cstm.Op.01:X]+4*#sc#)
Y=([Mt.Cstm.Op.01:YH]+12*#sc#)
W=(512*#sc#)
FontColor=#Cl.Gn.Fg.Gn#,128

[Mt.Cstm.11.00]
Meter=Shape
MeterStyle=St.ZnCt2|St.Op.Ct.98
LeftMouseUpAction=[!WriteKeyValue "Variables" "Sl.Pk" "#Sl.Pk#" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Prcs" "0" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "MDGS" "0" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!Delay 16][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\BackupAndRestore" "Process.ini"][!Move (#CURRENTCONFIGX#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Package\~!Settings\BackupAndRestore"]
X=(393*#sc#)
Y=((170+77*0)*#sc#)
[Mt.Cstm.11.01]
Meter=String
MeterStyle=St.ZnCt2|St.Ft|St.Sl|St.Op.Ct.Tx.98
Text=#Tm.Execute#

[Ms.FlCs]
Measure=Plugin
Plugin=FileChoose
UseNewStyle=[#Dv.Sy_[#Sy.Vr].FlCs.UNS]
GetTarget=1
AllowNonstorageFolder=1
CopyLink=1
LinkCache=#@#Cache\Link\
GetIcon=0
IconCache=#@#Cache\Icon\
IconSize=1
ReturnValue=Path
FileInitialDirectory=#Bkup.Pth#\QuantoFlxBackup
ImageInitialDirectory=%HOMEDRIVE%%HOMEPATH%\Pictures
Command1=[!WriteKeyValue "Variables" "Sl.Fd" "$Path$" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Sl.Pk" "#Sl.Pk#" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "Prcs" "1" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!WriteKeyValue "Variables" "MDGS" "0" "#Pk@#Config\SkinSettings\BackupAndRestore.inc"][!Delay 16][!ActivateConfig "#ROOTCONFIG#\Package\~!Settings\BackupAndRestore" "Confirm.ini"][!Move (#CURRENTCONFIGX#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Package\~!Settings\BackupAndRestore"]
DynamicVariables=1

[Mt.Cstm.12.00]
Meter=Shape
MeterStyle=St.ZnCt2|St.Op.Ct.98
LeftMouseUpAction=[!CommandMeasure Ms.FlCs "ChooseFolder 1"]
X=(393*#sc#)
Y=((170+77*1)*#sc#)
[Mt.Cstm.12.01]
Meter=String
MeterStyle=St.ZnCt2|St.Ft|St.Sl|St.Op.Ct.Tx.98
Text=#Tm.Choose_a_Folder#