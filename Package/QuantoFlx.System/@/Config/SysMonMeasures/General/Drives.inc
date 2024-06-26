[Variables]
MaxBytesPerSec=0
Type=0

Tm.|Ms.FreeDiskSpace.Type|.0=#Tm.Error#
Tm.|Ms.FreeDiskSpace.Type|.1=#Tm.No_drive#
Tm.|Ms.FreeDiskSpace.Type|.2=#Tm.Floppy_Disk_Drive#
Tm.|Ms.FreeDiskSpace.Type|.3=#Tm.Removable_Drive#
Tm.|Ms.FreeDiskSpace.Type|.4=#Tm.Local_Disk#
Tm.|Ms.FreeDiskSpace.Type|.5=#Tm.Network_Drive#
Tm.|Ms.FreeDiskSpace.Type|.6=#Tm.CD-ROM_Drive#
Tm.|Ms.FreeDiskSpace.Type|.7=#Tm.RAM_Disk#

|Mt.Eject|_Hidden.|Ms.FreeDiskSpace.Type|.0=1
|Mt.Eject|_Hidden.|Ms.FreeDiskSpace.Type|.1=1
|Mt.Eject|_Hidden.|Ms.FreeDiskSpace.Type|.2=0
|Mt.Eject|_Hidden.|Ms.FreeDiskSpace.Type|.3=0
|Mt.Eject|_Hidden.|Ms.FreeDiskSpace.Type|.4=1
|Mt.Eject|_Hidden.|Ms.FreeDiskSpace.Type|.5=1
|Mt.Eject|_Hidden.|Ms.FreeDiskSpace.Type|.6=0
|Mt.Eject|_Hidden.|Ms.FreeDiskSpace.Type|.7=1

Tm.FDD_DiskInside.0=#Tm.No_floppy_disk_inserted#
Tm.FDD_DiskInside.1=#Tm.Floppy_disk_inserted#
Tm.CDROM_DiskInside.0=#Tm.No_disk_inserted#
Tm.CDROM_DiskInside.1=#Tm.Disk_inserted#

Tm.|Ms.FreeDiskSpace.Total|_Empty.0=" "
Tm.|Ms.FreeDiskSpace.Total|_Empty.1=" "
Tm.|Ms.FreeDiskSpace.Total|_Empty.2=[#Tm.FDD_DiskInside.[&Ms.Calc.Ejectable]]
Tm.|Ms.FreeDiskSpace.Total|_Empty.3=#Tm.Safe_to_Remove#
Tm.|Ms.FreeDiskSpace.Total|_Empty.4=#Tm.Error#
Tm.|Ms.FreeDiskSpace.Total|_Empty.5=#Tm.Error#
Tm.|Ms.FreeDiskSpace.Total|_Empty.6=[#Tm.CDROM_DiskInside.[&Ms.Calc.Ejectable]]
Tm.|Ms.FreeDiskSpace.Total|_Empty.7=#Tm.Error#

LUMA_Ejct.0=[]
LUMA_Ejct.1=[!CommandMeasure "Ms.RunCommand.Eject" "Run"][!ShowMeterGroup Gp.STR][!Redraw]

[Ms.FreeDiskSpace]
Measure=FreeDiskSpace
Drive=#Drive#:
IgnoreRemovable=0
InvertMeasure=1
DynamicVariables=1
[Ms.FreeDiskSpace.Type]
Measure=FreeDiskSpace
Drive=#Drive#:
Type=1
IfCondition=([Ms.FreeDiskSpace.Type:]<>#Type#)
IfTrueAction=[!SetVariable Type ([Ms.FreeDiskSpace.Type:])][!Update]
IgnoreRemovable=0
DynamicVariables=1
[Ms.FreeDiskSpace.Total]
Measure=FreeDiskSpace
Drive=#Drive#:
Total=1
IgnoreRemovable=0
IfConditionMode=1
IfCondition=([Ms.FreeDiskSpace.Total]=0)
IfTrueAction=[!SetVariable "Pn.Dsply4x1.10.Tx" """[#Tm.|Ms.FreeDiskSpace.Total|_Empty.[#Type]]"""]
IfFalseAction=[!SetVariable "Pn.Dsply4x1.10.Tx" "%1B / %2B"]
DynamicVariables=1
[Ms.FreeDiskSpace.Label]
Measure=FreeDiskSpace
Drive=#Drive#:
Label=1
IgnoreRemovable=0
Substitute="":"[#Tm.|Ms.FreeDiskSpace.Type|.[&Ms.FreeDiskSpace.Type:]]"
DynamicVariables=1

[Ms.FreeDiskSpace.Label_CDROM]
Measure=FreeDiskSpace
Drive=#Drive#:
Label=1
IgnoreRemovable=0
RegExpSubstitute=1
Substitute="^(.+)$":"1","^$":"0"
DynamicVariables=1

[Ms.UsageMonitor.WriteBytesPerSec]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter="Disk Write Bytes/sec"
Name="#Drive#:"
[Ms.UsageMonitor.ReadBytesPerSec]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter="Disk Read Bytes/sec"
Name="#Drive#:"

[Ms.Calc.MaxBytesPerSec]
Measure=Calc
Formula=(Max(Max([Ms.UsageMonitor.WriteBytesPerSec:],[Ms.UsageMonitor.ReadBytesPerSec:]),#MaxBytesPerSec#))
IfConditionMode=1
IfCondition=([Ms.Calc.MaxBytesPerSec]>#MaxBytesPerSec#)
IfTrueAction=[!SetVariable MaxBytesPerSec ([Ms.Calc.MaxBytesPerSec])]
DynamicVariables=1
[Ms.Calc.MaxBytesPerSec_Peak]
Measure=Calc
Formula=#MaxBytesPerSec#
DynamicVariables=1
[Ms.Calc.WriteBytesPerSec]
Measure=Calc
Formula=([Ms.UsageMonitor.WriteBytesPerSec:])
MinValue=0
MaxValue=(Max(#MaxBytesPerSec#,1))
DynamicVariables=1
[Ms.Calc.ReadBytesPerSec]
Measure=Calc
Formula=([Ms.UsageMonitor.ReadBytesPerSec:])
MinValue=0
MaxValue=(Max(#MaxBytesPerSec#,1))
DynamicVariables=1

[Ms.String.Judge_SysDrv]
Measure=String
String=#Drive#
DynamicVariables=1
RegExpSubstitute=1
Substitute="^#Sy.Drv#$":"1","^[^1]$":"0"

[Ms.Calc.Ejectable]
Measure=Calc
Formula=(([Ms.FreeDiskSpace.Total]<>0)||([Ms.FreeDiskSpace.Label_CDROM]=1))
DynamicVariables=1

[Ms.RunCommand.Eject]
Measure=Plugin
Plugin=RunCommand
Program=PowerShell.exe
Parameter="""$driveEject = New-Object -comObject Shell.Application#CRLF#$driveEject.Namespace(17).ParseName('#Drive#:\').InvokeVerb('Eject')"""
FinishAction=[!SetOption "Mt.STR.Tx" "Text" "#St.Safe_to_Remove.0001#"][!Redraw][!Delay 3000][!Refresh]
OutputType=ANSI
DynamicVariables=1