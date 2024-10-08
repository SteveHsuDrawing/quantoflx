[Rainmeter]
Group=Quanto_Flx|Quanto_Flx_Panels|Quanto_Flx.Shortcut|Quanto_Flx.ShortcutGroups\#StctGp#
OnRefreshAction=[#AtHd_[#AutoHide]]

[Variables]
ForceMono_0=255,255,255,(255*#Op.Fg#)
ForceMono_1=#Cl.Gn.Fg.Gn#,(255*#Op.Fg#)
AtHd_0=[]
AtHd_1=[!Hide]

[Mt.Pn]
Meter=Shape
MeterStyle=St.Pn|St.Bt.Sp
LeftMouseUpAction=["#StCt.Tg#" #StCt.TgPm#]
[Mt.Zn]
Meter=Shape
MeterStyle=St.Zn
[Mt.Le]
Meter=Shape
MeterStyle=St.Le

[St.Cstm.Im.01]
DynamicVariables=1
X=((#PW#*64-80*#Sz#)/2*#sc#)
Y=((#PH#*64-80*#Sz#)/2*#sc#)
W=(80*#Sz#*#sc#)
H=(80*#Sz#*#sc#)
PreserveAspectRatio=1
[St.Cstm.Im.02]
DynamicVariables=1
W=(#PW#*64*#Sz#*#sc#)
H=(#PH#*64*#Sz#*#sc#)
PreserveAspectRatio=2

[Mt.Ic_Cl]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.01
ImageName=#StCt.Im.Cl#
ImageTint=[#ForceMono_[#ForceMono]]
Hidden=#StCt.2x2.UIII#
[Mt.Ic_Mn]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.01|St.Mi
ImageName=#StCt.Im.Mn#
Hidden=#StCt.2x2.UIII#
ToolTipText=#StCt.Nm#
[Mt.Im_Cl]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.02
ImageName=#StCt.2x2.Im.Cl#
ImageTint=[#ForceMono_[#ForceMono]]
Hidden=(1-#StCt.2x2.UIII#)
[Mt.Im_Mn]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.02|St.Mi
ImageName=#StCt.2x2.Im.Mn#
Hidden=(1-#StCt.2x2.UIII#)