[Variables]
Status=0
LMUA_0=[!ShowFadeGroup "Quanto_Flx.#Sk.Nm#"][!ZPosGroup 1 "Quanto_Flx.#Sk.Nm#"][!Delay 16][!ZPosGroup 0 "Quanto_Flx.#Sk.Nm#"]
LMUA_1=[!HideFadeGroup "Quanto_Flx.#Sk.Nm#"]

[Mt.Pn]
Meter=Shape
MeterStyle=St.Pn|St.Bt.Sp
LeftMouseUpAction=[#LMUA_[#Status]][!SetVariable Status "(1-#Status#)"][!Update]
[Mt.Zn]
Meter=Shape
MeterStyle=St.Zn
[Mt.Le]
Meter=Shape
MeterStyle=St.Le

[St.Cstm.Tm.01]
W=(20*#sc#*#sz#)
H=(20*#sc#*#sz#)
PreserveAspectRatio=1

[St.Cstm.Ps.00]
X=(#CURRENTCONFIGWIDTH#/2-22*#sc#*#sz#)
Y=(#CURRENTCONFIGHEIGHT#/2-22*#sc#*#sz#)
[St.Cstm.Ps.01]
X=(#CURRENTCONFIGWIDTH#/2+2*#sc#*#sz#)
Y=(#CURRENTCONFIGHEIGHT#/2-22*#sc#*#sz#)
[St.Cstm.Ps.10]
X=(#CURRENTCONFIGWIDTH#/2-22*#sc#*#sz#)
Y=(#CURRENTCONFIGHEIGHT#/2+2*#sc#*#sz#)
[St.Cstm.Ps.11]
X=(#CURRENTCONFIGWIDTH#/2+2*#sc#*#sz#)
Y=(#CURRENTCONFIGHEIGHT#/2+2*#sc#*#sz#)

[Mt.Ic.00_Cl]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Tm.01|St.Cstm.Ps.00
ImageName=#Im.00_Cl#
[Mt.Ic.01_Cl]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Tm.01|St.Cstm.Ps.01
ImageName=#Im.01_Cl#
[Mt.Ic.10_Cl]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Tm.01|St.Cstm.Ps.10
ImageName=#Im.10_Cl#
[Mt.Ic.11_Cl]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Tm.01|St.Cstm.Ps.11
ImageName=#Im.11_Cl#

[Mt.Ic.00_Mn]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Cstm.Tm.01|St.Cstm.Ps.00
ImageName=#Im.00_Mn#
[Mt.Ic.01_Mn]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Cstm.Tm.01|St.Cstm.Ps.01
ImageName=#Im.01_Mn#
[Mt.Ic.10_Mn]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Cstm.Tm.01|St.Cstm.Ps.10
ImageName=#Im.10_Mn#
[Mt.Ic.11_Mn]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Cstm.Tm.01|St.Cstm.Ps.11
ImageName=#Im.11_Mn#