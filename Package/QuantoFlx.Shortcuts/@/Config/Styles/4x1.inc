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
X=(12*#sc#)
Y=(12*#sc#)
W=(40*#sc#)
H=(40*#sc#)
PreserveAspectRatio=1

[Mt.Ic_Cl]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.01
ImageName=#StCt.Im.Cl#
ImageTint=[#ForceMono_[#ForceMono]]
[Mt.Ic_Mn]
Meter=Image
MeterStyle=St.ZnCt|St.Cstm.Im.01|St.Mi
ImageName=#StCt.Im.Mn#

[Mt.Tt]
Meter=String
MeterStyle=St.ZnCt|St.Ft
Text=#StCt.Nm#
FontSize=(12*#sc#*#Ft.Sc.Gn#)
StringAlign=LeftCenter
X=(64*#sc#)
Y=(32*#sc#)
W=(176*#sc#)
ClipString=2