[Variables]
AW=(#WORKAREAWIDTH#+#DW#*#SW#-#STW#)
AH=(#PH#*64*#sc#)

[Mt.Bt.01.00]
Meter=Shape
MeterStyle=St.Cstm.Bt.Sp
Shape=Rectangle 0,0,(#AW#),(16*#sc#) | Extend Hover | #da.sk#
DynamicVariables=1
LeftMouseUpAction=[!Draggable 1][!KeepOnScreen 0][!ShowFade *][!HideGroup "Quanto_Flx.Shortcut\AutoHide_1"][!Delay 16][!ActivateConfig "#CURRENTCONFIG#" "SWCH.ini"]
[Mt.Bt.01.01]
Meter=Image
ImageName=#@#Image\MonoIcons\12\ADown
X=(#AW#/2-6*#sc#)
Y=(2*#sc#)r
W=(12*#sc#)
H=(12*#sc#)
ImageTint=#Cl.Eb#