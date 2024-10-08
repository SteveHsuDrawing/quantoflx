[Variables]
AHS=0
Vb.Tf_0-PutAMPMInFront_0=%1 %2
Vb.Tf_1-PutAMPMInFront_0=%1
Vb.Tf_0-PutAMPMInFront_1=%2 %1
Vb.Tf_1-PutAMPMInFront_1=%1

[Rainmeter]
Update=(1000+3500*(#AHS#=0?(#Em#=0?0:1):1))
MiddleMouseUpAction=#Ac.Variants#
SkinWidth=(Max((64*#Ft.Cstm.Cl.Sc#),(64*#Ft.Cstm.Dt.Sc#)))
DynamicWindowSize=1

[Ms.Time]
Measure=Time
Format=[#Tf_[#Tf]]
DynamicVariables=1
[Ms.Date]
Measure=Time
Format=[#Tf.Dt]
DynamicVariables=1
FormatLocale=#Lg#
[Ms.AMPM]
Measure=Time
Format=[#Tf_[#Tf]_AMPM]
DynamicVariables=1
FormatLocale=#Lg#
Disabled=(#AHS#=0?(#Em#=0?0:1):1)

[Mt.Time]
Meter=String
MeterStyle=St.Ft
X=(#CURRENTCONFIGWIDTH#/2*#FX#)
StringAlign=#SA#
MeasureName=Ms.Time
FontWeight=(Clamp(#Ft.Wt.Cl#,1,999))
FontFace=#Ft.Fc.Cl#
FontSize=(10*#Ft.Cstm.Cl.Sc#)
FontColor=#Ft.Cstm.Cl.Cl#,(#Ft.Cstm.Cl.Op#*255)
DynamicVariables=1
[Mt.Date]
Meter=String
MeterStyle=St.Ft
X=0r
Y=(#Sp.Cstm#)R
StringAlign=#SA#
MeasureName=Ms.Date
MeasureName2=Ms.AMPM
Text=[#Vb.Tf_[#Tf]-PutAMPMInFront_[#PutAMPMInFront]]
FontWeight=(Clamp(#Ft.Wt.Gn#,1,999))
FontSize=(10*#Ft.Cstm.Dt.Sc#)
FontColor=#Ft.Cstm.Dt.Cl#,(#Ft.Cstm.Dt.Op#*255)
DynamicVariables=1