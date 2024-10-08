[Variables]
X.|Ft.SA|_Left=0
X.|Ft.SA|_Center=(#SW#*#Ft.Cstm.Sc#/2)
X.|Ft.SA|_Right=(#SW#*#Ft.Cstm.Sc#)

OCA.Flashing_0=[]
OCA.Flashing_1=[!UpdateMeasure "Ms.Loop"]

[Rainmeter]
Update=1000
DynamicWindowSize=#DW#

[Ms.Time]
Measure=Time
Format=[#Format_[#Format].Frmt]
Substitute=[#Format_[#Format].Sbtt]
OnChangeAction=[#OCA.Flashing_[#Flashing]]
FormatLocale=#Lg#
DynamicVariables=1

[Ms.Loop]
Measure=Calc
Formula=([Ms.Time]%2)
DynamicVariables=1
Paused=(1-#AlwFlsh#)
Disabled=(1-#AlwFlsh#)

[St.DW_0]
StringAlign=#Ft.SA#
X=[#X.|Ft.SA|_[#Ft.SA]]
W=(#SW#*#Ft.Cstm.Sc#)
[St.DW_1]
X=0

[St.Fl_0]
FontColor=#Ft.Cstm.Cl#,(255*#Ft.Cstm.Op#)
[St.Fl_1]
FontColor=#Ft.Cstm.Cl#,(255*#Ft.Cstm.Op#*[Ms.Loop])

[Mt.Tx]
Meter=String
MeterStyle=St.Ft|St.DW_#DW#|St.Fl_#Flashing#
Text=#Content#
MeasureName=Ms.Time
FontFace=#Ft.Cstm.Fc#
FontSize=(10*#Ft.Cstm.Sc#)
FontWeight=(Clamp(#Ft.Cstm.Wt#,1,999))
DynamicVariables=1