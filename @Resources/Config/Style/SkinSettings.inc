[Variables]
@include=#Pk@#Config\Language\en-us\List.inc
@include2=#Pk@#Config\Language\#Lg#\List.inc
Mt.Op.00---=#Tm.Combination#
Mt.Op.00----=Null
Mt.Op.00-----=
Mt.Op.00------=00
Mt.Op.00-------=0,1
Mt.Op.00--------=0
Mt.Op.00---------=[]

Vb.SuTt.Mt.Op.01--=1
Vb.SuTt.Mt.Op.02--=2
Vb.SuTt.Mt.Op.03--=3
Vb.SuTt.Mt.Op.04--=4
Vb.SuTt.Mt.Op.05--=5
Vb.SuTt.Mt.Op.06--=6
Vb.SuTt.Mt.Op.07--=7
Vb.SuTt.Mt.Op.08--=8
Vb.SuTt.Mt.Op.09--=9

[Rainmeter]
Group=Quanto|Quanto_Panels
SkinWidth=(256*#Sc#)
SkinHeight=(32*#Sc#*((Clamp((Trunc(#Ln#)),0,10))+3))

[Mt.Pn]
Meter=Shape
Shape=Rectangle 0,0,(256*#sc#),(((Clamp((Trunc(#Ln#)),0,10))+3)*32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Da#
Shape2=Rectangle 0,(64*#sc#),(256*#sc#),(((Clamp((Trunc(#Ln#)),0,10))+1)*32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Bg.Sl#
Shape3=Rectangle 0,(64*#sc#),(256*#sc#),(#Cr#/2)
Shape4=Combine Shape2 | Union Shape3
Shape5=Rectangle 0,0,(256*#sc#),(((Clamp((Trunc(#Ln#)),0,10))+3)*32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,32
Shape6=Rectangle (1*#sc#),(1*#sc#),((256-2)*#sc#),((((Clamp((Trunc(#Ln#)),0,10))+3)*32-2)*#sc#),(#Cr#/2-1*#sc#),(#Cr#/2-1*#sc#)
Shape7=Combine Shape5 | Exclude Shape6
Shape8=Rectangle 0,(64*#sc#),(256*#sc#),(1*#sc#) | #da.sk# | Fill Color #Cl.Gn.Fg.Gn#,32
DynamicVariables=1
RightMouseUpAction=[!Refresh]
MiddleMouseUpAction=[]
[Mt.Zn]
Meter=Shape
Shape=Rectangle 0,0,(256*#sc#),(((Clamp((Trunc(#Ln#)),0,10))+3)*32*#sc#),(#Cr#/2),(#Cr#/2) | #da.sk#
DynamicVariables=1

[Mt.MainIc]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl
ImageName=#Pk@#Image\MonoIcons\20\#Sk.Nm#
W=(20*#sc#)
H=(20*#sc#)
X=(16*#sc#)
Y=(22*#sc#)
[Mt.MainNmDc]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Ww|St.Ft.Sl
StringAlign=LeftCenter
Text=[#OpLs.[#Sk.Nm].Nm]#CRLF#[#OpLs.[#Sk.Nm].Dc]
X=((16*2+20)*#sc#)
Y=(32*#sc#)
W=((252-(16*3+20))*#sc#)
H=(64*#sc#)
FontSize=(8*#Sc#*#Ft.Sc.Gn#)
FontColor=#Cl.Gn.Fg.Gn#,128
InlinePattern=[#OpLs.[#Sk.Nm].Nm]#CRLF#
InlineSetting=Size | (10*#sc#*#Ft.Sc.Gn#)
InlinePattern2=[#OpLs.[#Sk.Nm].Nm]#CRLF#
InlineSetting2=Color | #Cl.Gn.Fg.Gn#
[Mt.CloseBg]
Meter=Shape
MeterStyle=St.ZnCt
X=((256-(12+10*2))*#sc#)
Shape=Rectangle 0,0,((12+10*2)*#sc#),((12+10*2)*#sc#) | #da.sk# | Extend Hover
Hover=#Da.Bg#
MouseOverAction=[!SetOption "#CURRENTSECTION#" "Hover" "Fill Color 196,43,28"][!SetOption "Mt.CloseIc" "ImageTint" "255,255,255"][!UpdateMeter *][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" "Hover" "#Da.Bg#"][!SetOption "Mt.CloseIc" "ImageTint" "#Cl.Gn.Fg.Gn#"][!UpdateMeter *][!Redraw]
LeftMouseUpAction=#Ac.Alternative#
DynamicVariables=1
[Mt.CloseIc]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl
ImageName=#@#Image\MonoIcons\12\Close.png
W=(12*#sc#)
H=(12*#sc#)
X=((256-12-10)*#sc#)
Y=(10*#sc#)

[St.Po.Op.Nx]
X=0r
Y=(32*#sc#)r

[St.Po.Op.St.Tx.01]
X=(8*#sc#)
Y=((64+16)*#sc#)
[St.Po.Op.St.Tx.02]
X=((256-8*2-16)*#sc#)
Y=((64+16)*#sc#)
[St.Po.Op.St.Ic.01]
X=((256-16-8)*#sc#)
Y=((8+64)*#sc#)
[St.Po.Op.St.Ic.02]
X=((256-16-8)*#sc#)
Y=((8+64+8)*#sc#)
[St.Po.Op.St.Hv.01]
X=0
Y=((64)*#sc#)

[St.Cstm.Tx.01]
FontSize=(9*#Sc#*#Ft.Sc.Gn#)
Text=[#[#CURRENTSECTION]---]
W=((256-8*3-16)*#sc#-[&[#CURRENTSECTION]-:W])
ClipString=1
StringAlign=LeftCenter

[St.Cstm.Tx.02.00]
Hidden=1
[St.Cstm.Tx.02.01]
FontSize=(9*#Sc#*#Ft.Sc.Gn#)
Text=[#[#CURRENTSECTION]----]
FontColor=#Cl.Gn.Fg.Gn#,128
StringAlign=RightCenter
LeftMouseUpAction=[!CommandMeasure "Ms.[#CURRENTSECTION]-" "ExecuteBatch 1"][!ShowMeter "C[#CURRENTSECTION]-"][!Redraw]
MouseActionCursor=1
MouseActionCursorName=TEXT
[St.Cstm.Tx.02.02]
FontSize=(9*#Sc#*#Ft.Sc.Gn#)
Text=[#[#CURRENTSECTION]----]
FontColor=#Cl.Gn.Fg.Gn#,128
StringAlign=RightCenter
LeftMouseUpAction=[!CommandMeasure "Ms.[#CURRENTSECTION]--" "ExecuteBatch 1"][!ShowMeter "C[#CURRENTSECTION]-"][!Redraw]
MouseActionCursor=1
MouseActionCursorName=TEXT
[St.Cstm.Tx.02.03]
FontSize=(9*#Sc#*#Ft.Sc.Gn#)
Text=[#[#CURRENTSECTION]----]
FontColor=#Cl.Gn.Fg.Gn#,128
StringAlign=RightCenter
LeftMouseUpAction=[!SetVariable "CM" "CMSS_[#CURRENTSECTION]-"][!Delay 16][!Update][!SkinCustomMenu][!Delay 16][!Update][!SetVariable "CM" "CMCommon"][!Delay 16][!Update]
MouseActionCursor=1
MouseActionCursorName=HAND
[St.Cstm.Tx.02.04]
FontSize=(9*#Sc#*#Ft.Sc.Gn#)
Text=[#[#CURRENTSECTION]----]
FontColor=#Cl.Gn.Fg.Gn#,128
StringAlign=RightCenter
LeftMouseUpAction=[!WriteKeyValue "Variables" "[#[#CURRENTSECTION]---]" "(1-[#[#[#CURRENTSECTION]---]])" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
MouseActionCursor=1
MouseActionCursorName=HAND
[St.Cstm.Tx.02.05]
FontSize=(9*#Sc#*#Ft.Sc.Gn#)
Text=[#[#CURRENTSECTION]----]
FontColor=#Cl.Gn.Fg.Gn#,128
StringAlign=RightCenter
LeftMouseUpAction=[!CommandMeasure Ms.FlCs "ChooseFolder [#Vb.SuTt.[#CURRENTSECTION]-]"]
MouseActionCursor=1
MouseActionCursorName=HAND
[St.Cstm.Tx.02.06]
FontSize=(9*#Sc#*#Ft.Sc.Gn#)
Text=[#[#CURRENTSECTION]----]
FontColor=#Cl.Gn.Fg.Gn#,128
StringAlign=RightCenter
LeftMouseUpAction=[!CommandMeasure Ms.FlCs "ChooseFile [#Vb.SuTt.[#CURRENTSECTION]]-"]
MouseActionCursor=1
MouseActionCursorName=HAND
[St.Cstm.Tx.02.07]
FontSize=(9*#Sc#*#Ft.Sc.Gn#)
Text=[#[#CURRENTSECTION]----]
FontColor=#Cl.Gn.Fg.Gn#,128
StringAlign=RightCenter
LeftMouseUpAction=[!CommandMeasure Ms.FlCs "ChooseImage [#Vb.SuTt.[#CURRENTSECTION]]-"]
MouseActionCursor=1
MouseActionCursorName=HAND
[St.Cstm.Tx.02.08]
FontSize=(9*#Sc#*#Ft.Sc.Gn#)
Text=[#[#CURRENTSECTION]----]
FontColor=#Cl.Gn.Fg.Gn#,128
StringAlign=RightCenter
LeftMouseUpAction=["[#[#[#CURRENTSECTION]---]]"]
MouseActionCursor=1
MouseActionCursorName=HAND

[St.Cstm.Ic.01.00]
Hidden=1
[St.Cstm.Ic.01.01]
ImageName=#@#Image\MonoIcons\16\Edit
W=(16*#sc#)
H=(16*#sc#)
LeftMouseUpAction=[!CommandMeasure "Ms.[#CURRENTSECTION]" "ExecuteBatch 1"][!ShowMeter "C[#CURRENTSECTION]"][!Redraw]
MouseActionCursor=1
MouseActionCursorName=HAND
[St.Cstm.Ic.01.02]
ImageName=#@#Image\MonoIcons\Other\AUp_16_8.png
W=(16*#sc#)
H=(8*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "[#[#CURRENTSECTION]--]" "(Clamp(([#[#[#CURRENTSECTION]--]]+[#[#CURRENTSECTION]------]),[#[#CURRENTSECTION]-----]))" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
MouseActionCursor=1
MouseActionCursorName=HAND
ToolTipText=+[#[#CURRENTSECTION]------]
[St.Cstm.Ic.01.03]
ImageName=#@#Image\MonoIcons\16\ADown
W=(16*#sc#)
H=(16*#sc#)
LeftMouseUpAction=[!SetVariable "CM" "CMSS_[#CURRENTSECTION]"][!Delay 16][!Update][!SkinCustomMenu][!Delay 16][!Update][!SetVariable "CM" "CMCommon"][!Delay 16][!Update]
MouseActionCursor=1
MouseActionCursorName=HAND
[St.Cstm.Ic.01.04]
ImageName=#@#Image\MonoIcons\16\CheckBox[#[#[#CURRENTSECTION]--]]
W=(16*#sc#)
H=(16*#sc#)
ImageTint=[#Cl.Cb.[#[#[#CURRENTSECTION]--]]]
LeftMouseUpAction=[!WriteKeyValue "Variables" "[#[#CURRENTSECTION]--]" "(1-[#[#[#CURRENTSECTION]--]])" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
MouseActionCursor=1
MouseActionCursorName=HAND
[St.Cstm.Ic.01.05]
ImageName=#@#Image\MonoIcons\16\SearchForFolder
W=(16*#sc#)
H=(16*#sc#)
LeftMouseUpAction=[!CommandMeasure Ms.FlCs "ChooseFolder [#Vb.SuTt.[#CURRENTSECTION]]"]
MouseActionCursor=1
MouseActionCursorName=HAND
[St.Cstm.Ic.01.06]
ImageName=#@#Image\MonoIcons\16\SearchForFile
W=(16*#sc#)
H=(16*#sc#)
LeftMouseUpAction=[!CommandMeasure Ms.FlCs "ChooseFile [#Vb.SuTt.[#CURRENTSECTION]]"]
MouseActionCursor=1
MouseActionCursorName=HAND
[St.Cstm.Ic.01.07]
ImageName=#@#Image\MonoIcons\16\SearchForImage
W=(16*#sc#)
H=(16*#sc#)
LeftMouseUpAction=[!CommandMeasure Ms.FlCs "ChooseImage [#Vb.SuTt.[#CURRENTSECTION]]"]
MouseActionCursor=1
MouseActionCursorName=HAND
[St.Cstm.Ic.01.08]
ImageName=#@#Image\MonoIcons\16\Open
W=(16*#sc#)
H=(16*#sc#)
LeftMouseUpAction=["[#[#[#CURRENTSECTION]--]]"]
MouseActionCursor=1
MouseActionCursorName=HAND

[St.Cstm.Ic.02.00]
Hidden=1
[St.Cstm.Ic.02.01]
Hidden=1
[St.Cstm.Ic.02.02]
ImageName=#@#Image\MonoIcons\Other\ADown_16_8.png
W=(16*#sc#)
H=(8*#sc#)
LeftMouseUpAction=[!WriteKeyValue "Variables" "[#[#CURRENTSECTION]-]" "(Clamp(([#[#[#CURRENTSECTION]-]]-[#[#CURRENTSECTION]-----]),[#[#CURRENTSECTION]----]))" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
MouseActionCursor=1
MouseActionCursorName=HAND
ToolTipText=-[#[#CURRENTSECTION]-----]
[St.Cstm.Ic.02.03]
Hidden=1
[St.Cstm.Ic.02.04]
Hidden=1
[St.Cstm.Ic.02.05]
Hidden=1
[St.Cstm.Ic.02.06]
Hidden=1
[St.Cstm.Ic.02.07]
Hidden=1
[St.Cstm.Ic.02.08]
Hidden=1
[St.Cstm.Ic.02.99]
Hidden=1

[St.Cstm.Hv.01]
Shape=Rectangle 0,0,(256*#sc#),(32*#sc#) | #da.sk# | Extend Hover
Hover=#Da.Bg#

[St.Cstm.Ch.01]
Shape=Rectangle (1*#sc#),(1*#sc#),((256-1*2)*#sc#),((32-1*2)*#sc#),(Max((#Cr#/2-1*#sc#),0)),(Max((#Cr#/2-1*#sc#),0)) | #da.sk# | Fill Color #Cl.Gn.Bg.Ti#
Shape2=Rectangle (1*#sc#),(1*#sc#),((256-1*2)*#sc#),((32-1*2)*#sc#),(Max((#Cr#/2-1*#sc#),0)),(Max((#Cr#/2-1*#sc#),0)) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#
Shape3=Rectangle (1*#sc#),(1*#sc#),((256-1*2)*#sc#),((32-1*2)*#sc#),(Max((#Cr#/2-1*#sc#),0)),(Max((#Cr#/2-1*#sc#),0)) | Offset 0,(-2*#sc#)
Shape4=Combine Shape2 | Exclude Shape3
Hidden=1

[Mt.Op.00]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Sl|St.Cstm.Tx.01|St.Po.Op.St.Tx.01
[Mt.Op.01]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Sl|St.Cstm.Tx.01|St.Po.Op.Nx
[Mt.Op.02]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Sl|St.Cstm.Tx.01|St.Po.Op.Nx
[Mt.Op.03]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Sl|St.Cstm.Tx.01|St.Po.Op.Nx
[Mt.Op.04]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Sl|St.Cstm.Tx.01|St.Po.Op.Nx
[Mt.Op.05]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Sl|St.Cstm.Tx.01|St.Po.Op.Nx
[Mt.Op.06]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Sl|St.Cstm.Tx.01|St.Po.Op.Nx
[Mt.Op.07]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Sl|St.Cstm.Tx.01|St.Po.Op.Nx
[Mt.Op.08]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Sl|St.Cstm.Tx.01|St.Po.Op.Nx
[Mt.Op.09]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Sl|St.Cstm.Tx.01|St.Po.Op.Nx

[Mt.Op.00-]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Sl|St.Cstm.Tx.02.[#[#CURRENTSECTION]-----]|St.Po.Op.St.Tx.02
[Mt.Op.01-]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Sl|St.Cstm.Tx.02.[#[#CURRENTSECTION]-----]|St.Po.Op.Nx
[Mt.Op.02-]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Sl|St.Cstm.Tx.02.[#[#CURRENTSECTION]-----]|St.Po.Op.Nx
[Mt.Op.03-]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Sl|St.Cstm.Tx.02.[#[#CURRENTSECTION]-----]|St.Po.Op.Nx
[Mt.Op.04-]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Sl|St.Cstm.Tx.02.[#[#CURRENTSECTION]-----]|St.Po.Op.Nx
[Mt.Op.05-]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Sl|St.Cstm.Tx.02.[#[#CURRENTSECTION]-----]|St.Po.Op.Nx
[Mt.Op.06-]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Sl|St.Cstm.Tx.02.[#[#CURRENTSECTION]-----]|St.Po.Op.Nx
[Mt.Op.07-]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Sl|St.Cstm.Tx.02.[#[#CURRENTSECTION]-----]|St.Po.Op.Nx
[Mt.Op.08-]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Sl|St.Cstm.Tx.02.[#[#CURRENTSECTION]-----]|St.Po.Op.Nx
[Mt.Op.09-]
Meter=String
MeterStyle=St.ZnCt|St.Ft|St.Ft.Sl|St.Cstm.Tx.02.[#[#CURRENTSECTION]-----]|St.Po.Op.Nx

[Mt.Op.00--]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.01.[#[#CURRENTSECTION]----]|St.Po.Op.St.Ic.01
[Mt.Op.01--]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.01.[#[#CURRENTSECTION]----]|St.Po.Op.Nx
[Mt.Op.02--]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.01.[#[#CURRENTSECTION]----]|St.Po.Op.Nx
[Mt.Op.03--]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.01.[#[#CURRENTSECTION]----]|St.Po.Op.Nx
[Mt.Op.04--]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.01.[#[#CURRENTSECTION]----]|St.Po.Op.Nx
[Mt.Op.05--]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.01.[#[#CURRENTSECTION]----]|St.Po.Op.Nx
[Mt.Op.06--]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.01.[#[#CURRENTSECTION]----]|St.Po.Op.Nx
[Mt.Op.07--]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.01.[#[#CURRENTSECTION]----]|St.Po.Op.Nx
[Mt.Op.08--]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.01.[#[#CURRENTSECTION]----]|St.Po.Op.Nx
[Mt.Op.09--]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.01.[#[#CURRENTSECTION]----]|St.Po.Op.Nx

[Mt.Op.00---]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.02.[#[#CURRENTSECTION]---]|St.Po.Op.St.Ic.02
[Mt.Op.01---]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.02.[#[#CURRENTSECTION]---]|St.Po.Op.Nx
[Mt.Op.02---]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.02.[#[#CURRENTSECTION]---]|St.Po.Op.Nx
[Mt.Op.03---]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.02.[#[#CURRENTSECTION]---]|St.Po.Op.Nx
[Mt.Op.04---]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.02.[#[#CURRENTSECTION]---]|St.Po.Op.Nx
[Mt.Op.05---]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.02.[#[#CURRENTSECTION]---]|St.Po.Op.Nx
[Mt.Op.06---]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.02.[#[#CURRENTSECTION]---]|St.Po.Op.Nx
[Mt.Op.07---]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.02.[#[#CURRENTSECTION]---]|St.Po.Op.Nx
[Mt.Op.08---]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.02.[#[#CURRENTSECTION]---]|St.Po.Op.Nx
[Mt.Op.09---]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.02.[#[#CURRENTSECTION]---]|St.Po.Op.Nx

[HMt.Op.00]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Hv.01|St.Bt.Sp|St.Po.Op.St.Hv.01
[HMt.Op.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Hv.01|St.Bt.Sp|St.Po.Op.Nx
[HMt.Op.02]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Hv.01|St.Bt.Sp|St.Po.Op.Nx
[HMt.Op.03]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Hv.01|St.Bt.Sp|St.Po.Op.Nx
[HMt.Op.04]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Hv.01|St.Bt.Sp|St.Po.Op.Nx
[HMt.Op.05]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Hv.01|St.Bt.Sp|St.Po.Op.Nx
[HMt.Op.06]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Hv.01|St.Bt.Sp|St.Po.Op.Nx
[HMt.Op.07]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Hv.01|St.Bt.Sp|St.Po.Op.Nx
[HMt.Op.08]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Hv.01|St.Bt.Sp|St.Po.Op.Nx
[HMt.Op.09]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Hv.01|St.Bt.Sp|St.Po.Op.Nx

[CMt.Op.00--]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Ch.01|St.Po.Op.St.Hv.01
[CMt.Op.01--]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Ch.01|St.Po.Op.Nx
[CMt.Op.02--]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Ch.01|St.Po.Op.Nx
[CMt.Op.03--]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Ch.01|St.Po.Op.Nx
[CMt.Op.04--]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Ch.01|St.Po.Op.Nx
[CMt.Op.05--]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Ch.01|St.Po.Op.Nx
[CMt.Op.06--]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Ch.01|St.Po.Op.Nx
[CMt.Op.07--]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Ch.01|St.Po.Op.Nx
[CMt.Op.08--]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Ch.01|St.Po.Op.Nx
[CMt.Op.09--]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Ch.01|St.Po.Op.Nx

[Ms.Mt.Op.01--]
Measure=Plugin
Plugin=InputText
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
X=(8*#sc#)
Y=((70+32*1)*#sc#)
W=((256-8*2)*#sc#)
H=(20*#Sc#)
FocusDismiss=1
DefaultValue=[#[#Mt.Op.01----]]
Command1=[!WriteKeyValue "Variables" "[#Mt.Op.01----]" "$UserInput$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter "CMt.Op.01--"][!Redraw]
UpdateDivider=-1
DynamicVariables=1
[Ms.Mt.Op.02--]
Measure=Plugin
Plugin=InputText
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
X=(8*#sc#)
Y=((70+32*2)*#sc#)
W=((256-8*2)*#sc#)
H=(20*#Sc#)
FocusDismiss=1
DefaultValue=[#[#Mt.Op.02----]]
Command1=[!WriteKeyValue "Variables" "[#Mt.Op.02----]" "$UserInput$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter "CMt.Op.02--"][!Redraw]
UpdateDivider=-1
DynamicVariables=1
[Ms.Mt.Op.03--]
Measure=Plugin
Plugin=InputText
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
X=(8*#sc#)
Y=((70+32*3)*#sc#)
W=((256-8*2)*#sc#)
H=(20*#Sc#)
FocusDismiss=1
DefaultValue=[#[#Mt.Op.03----]]
Command1=[!WriteKeyValue "Variables" "[#Mt.Op.03----]" "$UserInput$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter "CMt.Op.03--"][!Redraw]
UpdateDivider=-1
DynamicVariables=1
[Ms.Mt.Op.04--]
Measure=Plugin
Plugin=InputText
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
X=(8*#sc#)
Y=((70+32*4)*#sc#)
W=((256-8*2)*#sc#)
H=(20*#Sc#)
FocusDismiss=1
DefaultValue=[#[#Mt.Op.04----]]
Command1=[!WriteKeyValue "Variables" "[#Mt.Op.04----]" "$UserInput$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter "CMt.Op.04--"][!Redraw]
UpdateDivider=-1
DynamicVariables=1
[Ms.Mt.Op.05--]
Measure=Plugin
Plugin=InputText
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
X=(8*#sc#)
Y=((70+32*5)*#sc#)
W=((256-8*2)*#sc#)
H=(20*#Sc#)
FocusDismiss=1
DefaultValue=[#[#Mt.Op.05----]]
Command1=[!WriteKeyValue "Variables" "[#Mt.Op.05----]" "$UserInput$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter "CMt.Op.05--"][!Redraw]
UpdateDivider=-1
DynamicVariables=1
[Ms.Mt.Op.06--]
Measure=Plugin
Plugin=InputText
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
X=(8*#sc#)
Y=((70+32*6)*#sc#)
W=((256-8*2)*#sc#)
H=(20*#Sc#)
FocusDismiss=1
DefaultValue=[#[#Mt.Op.06----]]
Command1=[!WriteKeyValue "Variables" "[#Mt.Op.06----]" "$UserInput$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter "CMt.Op.06--"][!Redraw]
UpdateDivider=-1
DynamicVariables=1
[Ms.Mt.Op.07--]
Measure=Plugin
Plugin=InputText
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
X=(8*#sc#)
Y=((70+32*7)*#sc#)
W=((256-8*2)*#sc#)
H=(20*#Sc#)
FocusDismiss=1
DefaultValue=[#[#Mt.Op.07----]]
Command1=[!WriteKeyValue "Variables" "[#Mt.Op.07----]" "$UserInput$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter "CMt.Op.07--"][!Redraw]
UpdateDivider=-1
DynamicVariables=1
[Ms.Mt.Op.08--]
Measure=Plugin
Plugin=InputText
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
X=(8*#sc#)
Y=((70+32*8)*#sc#)
W=((256-8*2)*#sc#)
H=(20*#Sc#)
FocusDismiss=1
DefaultValue=[#[#Mt.Op.08----]]
Command1=[!WriteKeyValue "Variables" "[#Mt.Op.08----]" "$UserInput$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter "CMt.Op.08--"][!Redraw]
UpdateDivider=-1
DynamicVariables=1
[Ms.Mt.Op.09--]
Measure=Plugin
Plugin=InputText
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
X=(8*#sc#)
Y=((70+32*9)*#sc#)
W=((256-8*2)*#sc#)
H=(20*#Sc#)
FocusDismiss=1
DefaultValue=[#[#Mt.Op.09----]]
Command1=[!WriteKeyValue "Variables" "[#Mt.Op.09----]" "$UserInput$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter "CMt.Op.09--"][!Redraw]
UpdateDivider=-1
DynamicVariables=1

[Ms.Mt.Op.01---]
Measure=Plugin
Plugin=InputText
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
X=(8*#sc#)
Y=((70+32*1)*#sc#)
W=((256-8*2)*#sc#)
H=(20*#Sc#)
FocusDismiss=1
DefaultValue=[#[#Mt.Op.01----]]
Command1=[!WriteKeyValue "Variables" "[#Mt.Op.01----]" "(Clamp($UserInput$,[#Mt.Op.01-------]))" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter "CMt.Op.01--"][!Redraw]
UpdateDivider=-1
DynamicVariables=1
InputNumber=1
[Ms.Mt.Op.02---]
Measure=Plugin
Plugin=InputText
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
X=(8*#sc#)
Y=((70+32*2)*#sc#)
W=((256-8*2)*#sc#)
H=(20*#Sc#)
FocusDismiss=1
DefaultValue=[#[#Mt.Op.02----]]
Command1=[!WriteKeyValue "Variables" "[#Mt.Op.02----]" "(Clamp($UserInput$,[#Mt.Op.02-------]))" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter "CMt.Op.02--"][!Redraw]
UpdateDivider=-1
DynamicVariables=1
InputNumber=1
[Ms.Mt.Op.03---]
Measure=Plugin
Plugin=InputText
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
X=(8*#sc#)
Y=((70+32*3)*#sc#)
W=((256-8*2)*#sc#)
H=(20*#Sc#)
FocusDismiss=1
DefaultValue=[#[#Mt.Op.03----]]
Command1=[!WriteKeyValue "Variables" "[#Mt.Op.03----]" "(Clamp($UserInput$,[#Mt.Op.03-------]))" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter "CMt.Op.03--"][!Redraw]
UpdateDivider=-1
DynamicVariables=1
InputNumber=1
[Ms.Mt.Op.04---]
Measure=Plugin
Plugin=InputText
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
X=(8*#sc#)
Y=((70+32*4)*#sc#)
W=((256-8*2)*#sc#)
H=(20*#Sc#)
FocusDismiss=1
DefaultValue=[#[#Mt.Op.04----]]
Command1=[!WriteKeyValue "Variables" "[#Mt.Op.04----]" "(Clamp($UserInput$,[#Mt.Op.04-------]))" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter "CMt.Op.04--"][!Redraw]
UpdateDivider=-1
DynamicVariables=1
InputNumber=1
[Ms.Mt.Op.05---]
Measure=Plugin
Plugin=InputText
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
X=(8*#sc#)
Y=((70+32*5)*#sc#)
W=((256-8*2)*#sc#)
H=(20*#Sc#)
FocusDismiss=1
DefaultValue=[#[#Mt.Op.05----]]
Command1=[!WriteKeyValue "Variables" "[#Mt.Op.05----]" "(Clamp($UserInput$,[#Mt.Op.05-------]))" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter "CMt.Op.05--"][!Redraw]
UpdateDivider=-1
DynamicVariables=1
InputNumber=1
[Ms.Mt.Op.06---]
Measure=Plugin
Plugin=InputText
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
X=(8*#sc#)
Y=((70+32*6)*#sc#)
W=((256-8*2)*#sc#)
H=(20*#Sc#)
FocusDismiss=1
DefaultValue=[#[#Mt.Op.06----]]
Command1=[!WriteKeyValue "Variables" "[#Mt.Op.06----]" "(Clamp($UserInput$,[#Mt.Op.06-------]))" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter "CMt.Op.06--"][!Redraw]
UpdateDivider=-1
DynamicVariables=1
InputNumber=1
[Ms.Mt.Op.07---]
Measure=Plugin
Plugin=InputText
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
X=(8*#sc#)
Y=((70+32*7)*#sc#)
W=((256-8*2)*#sc#)
H=(20*#Sc#)
FocusDismiss=1
DefaultValue=[#[#Mt.Op.07----]]
Command1=[!WriteKeyValue "Variables" "[#Mt.Op.07----]" "(Clamp($UserInput$,[#Mt.Op.07-------]))" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter "CMt.Op.07--"][!Redraw]
UpdateDivider=-1
DynamicVariables=1
InputNumber=1
[Ms.Mt.Op.08---]
Measure=Plugin
Plugin=InputText
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
X=(8*#sc#)
Y=((70+32*8)*#sc#)
W=((256-8*2)*#sc#)
H=(20*#Sc#)
FocusDismiss=1
DefaultValue=[#[#Mt.Op.08----]]
Command1=[!WriteKeyValue "Variables" "[#Mt.Op.08----]" "(Clamp($UserInput$,[#Mt.Op.08-------]))" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter "CMt.Op.08--"][!Redraw]
UpdateDivider=-1
DynamicVariables=1
InputNumber=1
[Ms.Mt.Op.09---]
Measure=Plugin
Plugin=InputText
SolidColor=#Cl.Gn.Bg.Ti#
FontFace=#Ft.Fc.Gn#
FontColor=#Cl.Gn.Fg.Gn#
FontSize=(10*#sc#*#Ft.Sc.Gn#/(#Sy.Dpi#/96))
AntiAlias=1
X=(8*#sc#)
Y=((70+32*9)*#sc#)
W=((256-8*2)*#sc#)
H=(20*#Sc#)
FocusDismiss=1
DefaultValue=[#[#Mt.Op.09----]]
Command1=[!WriteKeyValue "Variables" "[#Mt.Op.09----]" "(Clamp($UserInput$,[#Mt.Op.09-------]))" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
OnDismissAction=[!HideMeter "CMt.Op.09--"][!Redraw]
UpdateDivider=-1
DynamicVariables=1
InputNumber=1

[Ms.FlCs]
Measure=Plugin
Plugin=FileChoose
UseNewStyle=0
GetTarget=1
AllowNonstorageFolder=1
CopyLink=1
LinkCache=#@#Cache\Link
GetIcon=0
IconCache=#@#Cache\Icon
IconSize=3
ReturnValue=Path
FileInitialDirectory=#@#Cache\File
ImageInitialDirectory=#@#Cache\Icon
Command1=[!WriteKeyValue Variables "[#Mt.Op.01----]" "$Path$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
Command2=[!WriteKeyValue Variables "[#Mt.Op.02----]" "$Path$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
Command3=[!WriteKeyValue Variables "[#Mt.Op.03----]" "$Path$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
Command4=[!WriteKeyValue Variables "[#Mt.Op.04----]" "$Path$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
Command5=[!WriteKeyValue Variables "[#Mt.Op.05----]" "$Path$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
Command6=[!WriteKeyValue Variables "[#Mt.Op.06----]" "$Path$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
Command7=[!WriteKeyValue Variables "[#Mt.Op.07----]" "$Path$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
Command8=[!WriteKeyValue Variables "[#Mt.Op.08----]" "$Path$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
Command9=[!WriteKeyValue Variables "[#Mt.Op.09----]" "$Path$" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]

[St.Cstm.Ic.Bn.01]
Y=((64+8)*#Sc#)
W=(16*#Sc#)
H=(16*#Sc#)
MouseActionCursor=1
MouseActionCursorName=HAND
[St.Cstm.Hv.Bn.01]
Y=((64+7)*#Sc#)
Shape=Rectangle 0,0,(18*#Sc#),(18*#Sc#),(#Cr#/4),(#Cr#/4) | #da.sk# | #Fl.Cl.Hv#
DynamicVariables=1
Hidden=1
[St.Cstm.Cs.Bn.01]
Y=((64+7)*#Sc#)
Shape=Rectangle 0,0,(18*#Sc#),(18*#Sc#),(#Cr#/4),(#Cr#/4) | #da.sk# | Fill Color #Cl.Ac.Bg.Gn#
DynamicVariables=1
[St.Cstm.Ci.Bn.01]
Y=((64+8)*#Sc#)
W=(16*#Sc#)
H=(16*#Sc#)
ImageTint=#Cl.Ac.Fg.Gn#
[Mt.Op.00.Cstm.01.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.Bn.01|St.Bt.Sg
ImageName=#@#Image\MonoIcons\16\Combination_Left
X=((256-4-20*4)*#Sc#)
ToolTipText=#Tm.Left#
LeftMouseUpAction=[!WriteKeyValue "Variables" "Bnd.L" "(1-#Bnd.L#)" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
[Mt.Op.00.Cstm.02.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.Bn.01|St.Bt.Sg
ImageName=#@#Image\MonoIcons\16\Combination_Right
X=(20*#Sc#)r
ToolTipText=#Tm.Right#
LeftMouseUpAction=[!WriteKeyValue "Variables" "Bnd.R" "(1-#Bnd.R#)" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
[Mt.Op.00.Cstm.03.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.Bn.01|St.Bt.Sg
ImageName=#@#Image\MonoIcons\16\Combination_Top
X=(20*#Sc#)r
ToolTipText=#Tm.Top#
LeftMouseUpAction=[!WriteKeyValue "Variables" "Bnd.T" "(1-#Bnd.T#)" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
[Mt.Op.00.Cstm.04.01]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ic.Bn.01|St.Bt.Sg
ImageName=#@#Image\MonoIcons\16\Combination_Bottom
X=(20*#Sc#)r
ToolTipText=#Tm.Bottom#
LeftMouseUpAction=[!WriteKeyValue "Variables" "Bnd.B" "(1-#Bnd.B#)" "#Pk@#Config\SkinSettings\#Sk.Nm#.inc"][!Refresh]
[HMt.Op.00.Cstm.01.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Hv.Bn.01
X=((256-5-20*4)*#Sc#)
[HMt.Op.00.Cstm.02.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Hv.Bn.01
X=(20*#Sc#)r
[HMt.Op.00.Cstm.03.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Hv.Bn.01
X=(20*#Sc#)r
[HMt.Op.00.Cstm.04.01]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Hv.Bn.01
X=(20*#Sc#)r
[Mt.Op.00.Cstm.01.02]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Cs.Bn.01
X=((256-5-20*4)*#Sc#)
Hidden=(1-#Bnd.L#)
[Mt.Op.00.Cstm.02.02]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Cs.Bn.01
X=(20*#Sc#)r
Hidden=(1-#Bnd.R#)
[Mt.Op.00.Cstm.03.02]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Cs.Bn.01
X=(20*#Sc#)r
Hidden=(1-#Bnd.T#)
[Mt.Op.00.Cstm.04.02]
Meter=Shape
MeterStyle=St.ZnCt|St.Cstm.Cs.Bn.01
X=(20*#Sc#)r
Hidden=(1-#Bnd.B#)
[Mt.Op.00.Cstm.01.03]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ci.Bn.01
ImageName=#@#Image\MonoIcons\16\Combination_Left
X=((256-4-20*4)*#Sc#)
Hidden=(1-#Bnd.L#)
[Mt.Op.00.Cstm.02.03]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ci.Bn.01
ImageName=#@#Image\MonoIcons\16\Combination_Right
X=(20*#Sc#)r
Hidden=(1-#Bnd.R#)
[Mt.Op.00.Cstm.03.03]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ci.Bn.01
ImageName=#@#Image\MonoIcons\16\Combination_Top
X=(20*#Sc#)r
Hidden=(1-#Bnd.T#)
[Mt.Op.00.Cstm.04.03]
Meter=Image
MeterStyle=St.ZnCt|St.Mi|St.Mi.Sl|St.Cstm.Ci.Bn.01
ImageName=#@#Image\MonoIcons\16\Combination_Bottom
X=(20*#Sc#)r
Hidden=(1-#Bnd.B#)