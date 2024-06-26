[Ms.CPU.Percent]
Measure=CPU
DynamicVariables=1
[Ms.CPU.Percent_Suffix]
Measure=String
String=[Ms.CPU.Percent:1]%
DynamicVariables=1

[Ms.Registry.ProcessorNameString]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\CentralProcessor\#SkinIndex#
RegValue=ProcessorNameString
RegExpSubstitute=1
Substitute="\(R\)":"","\(TM\)":"","\(tm\)":"","Intel ":"","\d+th Gen ":"","CPU ":""," @.*":"","AMD ":"","Threadripper PRO ":"TRP ","Threadripper ":"TR "," \w+-Core.*":""," \d+-Core.*":""," with.*":""," w/.*":""," Microsoft.*Edition":"","\s{2,}":" ","\s$":""
UpdateDivider=-1
[Ms.Registry.Identifier]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\CentralProcessor\#SkinIndex#
RegValue=Identifier
RegExpSubstitute=1
Substitute="\(R\)":"","\(TM\)":"","\(tm\)":"","Intel ":"","\d+th Gen ":"","CPU ":""," @.*":"","AMD ":"","Threadripper PRO ":"TRP ","Threadripper ":"TR "," \w+-Core.*":""," \d+-Core.*":""," with.*":""," w/.*":""," Microsoft.*Edition":"","\s{2,}":" ","\s$":""
UpdateDivider=-1
[Ms.Registry.VendorIdentifier]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\CentralProcessor\#SkinIndex#
RegValue=VendorIdentifier
RegExpSubstitute=1
Substitute="GenuineIntel":"Intel","AuthenticAMD":"AMD","Qualcomm.*":"Qualcomm","Microsoft.*":"Microsoft","^$":"Unknown","^0$":"Unknown"
UpdateDivider=-1