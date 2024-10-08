[Variables]
HdBkBt=0
BkBtAc=[!WriteKeyValue "Variables" "Page" "05" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
QtBtAc=[]
CfBtAc_0=[]
CfBtAc_1=[]

HdNtBt=1
NtBtTx=#Tm.Next#
NtBtAc=[]

Vr.CstmA.Gdnt_01=0
Vr.CstmA.Gdnt_02=0
Vr.CstmA.Gdnt_03=0

[Ms.An_Cstm]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat AL.CstmA.Gdnt_01,10,20
ActionList2=Repeat AL.CstmA.GdnI_01,10,20
ActionList3=Repeat AL.CstmA.Gdnt_02,10,20
ActionList4=Repeat AL.CstmA.GdnI_02,10,20
ActionList5=Repeat AL.CstmA.Gdnt_03,10,20 | AL.CstmA.NextPge
AL.CstmA.Gdnt_01=[!SetVariable Vr.CstmA.Gdnt_01 "(Clamp((#Vr.CstmA.Gdnt_01#+1/20),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_01][!Redraw]
AL.CstmA.GdnI_01=[!SetVariable Vr.CstmA.Gdnt_01 "(Clamp((#Vr.CstmA.Gdnt_01#-1/20),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_01][!Redraw]
AL.CstmA.Gdnt_02=[!SetVariable Vr.CstmA.Gdnt_02 "(Clamp((#Vr.CstmA.Gdnt_02#+1/20),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_02][!Redraw]
AL.CstmA.GdnI_02=[!SetVariable Vr.CstmA.Gdnt_02 "(Clamp((#Vr.CstmA.Gdnt_02#-1/20),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_02][!Redraw]
AL.CstmA.Gdnt_03=[!SetVariable Vr.CstmA.Gdnt_03 "(Clamp((#Vr.CstmA.Gdnt_03#+1/20),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_03][!Redraw]
AL.CstmA.NextPge=[!WriteKeyValue "Variables" "Page" "00" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Delay 16][!ActivateConfig "#CURRENTCONFIG#" "LoadLayout.ini"]
DynamicVariables=1

[Mt.Title]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Title
Text=#St.Setup.0300#
[Mt.Text.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Ps.Tx.YN.01
Text=#St.Setup.0301#
InlinePattern=//.*?//
InlineSetting=Italic
InlinePattern2=\*\*.*?\*\*
InlineSetting2=Weight | (Clamp((#Ft.Wt.Gn#+#Ft.Wt.Bd#),1,999))
InlinePattern3=__.*?__
InlineSetting3=Underline
InlinePattern4=--.*?--
InlineSetting4=Strikethrough
InlinePattern5=``.*?``
InlineSetting5=Face | Lucida Sans Typewriter
InlinePattern6=@@.*?@@
InlineSetting6=Color | #Cl.Ac.Bg.Gn#
InlinePattern7=\^\^.*?\^\^
InlineSetting7=Case | Upper
InlinePattern8=\+{2}.*?\+{2}
InlineSetting8=Size | (14*#Sc#*#Ft.Sc.Gn#)
InlinePattern9=\+{4}.*?\+{4}
InlineSetting9=Size | (18*#Sc#*#Ft.Sc.Gn#)
InlinePattern10=\+{6}.*?\+{6}
InlineSetting10=Size | (22*#Sc#*#Ft.Sc.Gn#)
InlinePattern11=\*\*|//|__|--|``|\^\^|@@|\+\+
InlineSetting11=Size | 0.01
[Mt.Text.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx
X=(24*#sc#)
Y=(504*#sc#)
StringAlign=LeftBottom
Text=#St.Setup.0302#
InlinePattern=//.*?//
InlineSetting=Italic
InlinePattern2=\*\*.*?\*\*
InlineSetting2=Weight | (Clamp((#Ft.Wt.Gn#+#Ft.Wt.Bd#),1,999))
InlinePattern3=__.*?__
InlineSetting3=Underline
InlinePattern4=--.*?--
InlineSetting4=Strikethrough
InlinePattern5=``.*?``
InlineSetting5=Face | Lucida Sans Typewriter
InlinePattern6=@@.*?@@
InlineSetting6=Color | #Cl.Ac.Bg.Gn#
InlinePattern7=\^\^.*?\^\^
InlineSetting7=Case | Upper
InlinePattern8=\+{2}.*?\+{2}
InlineSetting8=Size | (14*#Sc#*#Ft.Sc.Gn#)
InlinePattern9=\+{4}.*?\+{4}
InlineSetting9=Size | (18*#Sc#*#Ft.Sc.Gn#)
InlinePattern10=\+{6}.*?\+{6}
InlineSetting10=Size | (22*#Sc#*#Ft.Sc.Gn#)
InlinePattern11=\*\*|//|__|--|``|\^\^|@@|\+\+
InlineSetting11=Size | 0.01
LeftMouseUpAction=["https://github.com/SteveHsuDrawing/quantoflx/wiki/Guide-for-New-Users#if-it-fails-to-initialize-the-default-layout"]
MouseActionCursor=1
MouseActionCursorName=HAND

[Mt.QuantoFlx]
Meter=Image
MeterStyle=St.ZnCt
ImageName=#@#Image\Quanto.png
W=((128*(1-0.2*(sqrt(sqrt(#Vr.CstmA.Gdnt_02#)))))*#sc#)
H=((128*(1-0.2*(sqrt(sqrt(#Vr.CstmA.Gdnt_02#)))))*#sc#)
X=((#CURRENTCONFIGWIDTH#-(128*(1-0.2*(sqrt(sqrt(#Vr.CstmA.Gdnt_02#)))))*#sc#)/2)
Y=((#CURRENTCONFIGWIDTH#-(128*(1-0.2*(sqrt(sqrt(#Vr.CstmA.Gdnt_02#)))))*#sc#)/2)
MouseOverAction=[!CommandMeasure "Ms.An_Cstm" "Execute 1"]
MouseLeaveAction=[!CommandMeasure "Ms.An_Cstm" "Execute 2"][!CommandMeasure "Ms.An_Cstm" "Execute 4"]
LeftMouseDownAction=[!CommandMeasure "Ms.An_Cstm" "Execute 3"]
LeftMouseUpAction=[!CommandMeasure "Ms.An_Cstm" "Execute 5"]
MouseActionCursor=1
MouseActionCursorName=HAND
Group=Gp.AL.CstmA.Gdnt_02
[HMt.QuantoFlx]
Meter=Shape
MeterStyle=St.ZnCt
Shape=Rectangle 0,(32*#sc#),(128*#sc#),(96*#sc#),(4*#sc#),(4*#sc#) | #da.sk# | Fill Color 255,255,255,(48*(#Vr.CstmA.Gdnt_01#))
Shape2=Rectangle (8*#sc#),0,(56*#sc#),(36*#sc#),(4*#sc#),(4*#sc#)
Shape3=Combine Shape | Union Shape2 | Scale (1-0.2*(sqrt(sqrt(#Vr.CstmA.Gdnt_02#)))),(1-0.2*(sqrt(sqrt(#Vr.CstmA.Gdnt_02#)))),0,0
DynamicVariables=1
X=0r
Y=0r
Group=Gp.AL.CstmA.Gdnt_01|Gp.AL.CstmA.Gdnt_02
[Mt.Blank]
Meter=Shape
MeterStyle=St.ZnCt
Shape=Rectangle 0,0,(#CURRENTCONFIGWIDTH#),(#CURRENTCONFIGHEIGHT#),(#Cr#),(#Cr#) | Fill Color #Cl.Gn.Bg.Gn# | #da.sk# | Scale (1*(sqrt(sqrt(#Vr.CstmA.Gdnt_03#)))),(1*(sqrt(sqrt(#Vr.CstmA.Gdnt_03#))))
DynamicVariables=1
Group=Gp.AL.CstmA.Gdnt_03
