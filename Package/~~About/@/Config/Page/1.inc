[Variables]
Pg.Ty=Empty
@include=#@#Config\Language\en-us\TimeDatePlacematic.inc
@include2=#@#Config\Language\#Lg#\TimeDatePlacematic.inc

[Mt.Ip.Im.01]
Meter=Image
MeterStyle=St.ZnCt
ImageName=#@#Image\Quanto.png
DynamicVariables=1
PreserveAspectRatio=1
X=((320-16)*#sc#)
Y=((512-16)*#sc#)
H=(256*#sc#)
ImageTint=255,255,255,32
Greyscale=1

[Ms.TransTime]
Measure=Time
TimeStamp=#Project.UdDt#
Format=#Tf.Dt#
FormatLocale=#Lg#
DynamicVariables=1

[Mt.Text]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Ww
Text=#Tm.Update_date#: [Ms.TransTime]#CRLF##CRLF#This is the initial version of "Quanto Flx". Not to be confused with "Quanto Original".
W=((528-24)*#sc#)
X=(60*#sc#)
Y=(156*#sc#)