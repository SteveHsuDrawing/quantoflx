[Variables]
AW=(#PW#*64*#sc#)
AH=(#WORKAREAHEIGHT#+#DH#*#SH#-#STH#)

[Mt.Bt.01.00]
Meter=Shape
MeterStyle=St.Cstm.Bt.Sp
Shape=Rectangle 0,0,(16*#sc#),(#AH#) | Extend Hover | #da.sk#
DynamicVariables=1
LeftMouseUpAction=[!Draggable 1][!KeepOnScreen 0][!ShowFade *][!HideGroup "Quanto_Flx.Shortcut\AutoHide_1"][!Move (#CURRENTCONFIGX#-#AW#+16*#sc#) (#CURRENTCONFIGY#)][!Delay 16][!ActivateConfig "#CURRENTCONFIG#" "CWSH.ini"]
[Mt.Bt.01.01]
Meter=Image
ImageName=#@#Image\MonoIcons\12\ALeft
X=(2*#sc#)
Y=(#AH#/2-6*#sc#)
W=(12*#sc#)
H=(12*#sc#)
ImageTint=#Cl.Eb#