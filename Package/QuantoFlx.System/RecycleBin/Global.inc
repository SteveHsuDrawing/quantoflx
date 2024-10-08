[Variables]
IN_0=#Pk@#Image\RecycleBin_[Ms.RecycleManager.Calc]
IT_0=255,255,255,(255*#Op.Fg#)
IN_1=#Pk@#Image\MonoIcons\256\Trash
IT_1=#Cl.Gn.Fg.Gn#,(255*#Op.Fg#)

[Rainmeter]
OnRefreshAction=[!Update]

[Ms.RecycleManager]
Measure=RecycleManager
[Ms.RecycleManager.Calc]
Measure=Calc
Formula=([Ms.RecycleManager]<>0)
DynamicVariables=1

[Ms.DragNDrop]
Measure=Plugin
Plugin=Drag&Drop
Action=Delete
OnDropAction=[!Update][!Log """#Tm.Delete_Message.0001#"""][!Delay 1000][!Update]
; Special thanks to theAzack9

[Mt.Pn]
Meter=Shape
MeterStyle=St.Pn|St.Bt.Sp
[Mt.Zn]
Meter=Shape
MeterStyle=St.Zn
[Mt.Le]
Meter=Shape
MeterStyle=St.Le

[Mt.Im]
Meter=Image
MeterStyle=St.ZnCt
ImageName=[#IN_[#MonoIcon]]
ImageTint=[#IT_[#MonoIcon]]
X=(#CURRENTCONFIGWIDTH#/2-20*#Sz#*#sc#)
Y=(#CURRENTCONFIGHEIGHT#/2-20*#Sz#*#sc#)
W=(40*#Sz#*#sc#)
H=(40*#Sz#*#sc#)
DynamicVariables=1
ToolTipText=#Tm.Recycle_Bin#
LeftMouseUpAction=["shell:::{645FF040-5081-101B-9F08-00AA002F954E}"]