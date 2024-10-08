[Variables]
Bnd.L=0
; Left Binding (0/1)
Bnd.R=0
; Right Binding (0/1)
Bnd.T=0
; Top Binding (0/1)
Bnd.B=0
; Bottom Binding (0/1)

Pn.Zn.Or=(#Sp#-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*#PW#-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*#PH#-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0))
Pn.Zn.DC=(#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#+#Hl.Bd#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#+#Hl.Bd#),(64*#Sc#*#PW#-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)-#Hl.Bd#*2),(64*#Sc#*#PH#-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)-#Hl.Bd#*2),(Max(#Cr#-#Sp#-#Hl.Bd#,0)),(Max(#Cr#-#Sp#-#Hl.Bd#,0))
Pn.Zn.Gn=(#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*#PW#-#Sp#*(2-#Bnd.L#-#Bnd.R#)+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*#PH#-#Sp#*(2-#Bnd.T#-#Bnd.B#)+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#-#Sp#,0)),(Max(#Cr#-#Sp#,0))
Pn.Zn.P1=(#Cr#*(-#Bnd.L#)+#Sp#/2+(#Ppos.X#/2)),(#Cr#*(-#Bnd.T#)+#Sp#/2+(#Ppos.Y#/2)),(64*#Sc#*#PW#+(#Cr#+Abs(#Ppos.X#/2))*(#Bnd.L#+#Bnd.R#)-#Sp#),(64*#Sc#*#PH#+(#Cr#+Abs(#Ppos.X#/2))*(#Bnd.T#+#Bnd.B#)-#Sp#),(Max((#Cr#-#Sp#/2),0)),(Max((#Cr#-#Sp#/2),0))
Pn.Zn.P2=(#Cr#*(-#Bnd.L#)),(#Cr#*(-#Bnd.T#)),(64*#Sc#*#PW#+#Cr#*(#Bnd.L#+#Bnd.R#)),(64*#Sc#*#PH#+#Cr#*(#Bnd.T#+#Bnd.B#)),(Max(#Cr#,0)),(Max(#Cr#,0))
Pn.Zn.Sq=(1),(1),(64*#Sc#*#PW#-2),(64*#Sc#*#PH#-2)
Fl.Cl.Bg=Fill Color #Cl.Gn.Bg.Gn#
; Fill in Background color
Fl.Cl.Le=Fill Color 255,255,255,(255*#Le.St#*(1-#Bnd.T#))
; Fill in light color (white)

Bl.Md_0.Ty_0=None
Bl.Md_0.Ty_1=None
Bl.Md_1.Ty_0=None
Bl.Md_1.Ty_1=None
Bl.Md_2.Ty_0=Blur
Bl.Md_2.Ty_1=Acrylic
Bl.Md_0.Bd_0=None
Bl.Md_0.Bd_1=None
Bl.Md_1.Bd_0=None
Bl.Md_1.Bd_1=None
Bl.Md_2.Bd_0=None
Bl.Md_2.Bd_1=All
Bl.Md_0.Cn_0=None
Bl.Md_0.Cn_1=None
Bl.Md_0.Cn_2=None
Bl.Md_1.Cn_0=None
Bl.Md_1.Cn_1=None
Bl.Md_1.Cn_2=None
Bl.Md_2.Cn_0=None
Bl.Md_2.Cn_1=Round
Bl.Md_2.Cn_2=RoundSmall

MOA.AutoQ_0=[!ShowMeter Mt.Rsz]
MLA.AutoQ_0=[!HideMeter Mt.Rsz]
MOA.AutoQ_1=[]
MLA.AutoQ_1=[]

MOA.TcMd_00=[]
MLA.TcMd_00=[]
MOA.TcMd_01=[]
MLA.TcMd_01=[]
MOA.TcMd_10=[]
MLA.TcMd_10=[]
MOA.TcMd_11=[!ShowMeterGroup "Gp.MvBts"][!Redraw]
MLA.TcMd_11=[!HideMeterGroup "Gp.MvBts"][!Redraw]

[Rainmeter]
Group=Quanto_Flx|Quanto_Flx_Panels
Blur=(#Bl.Gl.Md#=1)
BlurRegion=2,(#Sp#+(#Ppos.X#)-(#Cr#+#Sp#)*#Bnd.L#),(#Sp#+(#Ppos.Y#)-(#Cr#+#Sp#)*#Bnd.T#),(64*#Sc#*#PW#-#Sp#+(#Ppos.X#)+(#Cr#+#Sp#)*#Bnd.R#),(64*#Sc#*#PH#-#Sp#+(#Ppos.Y#)+(#Cr#+#Sp#)*#Bnd.B#),((#Cr#-#Sp#)*2),((#Cr#-#Sp#)*2)
SkinWidth=(64*#Sc#*(#PW#))
SkinHeight=(64*#Sc#*(#PH#))
MiddleMouseUpAction=#Ac.Variants#

[St.Pn]
; General Panel Style
Shape=Rectangle #Pn.Zn.P2# | #Da.Sk# | #Fl.Cl.Bd#
Shape2=Rectangle #Pn.Zn.P1# | #Da.Sk# | #Fl.Cl.Bd#
Shape3=Rectangle #Pn.Zn.Gn#
Shape4=Combine Shape | Exclude Shape3
Shape5=Combine Shape2 | Exclude Shape3
Shape6=Rectangle #Pn.Zn.Gn# | #Da.Sk# | Extend FlClBG_#PnGdnt.Enab#
Shape7=Rectangle #Pn.Zn.Gn# | #Da.Sk# | Extend Hover
Shape8=Rectangle #Pn.Zn.Gn# | #Da.Sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Op.Bd#)
Shape9=Rectangle #Pn.Zn.Sq#
Shape10=Combine Shape8 | Exclude Shape9
;Shape11=Rectangle #Pn.Zn.Gn# | #da.sk# | Fill Color 0,0,0,(255*#Hl.Cl#)
;Shape12=Rectangle #Pn.Zn.Gn# | #da.sk# | Fill Color 255,255,255,(255*#Hl.Cl#)
;Shape13=Rectangle #Pn.Zn.Gn# | Offset -2,-2
;Shape14=Rectangle #Pn.Zn.Gn# | Offset 2,2
;Shape15=Combine Shape11 | Exclude Shape13
;Shape16=Combine Shape12 | Exclude Shape14
;Shape17=Rectangle #Pn.Zn.Gn# | #da.sk# | Fill Color 128,128,128,(255*#Hl.Cl#)
;Shape18=Combine Shape17 | Exclude Shape13 | Exclude Shape14
FlClBG_0=#Fl.Cl.Bg#,(255*#Op.Bg#*(1-#PnGdnt.Enab#))
FlClBG_1=Fill LinearGradient Gdnt
Gdnt=#PnGdnt.Ag# | #PnGdnt.Cl.01#,(255*#Op.Bg#) ; 0 | #PnGdnt.Cl.02#,(255*#Op.Bg#) ; 1
Hover=#Da.Bg#
DynamicVariables=1

[St.PnQRsz_1]
MouseOverAction=[!ShowMeter Mt.Rsz][!Redraw]
MouseLeaveAction=[!HideMeter Mt.Rsz][!Redraw]

[St.PnSr]
MouseOverAction=[!ShowMeter Mt.Srbr][#MOA.AutoQ_[#AutoQ]][#MOA.TcMd_[&Ms.Calc.IsFull][#TcMd]][!Redraw]
MouseLeaveAction=[!HideMeter Mt.Srbr][#MLA.AutoQ_[#AutoQ]][#MLA.TcMd_[&Ms.Calc.IsFull][#TcMd]][!Redraw]
MouseScrollUpAction=[!SetVariable "Index" "(Clamp((#Index#-1),0,(Max((#MaxQ#-#DisQ#),0))))"]#PMSUA#[!Update][!Redraw]
MouseScrollDownAction=[!SetVariable "Index" "(Clamp((#Index#+1),0,(Max((#MaxQ#-#DisQ#),0))))"]#PMSDA#[!Update][!Redraw]

[St.Zn]
; "Panel Zone" Style
X=(#Ppos.X#)
Y=(#Ppos.Y#)
Shape=Rectangle #Pn.Zn.Or# | #da.sk#
DynamicVariables=1

[St.Le]
; Light Effect Style as an independent meter
Shape=Rectangle #Pn.Zn.Gn# | #Da.Sk# | Fill LinearGradient GdntHlL
Shape2=Rectangle #Pn.Zn.Gn# | #Da.Sk# | Fill Color 255,255,255,(255*#Hl.Op#)
Shape3=Rectangle #Pn.Zn.DC#
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle #Pn.Zn.Gn# | #Da.Sk# | #Fl.Cl.Le#
Shape6=Rectangle #Pn.Zn.Gn# | Offset (-cos(PI/180*#Le.Ag#)*#Le.Dt#),(-sin(PI/180*#Le.Ag#)*#Le.Dt#)
Shape7=Combine Shape5 | Exclude Shape6
GdntHlL=#Le.Ag# | 255,255,255,(255*#Hl.Op#) ; 0 | 255,255,255,(128*#Hl.Op#) ; 0.499 | 0,0,0,(128*#Hl.Op#) ; 0.5 | 0,0,0,0 ; 1
DynamicVariables=1

[St.Le.Rtt]
Shape8=Ellipse (64*#sc#+(#Ppos.X#)),(64*#sc#+(#Ppos.Y#)),((49/2+4*#ScndHnd#)*2*#sc#)
Shape9=Combine Shape | Exclude Shape8
Shape10=Ellipse (64*#sc#+(#Ppos.X#)),(64*#sc#+(#Ppos.Y#)),((49/2+4*#ScndHnd#)*2*#sc#) | #da.sk# | Fill LinearGradient GdntHlL_Cstm.01
Shape11=Ellipse ((64-(49/2+4*#ScndHnd#)*3.45*cos(#Le.Ag#*PI/180))*#sc#+(#Ppos.X#)),((64-(49/2+4*#ScndHnd#)*3.45*sin(#Le.Ag#*PI/180))*#sc#+(#Ppos.Y#)),((49/2+4*#ScndHnd#)*4*#sc#)
Shape12=Combine Shape10 | Exclude Shape11
Shape13=Ellipse (64*#sc#+(#Ppos.X#)),(64*#sc#+(#Ppos.Y#)),((49/2+4*#ScndHnd#)*2*#sc#) | #da.sk# | Fill LinearGradient GdntHlL_Cstm.02
Shape14=Combine Shape13 | Intersect Shape11
Shape15=Ellipse (64*#sc#+(#Ppos.X#)),(64*#sc#+(#Ppos.Y#)),(((49/2+4*#ScndHnd#)*2-1)*#sc#) | #da.bg# | StrokeWidth (2*#sc#) | Stroke LinearGradient GdntHlL_Cstm.03
GdntHlL_Cstm.01=#Le.Ag# | 255,255,255,(255*#Hl.Op#*2) ; 0 | 255,255,255,(64*#Hl.Op#) ; 1.0
GdntHlL_Cstm.02=#Le.Ag# | 0,0,0,(64*#Hl.Op#) ; 0 | 0,0,0,0 ; 1.0
GdntHlL_Cstm.03=#Le.Ag# | 255,255,255,(128*#Hl.Op#) ; 0 | 255,255,255,0 ; 1.0

[Ms.Bl]
Measure=Plugin
Plugin=FrostedGlass
Type=[#Bl.Md_[#Bl.Gl.Md].Ty_[#Bl.Gl.Ty]]
Border=[#Bl.Md_[#Bl.Gl.Md].Bd_[#Bl.Gl.Bd]]
Corner=[#Bl.Md_[#Bl.Gl.Md].Cn_[#Bl.Gl.Cn]]
DynamicVariables=1
; Special thanks to theAzack9

[St.RlB]
Shape=Ellipse (64*#Sc#),(64*#Sc#),(49*#Sc#) | StrokeWidth (1*#Sc#) | Stroke Color #Cl.Gn.Fg.Gn#,(48*#Op.Fg#) | Fill Color 0,0,0,0
DynamicVariables=1
[St.Rl]
MeasureName=Ms.Rl
X=(16*#Sc#)
Y=(16*#Sc#)
W=(96*#Sc#)
H=(96*#Sc#)
StartAngle=(Rad(270))
RotationAngle=(Rad(360))
LineWidth=(2*#Sc#)
LineStart=(47*#Sc#)
LineLength=(49*#Sc#)
LineColor=#Cl.Ac.Bg.Gn#,(255*#Op.Fg#)
Solid=1
AntiAlias=1
DynamicVariables=1

[St.TitleBg]
Shape=Rectangle 0,0,(64*#PW#*#sc#),(32*#sc#) | #da.sk# | Fill Color #cl.gn.fg.Gn#,(16*#Op.Bg#)
DynamicVariables=1
[St.Title]
X=(12*#sc#)
Y=(16*#sc#)
W=((64*#PW#-12*2)*#sc#)
StringAlign=LeftCenter
ClipString=1
DynamicVariables=1

[St.Gp.MvBts]
Group=Gp.MvBts
Hidden=1
[St.Sp.MvBts]
Shape=Rectangle 0,0,(24*#sc#),(24*#sc#),(#Cr#/4),(#Cr#/4) | #da.sk# | Fill Color #Cl.Gn.Bg.Op#
Shape2=Rectangle (-#sc#),(-#sc#),((24+2)*#sc#),((24+2)*#sc#),((#Cr#=0)?0:(#Cr#/4+#sc#)),((#Cr#=0)?0:(#Cr#/4+#sc#)) | #da.sk# | #Fl.Cl.Ob#
Shape3=Rectangle 0,0,(24*#sc#),(24*#sc#),(#Cr#/4),(#Cr#/4)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle 0,0,(24*#sc#),(24*#sc#),(#Cr#/4),(#Cr#/4) | #da.sk# | Extend Hover
DynamicVariables=1
[St.Bt.MvPre]
LeftMouseUpAction=[!SetVariable "Index" "(Clamp((#Index#-1),0,(Max((#MaxQ#-#DisQ#),0))))"]#PMSUA#[!Update][!Redraw]
[St.Bt.MvNxt]
LeftMouseUpAction=[!SetVariable "Index" "(Clamp((#Index#+1),0,(Max((#MaxQ#-#DisQ#),0))))"]#PMSDA#[!Update][!Redraw]
[St.Bt.MvPrePg]
LeftMouseUpAction=[!SetVariable "Index" "(Clamp((#Index#-#DisQ#),0,(Max((#MaxQ#-#DisQ#),0))))"]#PMSUAPg#[!Update][!Redraw]
[St.Bt.MvNxtPg]
LeftMouseUpAction=[!SetVariable "Index" "(Clamp((#Index#+#DisQ#),0,(Max((#MaxQ#-#DisQ#),0))))"]#PMSDAPg#[!Update][!Redraw]
[St.Im.MvBts]
W=(16*#sc#)
H=(16*#sc#)
DynamicVariables=1

[St.Srbr.Ver]
Shape=Rectangle (64*#Sc#*#PW#-4*#Sc#-#sp#),(#Cr#+(64*#Sc#*#PH#-#Cr#*2)*#Index#*1/#MaxQ#),(4*#sc#),((64*#Sc#*#PH#-#Cr#*2)*#DisQ#/#MaxQ#),(#Cr#>0?(2*#sc#):0),(#Cr#>0?(2*#sc#):0) | #da.sk# | Fill Color #cl.gn.fg.gn#,(96*#op.fg#*[Ms.Calc.IsFull])
DynamicVariables=1
Hidden=1
[St.Im.MvPre.Ver]
ImageName=#@#Image\MonoIcons\16\AUp
X=([Mt.Bt.MvPre.00:X]+4*#sc#)
Y=([Mt.Bt.MvPre.00:Y]+4*#sc#)
[St.Im.MvPrePg.Ver.01]
ImageName=#@#Image\MonoIcons\16\AUp
X=([Mt.Bt.MvPrePg.00:X]+4*#sc#)
Y=([Mt.Bt.MvPrePg.00:Y]+0*#sc#)
[St.Im.MvPrePg.Ver.02]
ImageName=#@#Image\MonoIcons\16\AUp
X=([Mt.Bt.MvPrePg.00:X]+4*#sc#)
Y=([Mt.Bt.MvPrePg.00:Y]+8*#sc#)
[St.Im.MvNxt.Ver]
ImageName=#@#Image\MonoIcons\16\ADown
X=([Mt.Bt.MvNxt.00:X]+4*#sc#)
Y=([Mt.Bt.MvNxt.00:Y]+4*#sc#)
[St.Im.MvNxtPg.Ver.01]
ImageName=#@#Image\MonoIcons\16\ADown
X=([Mt.Bt.MvNxtPg.00:X]+4*#sc#)
Y=([Mt.Bt.MvNxtPg.00:Y]+0*#sc#)
[St.Im.MvNxtPg.Ver.02]
ImageName=#@#Image\MonoIcons\16\ADown
X=([Mt.Bt.MvNxtPg.00:X]+4*#sc#)
Y=([Mt.Bt.MvNxtPg.00:Y]+8*#sc#)
[St.Srbr.Hor]
Shape=Rectangle (#Cr#+(64*#Sc#*#PW#-#Cr#*2)*#Index#*1/#MaxQ#),(64*#Sc#*#PH#-4*#Sc#-#sp#),((64*#Sc#*#PW#-#Cr#*2)*#DisQ#/#MaxQ#),(4*#sc#),(#Cr#>0?(2*#sc#):0),(#Cr#>0?(2*#sc#):0) | #da.sk# | Fill Color #cl.gn.fg.gn#,(96*#op.fg#*[Ms.Calc.IsFull])
DynamicVariables=1
Hidden=1
[St.Im.MvPre.Hor]
ImageName=#@#Image\MonoIcons\16\ALeft
X=([Mt.Bt.MvPre.00:X]+4*#sc#)
Y=([Mt.Bt.MvPre.00:Y]+4*#sc#)
[St.Im.MvPrePg.Hor.01]
ImageName=#@#Image\MonoIcons\16\ALeft
X=([Mt.Bt.MvPrePg.00:X]+0*#sc#)
Y=([Mt.Bt.MvPrePg.00:Y]+4*#sc#)
[St.Im.MvPrePg.Hor.02]
ImageName=#@#Image\MonoIcons\16\ALeft
X=([Mt.Bt.MvPrePg.00:X]+8*#sc#)
Y=([Mt.Bt.MvPrePg.00:Y]+4*#sc#)
[St.Im.MvNxt.Hor]
ImageName=#@#Image\MonoIcons\16\ARight
X=([Mt.Bt.MvNxt.00:X]+4*#sc#)
Y=([Mt.Bt.MvNxt.00:Y]+4*#sc#)
[St.Im.MvNxtPg.Hor.01]
ImageName=#@#Image\MonoIcons\16\ARight
X=([Mt.Bt.MvNxtPg.00:X]+0*#sc#)
Y=([Mt.Bt.MvNxtPg.00:Y]+4*#sc#)
[St.Im.MvNxtPg.Hor.02]
ImageName=#@#Image\MonoIcons\16\ARight
X=([Mt.Bt.MvNxtPg.00:X]+8*#sc#)
Y=([Mt.Bt.MvNxtPg.00:Y]+4*#sc#)

[St.Rsz]
ImageName=#@#Image\MonoIcons\16\Resize
X=(#CURRENTCONFIGWIDTH#-24*#sc#)
Y=(#CURRENTCONFIGHEIGHT#-24*#sc#)
W=(16*#sc#)
H=(16*#sc#)
LeftMouseDownAction=[!Delay 500][!ActivateConfig "#CURRENTCONFIG#" "Resizing.ini"]
MouseActionCursor=1
MouseActionCursorName=SIZE_NWSE
Hidden=1
