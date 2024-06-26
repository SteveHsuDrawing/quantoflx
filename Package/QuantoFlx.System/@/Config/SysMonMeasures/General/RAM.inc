[Ms.PhysicalMemory]
Measure=PhysicalMemory
DynamicVariables=1
[Ms.PhysicalMemory_Total]
Measure=PhysicalMemory
Total=1
DynamicVariables=1

[Ms.RAM.Percent]
Measure=Calc
Formula=(([Ms.PhysicalMemory]/[Ms.PhysicalMemory_Total])*100)
DynamicVariables=1

[Ms.RAM.Percent_Suffix]
Measure=String
String=[Ms.RAM.Percent:1]%
DynamicVariables=1

[Ms.Memory]
Measure=Memory
DynamicVariables=1
[Ms.Memory_Total]
Measure=Memory
Total=1
DynamicVariables=1

[Ms.Calc.VirtualMemoryUsed_G]
Measure=Calc
Formula=(([Ms.Memory]-[Ms.PhysicalMemory])/(1024**3))
DynamicVariables=1
[Ms.Calc.VirtualMemorySize_G]
Measure=Calc
Formula=(([Ms.Memory_Total]-[Ms.PhysicalMemory_Total])/(1024**3))
DynamicVariables=1