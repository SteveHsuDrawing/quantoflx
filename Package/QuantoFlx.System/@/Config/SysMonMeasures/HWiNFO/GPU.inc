[Ms.Registry.Name_Original]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\HWiNFO[#Is64bit_[#Is64bit]]\VSB
RegValue=Sensor#SMLs.Utilization.RSKN#
Substitute=#SMLs.Utilization.Sbtt#
Paused=(1-#SMLs.Utilization.Show#)
Disabled=(1-#SMLs.Utilization.Show#)
UpdateDivider=-1

[Ms.Registry.Name]
Measure=String
String=[Ms.Registry.Name_Original]
RegExpSubstitute=1
Substitute="^0$":"","^(.*]: )":"","(:.*)$":"","\(R\)":"","®":"","\(TM\)":"","\(tm\)":"","™":"","NVIDIA ":"","ATI/AMD ":"","AMD ":"","Intel ":"","Qualcomm ":""," GPU":""
RegValue=DriverDesc
DynamicVariables=1
UpdateDivider=-1

[Ms.String.Identifier]
Measure=String
String=[Ms.Registry.Name_Original]
DynamicVariables=1
RegExpSubstitute=1
Substitute=".*Intel.*":"Intel",".*AMD.*":"AMD",".*NVIDIA.*":"NVIDIA",".*Microsoft.*":"Microsoft","^$":"GPU","^0$":"GPU"
UpdateDivider=-1

[Ms.Registry.Utilization]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\HWiNFO[#Is64bit_[#Is64bit]]\VSB
RegValue=ValueRaw#SMLs.Utilization.RSKN#
RegExpSubstitute=1
Substitute=#SMLs.Utilization.Sbtt#
Paused=(1-#SMLs.Utilization.Show#)
Disabled=(1-#SMLs.Utilization.Show#)
MinValue=0
MaxValue=100
DynamicVariables=1
;Value.SGPU1UTI

[Ms.Registry.Utilization_Suffix]
Measure=String
String=[Ms.Registry.Utilization]%
DynamicVariables=1

[Ms.Registry.Clock]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\HWiNFO[#Is64bit_[#Is64bit]]\VSB
RegValue=ValueRaw#SMLs.Clock.RSKN#
RegExpSubstitute=1
Substitute=#SMLs.Clock.Sbtt#
Paused=(1-#SMLs.Clock.Show#)
Disabled=(1-#SMLs.Clock.Show#)
DynamicVariables=1
;Value.SGPU1CLK

[Ms.Registry.Temperature]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\HWiNFO[#Is64bit_[#Is64bit]]\VSB
RegValue=ValueRaw#SMLs.Temperature.RSKN#
RegExpSubstitute=1
Substitute=#SMLs.Temperature.Sbtt#
Paused=(1-#SMLs.Temperature.Show#)
Disabled=(1-#SMLs.Temperature.Show#)
DynamicVariables=1
;Value.TGPU1

[Ms.Registry.Voltage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\HWiNFO[#Is64bit_[#Is64bit]]\VSB
RegValue=ValueRaw#SMLs.Voltage.RSKN#
RegExpSubstitute=1
Substitute=#SMLs.Voltage.Sbtt#
Paused=(1-#SMLs.Voltage.Show#)
Disabled=(1-#SMLs.Voltage.Show#)
DynamicVariables=1
;Value.VGPU1

[Ms.Registry.Power]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\HWiNFO[#Is64bit_[#Is64bit]]\VSB
RegValue=ValueRaw#SMLs.Power.RSKN#
RegExpSubstitute=1
Substitute=#SMLs.Power.Sbtt#
Paused=(1-#SMLs.Power.Show#)
Disabled=(1-#SMLs.Power.Show#)
DynamicVariables=1
;Value.PGPU1

[Ms.Registry.CoolingFanSpeed]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\HWiNFO[#Is64bit_[#Is64bit]]\VSB
RegValue=ValueRaw#SMLs.CoolingFanSpeed.RSKN#
RegExpSubstitute=1
Substitute=#SMLs.CoolingFanSpeed.Sbtt#
Paused=(1-#SMLs.CoolingFanSpeed.Show#)
Disabled=(1-#SMLs.CoolingFanSpeed.Show#)
DynamicVariables=1
;Value.FGPU1