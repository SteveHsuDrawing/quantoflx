[Ms.PowerPlugin.Percent]
Measure=Plugin
Plugin=PowerPlugin
PowerState=Percent
DynamicVariables=1

[Ms.PowerPlugin.Percent_Suffix]
Measure=String
String=[Ms.PowerPlugin.Percent]%
DynamicVariables=1

[Ms.PowerPlugin.ACLine]
Measure=Plugin
Plugin=PowerPlugin
PowerState=ACLine
DynamicVariables=1

[Ms.PowerPlugin.ACLine_Substitute]
Measure=String
String=[Ms.PowerPlugin.ACLine]
Substitute="0":"#Tm.Battery#","1":"#Tm.AC_Line#"
DynamicVariables=1

[Ms.PowerPlugin.Status]
Measure=Plugin
Plugin=PowerPlugin
PowerState=Status
DynamicVariables=1

[Ms.PowerPlugin.Status_Substitute]
Measure=String
String=[Ms.PowerPlugin.Status]
Substitute="0":"#Tm.No_battery#","1":"#Tm.Charging#","2":"#Tm.Critical#","3":"#Tm.Low#","4":"#Tm.Sufficient#"
DynamicVariables=1

[Ms.PowerPlugin.Lifetime]
Measure=Plugin
Plugin=PowerPlugin
PowerState=Lifetime
Substitute="Unknown":"[Ms.PowerPlugin.Percent_Suffix]"
DynamicVariables=1