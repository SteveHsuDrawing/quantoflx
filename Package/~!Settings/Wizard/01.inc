[Variables]
HdBkBt=1
BkBtAc=[]
QtBtAc=[]
CfBtAc_0=[]
CfBtAc_1=[]

HdNtBt=1
NtBtTx=#Tm.Next#
NtBtAc=[]

Vr.CstmA.Gdnt_01=0
Vr.CstmA.Gdnt_02=0

[Rainmeter]
OnRefreshAction=[!Update][!CommandMeasure "Ms.An_Cstm" "Execute 1"]

[Ms.An_Cstm]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat AL.CstmA.Gdnt_01,25,20 | Wait 2000 | Repeat AL.CstmA.Gdnt_02,25,20 | AL.CstmA.NextPge
AL.CstmA.Gdnt_01=[!SetVariable Vr.CstmA.Gdnt_01 "(Clamp((#Vr.CstmA.Gdnt_01#+1/20),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_01][!Redraw]
AL.CstmA.Gdnt_02=[!SetVariable Vr.CstmA.Gdnt_02 "(Clamp((#Vr.CstmA.Gdnt_02#+1/20),0,1))"][!UpdateMeasure Ms.An_Cstm][!UpdateMeterGroup Gp.AL.CstmA.Gdnt_02][!Redraw]
AL.CstmA.NextPge=[!WriteKeyValue "Variables" "Page" "02" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Delay 500][!Refresh]
DynamicVariables=1

@include=#@#Config\Language\LanguageList.inc

[Mt.Title]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Sl|St.TxW.GnTx|St.Title
Text=#St.Setup.0000#
FontColor=#Cl.Ac.Fg.Sl#,(255*(#Vr.CstmA.Gdnt_01#-#Vr.CstmA.Gdnt_02#))
X=(#CURRENTCONFIGWIDTH#/2)
Y=(#CURRENTCONFIGHEIGHT#/2)
FontSize=(20*#sc#)
StringAlign=CenterCenter
Group=Gp.AL.CstmA.Gdnt_01|Gp.AL.CstmA.Gdnt_02