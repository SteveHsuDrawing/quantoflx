[St.Sp_11]
X=(#CURRENTCONFIGWIDTH#/2-16*#sc#*#sz#)
Y=(#CURRENTCONFIGHEIGHT#/2-16*#sc#*#sz#)
Shape=Rectangle 0,(15*#sc#*#sz#),(32*#sc#*#sz#),(2*#sc#*#sz#)
Shape2=Rectangle (15*#sc#*#sz#),0,(2*#sc#*#sz#),(32*#sc#*#sz#)
Shape3=Rectangle 0,0,(15*#sc#*#sz#),(15*#sc#*#sz#)
Shape4=Rectangle (17*#sc#*#sz#),(17*#sc#*#sz#),(15*#sc#*#sz#),(15*#sc#*#sz#)
Shape5=Rectangle 0,0,(32*#sc#*#sz#),(32*#sc#*#sz#),((#Cr#/4)*#sz#),((#Cr#/4)*#sz#) | #Da.sk# | Fill Color #Cl.Ac.Bg.Gn#,[#IcOp.01_0[#Cl.Sh]]
Shape6=Rectangle 0,0,(32*#sc#*#sz#),(32*#sc#*#sz#),((#Cr#/4)*#sz#),((#Cr#/4)*#sz#) | #Da.sk# | Fill Color #Cl.Ac.Bg.Gn#,[#IcOp.02_0[#Cl.Sh]]
Shape7=Rectangle 0,0,(32*#sc#*#sz#),(32*#sc#*#sz#),((#Cr#/4)*#sz#),((#Cr#/4)*#sz#) | #Da.sk# | Fill Color #Cl.Ac.Bg.Gn#,[#IcOp.03_0[#Cl.Sh]]
Shape8=Combine Shape5 | Intersect Shape3
Shape9=Combine Shape6 | Exclude Shape | Exclude Shape2 | Exclude Shape3 | Exclude Shape4
Shape10=Combine Shape7 | Intersect Shape4
DynamicVariables=1

[St.Sp_10]
X=(#CURRENTCONFIGWIDTH#/2-16*#sc#*#sz#)
Y=(#CURRENTCONFIGHEIGHT#/2-16*#sc#*#sz#)
Shape=Rectangle 0,(15*#sc#*#sz#),(32*#sc#*#sz#),(2*#sc#*#sz#)
Shape2=Rectangle (13*#sc#*#sz#),0,(2*#sc#*#sz#),(32*#sc#*#sz#)
Shape3=Rectangle (15*#sc#*#sz#),0,(17*#sc#*#sz#),(15*#sc#*#sz#)
Shape4=Rectangle 0,(17*#sc#*#sz#),(13*#sc#*#sz#),(15*#sc#*#sz#)
Shape5=Path PthWin10 | #Da.sk# | Fill Color #Cl.Ac.Bg.Gn#,[#IcOp.01_0[#Cl.Sh]]
Shape6=Path PthWin10 | #Da.sk# | Fill Color #Cl.Ac.Bg.Gn#,[#IcOp.02_0[#Cl.Sh]]
Shape7=Path PthWin10 | #Da.sk# | Fill Color #Cl.Ac.Bg.Gn#,[#IcOp.03_0[#Cl.Sh]]
Shape8=Combine Shape5 | Intersect Shape3
Shape9=Combine Shape6 | Exclude Shape | Exclude Shape2 | Exclude Shape3 | Exclude Shape4
Shape10=Combine Shape7 | Intersect Shape4
PthWin10=0,(5*#sc#*#sz#) | LineTo (32*#sc#*#sz#),0 | LineTo (32*#sc#*#sz#),(32*#sc#*#sz#) | LineTo 0,(27*#sc#*#sz#) | ClosePath
DynamicVariables=1

[St.Sp_8]
X=(#CURRENTCONFIGWIDTH#/2-16*#sc#*#sz#)
Y=(#CURRENTCONFIGHEIGHT#/2-16*#sc#*#sz#)
Shape=Rectangle 0,(15*#sc#*#sz#),(32*#sc#*#sz#),(2*#sc#*#sz#)
Shape2=Rectangle (13*#sc#*#sz#),0,(2*#sc#*#sz#),(32*#sc#*#sz#)
Shape3=Rectangle (15*#sc#*#sz#),0,(17*#sc#*#sz#),(15*#sc#*#sz#)
Shape4=Rectangle 0,(17*#sc#*#sz#),(13*#sc#*#sz#),(15*#sc#*#sz#)
Shape5=Path PthWin10 | #Da.sk# | Fill Color #Cl.Ac.Bg.Gn#,[#IcOp.01_0[#Cl.Sh]]
Shape6=Path PthWin10 | #Da.sk# | Fill Color #Cl.Ac.Bg.Gn#,[#IcOp.02_0[#Cl.Sh]]
Shape7=Path PthWin10 | #Da.sk# | Fill Color #Cl.Ac.Bg.Gn#,[#IcOp.03_0[#Cl.Sh]]
Shape8=Combine Shape5 | Exclude Shape | Exclude Shape2 | Intersect Shape3
Shape9=Combine Shape6 | Exclude Shape | Exclude Shape2 | Exclude Shape3 | Exclude Shape4
Shape10=Combine Shape7 | Exclude Shape | Exclude Shape2 | Intersect Shape4
PthWin10=0,(5*#sc#*#sz#) | LineTo (32*#sc#*#sz#),0 | LineTo (32*#sc#*#sz#),(32*#sc#*#sz#) | LineTo 0,(27*#sc#*#sz#) | ClosePath
DynamicVariables=1

[St.Sp_7]
X=(#CURRENTCONFIGWIDTH#/2-20.5*#sc#*#sz#)
Y=(#CURRENTCONFIGHEIGHT#/2-19.5*#sc#*#sz#)
Shape=Path PthWin7 | #Da.sk# | Fill Color #Cl.Ac.Bg.Gn#,[#IcOp.01_0[#Cl.Sh]] | Rotate 16 | TransformOrder Offset,Rotate 
Shape2=Path PthWin7 | #Da.sk# | Fill Color #Cl.Ac.Bg.Gn#,[#IcOp.02_0[#Cl.Sh]] | Rotate (180+16) | Offset (-13.5*1.25*#sc#*#sz#),(1.25*1.25*#sc#*#sz#) | TransformOrder Offset,Rotate
Shape3=Path PthWin7 | #Da.sk# | Fill Color #Cl.Ac.Bg.Gn#,[#IcOp.02_0[#Cl.Sh]] | Rotate 16 | Offset 0,(13*1.25*#sc#*#sz#) | TransformOrder Offset,Rotate
Shape4=Path PthWin7 | #Da.sk# | Fill Color #Cl.Ac.Bg.Gn#,[#IcOp.03_0[#Cl.Sh]] | Rotate (180+16) | Offset (-13.5*1.25*#sc#*#sz#),(-11.25*1.25*#sc#*#sz#) | TransformOrder Offset,Rotate
PthWin7=(6*1.25*#sc#*#sz#),(5*1.25*#sc#*#sz#) | CurveTo (17*1.25*#sc#*#sz#),(2*1.25*#sc#*#sz#),(12*1.25*#sc#*#sz#),0 | LineTo (17*1.25*#sc#*#sz#),(12*1.25*#sc#*#sz#) | CurveTo (6*1.25*#sc#*#sz#),(15*1.25*#sc#*#sz#),(12*1.25*#sc#*#sz#),(10*1.25*#sc#*#sz#) | ClosePath 1 
DynamicVariables=1

[St.Sp_0]
Shape=Rectangle 0,0,0,0 | #da.sk#
DynamicVariables=1

[St.CstmIm_0]
X=(#CURRENTCONFIGWIDTH#/2-24*#sc#*#sz#)
Y=(#CURRENTCONFIGHEIGHT#/2-24*#sc#*#sz#)
W=(48*#sc#*#sz#)
H=(48*#sc#*#sz#)
PreserveAspectRatio=1
[St.CstmIm_1]
W=(#CURRENTCONFIGWIDTH#)
H=(#CURRENTCONFIGHEIGHT#)
PreserveAspectRatio=2