[Variables]
AW=(#PW#*64*#sc#)
AH=(#PH#*64*#sc#)
MOA.QRsz_0=
MLA.QRsz_0=
MOA.QRsz_1=[!ShowMeter "Mt.Rsz"][!Redraw]
MLA.QRsz_1=[!HideMeter "Mt.Rsz"][!Redraw]

[Mt.Pn]
Meter=Shape
MeterStyle=St.Pn.0#Bl.Bg.Md#.0#NSRC#
MouseOverAction=[#MOA.QRsz_[#QRsz]][!Redraw]
MouseLeaveAction=[#MLA.QRsz_[#QRsz]][!Redraw]

[Mt.Rsz]
Meter=Image
MeterStyle=St.Mi
ImageName=#@#Image\MonoIcons\16\Resize
X=(#CURRENTCONFIGWIDTH#-(8+16)*#sc#)
Y=(#CURRENTCONFIGHEIGHT#-(8+16)*#sc#)
W=(16*#sc#)
H=(16*#sc#)
LeftMouseDownAction=[!ActivateConfig "#CURRENTCONFIG#" "ResizingWH.ini"]
MouseActionCursor=1
MouseActionCursorName=SIZE_NWSE
Hidden=1