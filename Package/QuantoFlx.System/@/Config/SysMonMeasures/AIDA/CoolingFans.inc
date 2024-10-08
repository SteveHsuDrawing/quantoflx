[Variables]
DMaxV=1

|Pn.Dsply4x1.10.Tx|_0=#Tm.1_used#
|Pn.Dsply4x1.10.P1|_0=Ms.String.CoolingFanSpeed_0
|Pn.Dsply4x1.10.P2|_0=
|Pn.Dsply4x1.10.AS|_0=0
|Pn.Dsply4x1.10.Tx|_1=%1#SMLs.CoolingFanSpeed.Sufx# / %2#SMLs.CoolingFanSpeed.Sufx#
|Pn.Dsply4x1.10.P1|_1=Ms.Calc.CoolingFanSpeed_1
|Pn.Dsply4x1.10.P2|_1=Ms.Calc.MaxValue_1
|Pn.Dsply4x1.10.AS|_1=2
|Pn.Dsply4x1.10.Tx|_2=%1#SMLs.CoolingFanSpeed.Sufx# / %2#SMLs.CoolingFanSpeed.Sufx#
|Pn.Dsply4x1.10.P1|_2=Ms.Calc.CoolingFanSpeed_1
|Pn.Dsply4x1.10.P2|_2=Ms.Calc.MaxValue_2
|Pn.Dsply4x1.10.AS|_2=2

[Ms.Registry.CoolingFanSpeed]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA[#Is64bit_[#Is64bit]]\SensorValues
RegValue=#SMLs.CoolingFanSpeed.RSKN#
DynamicVariables=1
RegExpSubstitute=1
Substitute=#SMLs.CoolingFanSpeed.Sbtt#
Paused=(1-#SMLs.CoolingFanSpeed.Show#)
Disabled=(1-#SMLs.CoolingFanSpeed.Show#)

[Ms.Registry.MaxCoolingFanSpeed]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA[#Is64bit_[#Is64bit]]\SensorValues
RegValue=#SMLs.MaxCoolingFanSpeed.RSKN#
DynamicVariables=1
RegExpSubstitute=1
Substitute=#SMLs.MaxCoolingFanSpeed.Sbtt#
Paused=((#Expression#=0)||(1-#SMLs.MaxCoolingFanSpeed.Show#))
Disabled=((#Expression#=0)||(1-#SMLs.MaxCoolingFanSpeed.Show#))
IfCondition=((Max([Ms.Registry.CoolingFanSpeed],[Ms.Registry.MaxCoolingFanSpeed]))>#DMaxV#)
IfTrueAction=[!SetVariable "DMaxV" "(Max([Ms.Registry.CoolingFanSpeed],[Ms.Registry.MaxCoolingFanSpeed])"]

[Ms.Calc.CoolingFanSpeed_0]
Measure=Calc
Formula=(Clamp((([Ms.Registry.CoolingFanSpeed]<1)?([Ms.Registry.CoolingFanSpeed]*100):([Ms.Registry.CoolingFanSpeed])),0,100))
MinValue=0
MaxValue=100
DynamicVariables=1
Paused=(#Expression#<>0)
Disabled=(#Expression#<>0)
[Ms.Calc.CoolingFanSpeed_1]
Measure=Calc
Formula=(Clamp([Ms.Registry.CoolingFanSpeed],0,#MaxValue#))
MinValue=0
MaxValue=#MaxValue#
DynamicVariables=1
Paused=(#Expression#<>1)
Disabled=(#Expression#<>1)
[Ms.Calc.CoolingFanSpeed_2]
Measure=Calc
Formula=(Clamp([Ms.Registry.CoolingFanSpeed],0,#DMaxV#))
MinValue=0
MaxValue=#DMaxV#
DynamicVariables=1
Paused=(#Expression#<>2)
Disabled=(#Expression#<>2)

[Ms.String.CoolingFanSpeed_0]
Measure=String
String=[Ms.Calc.CoolingFanSpeed_0:%,0]%
DynamicVariables=1
Paused=(#Expression#<>0)
Disabled=(#Expression#<>0)

[Ms.Calc.MaxValue_1]
Measure=Calc
Formula=#MaxValue#
DynamicVariables=1
Paused=(#Expression#<>1)
Disabled=(#Expression#<>1)
[Ms.Calc.MaxValue_2]
Measure=Calc
Formula=#DMaxV#
DynamicVariables=1
Paused=(#Expression#<>2)
Disabled=(#Expression#<>2)