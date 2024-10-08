[Variables]
@include=#@#Config\Language\en-us\TimeDatePlacematic.inc
@include2=#@#Config\Language\#Lg#\TimeDatePlacematic.inc
@include3=#@#Config\Language\#Lg#\TimeDatePlacematic.inc
DspVer.Sy_11=[Ms.Registry.DisplayVersion]
DspVer.Sy_10=[Ms.Registry.DisplayVersion]
DspVer.Sy_8=[Ms.Registry.CurrentBuildNumber]
DspVer.Sy_7=[Ms.Registry.CSDVersion]
USER_LOGONTIME=0

[Ms.SysInfo.COMPUTER_NAME]
Measure=SysInfo
SysInfoType=COMPUTER_NAME
UpdateDivider=-1

[Ms.Uptime]
Measure=Uptime
Format=#Tf.Uptm#
AddDaysToHours=0
Substitute="#Tf.Uptm.0d#":"","#Tf.Uptm.0h#":"","#Tf.Uptm.0m#":""

[Ms.SysInfo.OS_PRODUCT_NAME]
Measure=SysInfo
SysInfoType=OS_PRODUCT_NAME
UpdateDivider=-1

[Ms.SysInfo.USER_NAME]
Measure=SysInfo
SysInfoType=USER_NAME
UpdateDivider=-1

[Ms.SysInfo.USER_LOGONTIME]
Measure=SysInfo
SysInfoType=USER_LOGONTIME
OnUpdateAction=[!SetVariable "USER_LOGONTIME" "[Ms.SysInfo.USER_LOGONTIME:0]"][!UpdateMeasure "Ms.Time.USER_LOGONTIME"]
UpdateDivider=-1
DynamicVariables=1

[Ms.Time.TimeZone]
Measure=Time
Format=%z %Z
RegExpSubstitute=1
Substitute="(.[0-9]{2})":"\1:"
UpdateDivider=-1

[Ms.SysInfo.TIMEZONE_ISDST]
Measure=SysInfo
SysInfoType=TIMEZONE_ISDST
Substitute="-1":"#Tm.Unavailable#","0":"#Tm.Not_in_Effect#","1":"#Tm.In_Effect#"

[Ms.Time.USER_LOGONTIME]
Measure=Time
TimeStamp=#USER_LOGONTIME#
Format=[#Tf_[#Tf]_Ex] | #Tf.Dt.St#
FormatLocale=#Lg#
UpdateDivider=-1
DynamicVariables=1

[Ms.SysInfo.IDLE_TIME]
Measure=SysInfo
SysInfoType=IDLE_TIME

[Ms.Uptime.IDLE_TIME]
Measure=Uptime
Format=#Tf.Uptm#
AddDaysToHours=0
Substitute="#Tf.Uptm.0d#":"","#Tf.Uptm.0h#":"","#Tf.Uptm.0m#":""
SecondsValue=[Ms.SysInfo.IDLE_TIME]
DynamicVariables=1

[Ms.Registry.BuildLab]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=SOFTWARE\Microsoft\Windows NT\CurrentVersion
RegValue=BuildLab
UpdateDivider=-1

[Ms.Registry.DisplayVersion]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=SOFTWARE\Microsoft\Windows NT\CurrentVersion
RegValue=DisplayVersion
UpdateDivider=-1
Paused=((#Sy.Vr#<>10)&&(#Sy.Vr#<>11))
Disabled=((#Sy.Vr#<>10)&&(#Sy.Vr#<>11))

[Ms.Registry.CurrentBuildNumber]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=SOFTWARE\Microsoft\Windows NT\CurrentVersion
RegValue=CurrentBuildNumber
UpdateDivider=-1
Paused=(#Sy.Vr#<>8)
Disabled=(#Sy.Vr#<>8)

[Ms.Registry.CSDVersion]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=SOFTWARE\Microsoft\Windows NT\CurrentVersion
RegValue=CSDVersion
UpdateDivider=-1
Paused=(#Sy.Vr#<>7)
Disabled=(#Sy.Vr#<>7)

[Ms.Registry.SystemProductName]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\BIOS
RegValue=SystemProductName
RegExpSubstitute=1
Substitute="^0$":"#Tm.Unknown#","^$":"#Tm.Unknown#"
UpdateDivider=-1

[Ms.Registry.SystemManufacturer]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\BIOS
RegValue=SystemManufacturer
RegExpSubstitute=1
Substitute="^0$":"#Tm.Unknown#","^$":"#Tm.Unknown#"
UpdateDivider=-1

[Ms.Registry.BaseBoardProduct]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\BIOS
RegValue=BaseBoardProduct
RegExpSubstitute=1
Substitute="^0$":"#Tm.Unknown#","^$":"#Tm.Unknown#"
UpdateDivider=-1

[Ms.Registry.BaseBoardVersion]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\BIOS
RegValue=BaseBoardVersion
RegExpSubstitute=1
Substitute="^0$":"#Tm.Unknown#","^$":"#Tm.Unknown#"
UpdateDivider=-1

[Ms.Registry.BaseBoardManufacturer]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\BIOS
RegValue=BaseBoardManufacturer
RegExpSubstitute=1
Substitute="^0$":"#Tm.Unknown#","^$":"#Tm.Unknown#"
UpdateDivider=-1

[Ms.Registry.BIOSVersion]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\BIOS
RegValue=BIOSVersion
RegExpSubstitute=1
Substitute="^0$":"#Tm.Unknown#","^$":"#Tm.Unknown#"
UpdateDivider=-1

[Ms.Registry.BIOSVendor]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\BIOS
RegValue=BIOSVendor
RegExpSubstitute=1
Substitute="^0$":"#Tm.Unknown#","^$":"#Tm.Unknown#"
UpdateDivider=-1
