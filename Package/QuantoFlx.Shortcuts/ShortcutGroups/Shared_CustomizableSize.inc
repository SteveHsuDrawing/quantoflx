[Variables]
Sz=(Min(#CW#,#CH#))
MOA.QuickResize_0=
MLA.QuickResize_0=
MOA.QuickResize_1=[!ShowMeter Mt.Rsz]
MLA.QuickResize_1=[!HideMeter Mt.Rsz]

[Mt.Pn]
MouseOverAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Fl.Cl.Hv#"][!UpdateMeter "#CURRENTSECTION#"][#MOA.QuickResize_[#QuickResize]][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Da.Bg#"][!UpdateMeter "#CURRENTSECTION#"][#MLA.QuickResize_[#QuickResize]][!Redraw]

[Mt.Rsz]
Meter=Image
MeterStyle=St.ZnCt|St.Mi
ImageName=#@#Image\MonoIcons\16\Resize
X=((64*#PW#-8-16)*#sc#)
Y=((64*#PH#-8-16)*#sc#)
W=(16*#sc#)
H=(16*#sc#)
LeftMouseDownAction=[!ActivateConfig "#CURRENTCONFIG#" "Resizing.ini"]
MouseActionCursor=1
MouseActionCursorName=SIZE_NWSE
Hidden=1