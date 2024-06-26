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
Shape6=Rectangle #Pn.Zn.Gn# | #Da.Sk# | Extend FlClBG
Shape7=Rectangle #Pn.Zn.Gn# | #Da.Sk# | Extend Hover
Shape8=Rectangle #Pn.Zn.Gn# | #Da.Sk# | Fill Color #Cl.Gn.Fg.Gn#,(128*#Op.Bd#)
Shape9=Rectangle #Pn.Zn.Sq#
Shape10=Combine Shape8 | Exclude Shape9
Shape11=Rectangle #Pn.Zn.Gn# | #da.sk# | Fill Color 0,0,0,(255*#Hl.Cl#)
Shape12=Rectangle #Pn.Zn.Gn# | #da.sk# | Fill Color 255,255,255,(255*#Hl.Cl#)
Shape13=Rectangle #Pn.Zn.Gn# | Offset -2,-2
Shape14=Rectangle #Pn.Zn.Gn# | Offset 2,2
Shape15=Combine Shape11 | Exclude Shape13
Shape16=Combine Shape12 | Exclude Shape14
Shape17=Rectangle #Pn.Zn.Gn# | #da.sk# | Fill Color 128,128,128,(255*#Hl.Cl#)
Shape18=Combine Shape17 | Exclude Shape13 | Exclude Shape14
FlClBG=#Fl.Cl.Bg#,(255*#Op.Bg#*(1-#PnGdnt.Enab#))
Hover=#Da.Bg#
DynamicVariables=1

[St.Zn]
; "Panel Zone" Style
X=(#Ppos.X#)
Y=(#Ppos.Y#)
Shape=Rectangle #Pn.Zn.Or# | #da.sk#
DynamicVariables=1

[St.Gdnt]
X=(#Ppos.X#)
Y=(#Ppos.Y#)
Shape=Rectangle #Pn.Zn.Or# | #da.sk# | Fill LinearGradient Gdnt
Gdnt=#PnGdnt.Ag# | #PnGdnt.Cl.01#,(255*#Op.Bg#) ; 0 | #PnGdnt.Cl.02#,(255*#Op.Bg#) ; 1
Hidden=(1-#PnGdnt.Enab#)
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
GdntHlL=#Le.Ag# | 255,255,255,(255*#Hl.Op#) ; 0 | 255,255,255,(128*#Hl.Op#) ; 0.499 | 0,0,0,(64*#Hl.Op#) ; 0.5 | 0,0,0,0 ; 1
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