[Variables]
AW=(#WORKAREAWIDTH#+#DW#*#SW#-#STW#)
AH=(#PH#*64*#sc#)
MOA.SCBLA_0=
MLA.SCBLA_0=
MOA.SCBLA_1=[!ShowMeter "Mt.Bt.01.01"][!Redraw]
MLA.SCBLA_1=[!HideMeter "Mt.Bt.01.01"][!Redraw]
MOA.SCBRB_0=
MLA.SCBRB_0=
MOA.SCBRB_1=[!ShowMeter "Mt.Bt.02.01"][!Redraw]
MLA.SCBRB_1=[!HideMeter "Mt.Bt.02.01"][!Redraw]
MOA.QRsz_0=
MLA.QRsz_0=
MOA.QRsz_1=[!ShowMeter "Mt.Rsz"][!Redraw]
MLA.QRsz_1=[!HideMeter "Mt.Rsz"][!Redraw]

[Mt.Pn]
Meter=Shape
MeterStyle=St.Pn.0#Bl.Bg.Md#.0#NSRC#
MouseOverAction=[#MOA.SCBLA_[#SCBLA]][#MOA.SCBRB_[#SCBRB]][#MOA.QRsz_[#QRsz]][!Redraw]
MouseLeaveAction=[#MLA.SCBLA_[#SCBLA]][#MLA.SCBRB_[#SCBRB]][#MLA.QRsz_[#QRsz]][!Redraw]
[Mt.Zn]
Meter=Shape
MeterStyle=St.Zn

[Mt.Bt.01.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp
Shape=Rectangle 0,0,(#AW#),(16*#sc#) | Extend Hover | #da.sk#
DynamicVariables=1
LeftMouseUpAction=[!Draggable 0][!HideFade *][!Move (#CURRENTCONFIGX#) (#CURRENTCONFIGY#+#AH#-16*#sc#)][!Delay 16][!ActivateConfig "#CURRENTCONFIG#" "EU.ini"]
Hidden=(1-#SCBLA#)
[Mt.Bt.01.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi
ImageName=#@#Image\MonoIcons\12\ADown
X=(#AW#/2-6*#sc#)
Y=(2*#sc#)r
W=(12*#sc#)
H=(12*#sc#)
Hidden=1
[Mt.Bt.02.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Bt.Sp
Y=(#AH#-16*#sc#)
Shape=Rectangle 0,0,(#AW#),(16*#sc#) | Extend Hover | #da.sk#
DynamicVariables=1
LeftMouseUpAction=[!Draggable 0][!HideFade *][!Delay 16][!ActivateConfig "#CURRENTCONFIG#" "ED.ini"]
Hidden=(1-#SCBRB#)
[Mt.Bt.02.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi
ImageName=#@#Image\MonoIcons\12\AUp
X=(#AW#/2-6*#sc#)
Y=(2*#sc#)r
W=(12*#sc#)
H=(12*#sc#)
Hidden=1

[Mt.Rsz]
Meter=Image
MeterStyle=St.ZnCt|St.Mi
ImageName=#@#Image\MonoIcons\16\Resize
X=(#CURRENTCONFIGWIDTH#-(8+16)*#sc#)
Y=(#CURRENTCONFIGHEIGHT#-(8+16)*#sc#)
W=(16*#sc#)
H=(16*#sc#)
LeftMouseDownAction=[!ActivateConfig "#CURRENTCONFIG#" "ResizingH.ini"]
MouseActionCursor=1
MouseActionCursorName=SIZE_NS
Hidden=1