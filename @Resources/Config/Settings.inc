[Variables]
; ==================== General Settings ====================
Sy.Vr=11
; System Version
Sy.Dpi=144
; System DPI
Sy.Drv=C
; System Drive

Us.Nm=%USERNAME%
; Username
Us.Im=%HOMEDRIVE%\Users\%USERNAME%\AppData\Local\Microsoft\Windows\AccountPicture\UserImage.jpg
; User Image Path

Lg=en-us
; Language
@include=#@#Config\Language\en-us\DefaultValues.inc
@include2=#@#Config\Language\#Lg#\DefaultValues.inc
Un=#Dv.Un#
; Units (0/1) [Default: "#Dv.Un#"]
; 0 - Metric
; 1 - Imperial
Tf=#Dv.Tf#
; Time Format (0/1) [Default: "#Dv.Tf#"]
; 0 - 12-hour
; 1 - 24-hour

Bkup.Pth=%USERPROFILE%\Documents
; Backup Path

; =================== Apperence Settings ===================
Ft.Fc.Gn=#Dv.Ft.Fc.Gn#
; General Font [Default: "#Dv.Ft.Fc.Gn#"]
Ft.Fc.Cl=Segoe UI
; Clock Font [Default: "Segoe UI"]
Ft.Wt.Gn=#Dv.Ft.Wt.Gn#
; Weight of General Font [Default: "#Dv.Ft.Wt.Gn#"]
Ft.Wt.Bd=200
; The weight of the word that is added when in bold [Default: 200]
Ft.Wt.Cl=500
; Weight of Clock Font (0-1000) [Default: 500]
Ft.Sc.Gn=1
; Scaling of General Font [Default: 1]
Ft.Sc.Cl=4
; Scaling of General Font [Default: 4] (NOT WORK)

Cl.Ac.R=0
; R Value of Accent Color (0-255) [Default: 0]
Cl.Ac.G=120
; G Value of Accent Color (0-255) [Default: 120]
Cl.Ac.B=212
; B Value of Accent Color (0-255) [Default: 212]
Cl.Fg.R=255
; R Value of Foreground Color (0-255). Only work in "Colored" Color Scheme [Default: 255]
Cl.Fg.G=255
; G Value of Foreground Color (0-255). Only work in "Colored" Color Scheme [Default: 255]
Cl.Fg.B=255
; B Value of Foreground Color (0-255). Only work in "Colored" Color Scheme [Default: 255]
Cl.Sh=0
; Color Scheme [Default: 0]
; 0 - Light
; 1 - Dim
; 2 - Dark
; 3 - Colored

Le.Dt=1
; Light Distance (px) [Default: 1]
Le.Ag=270
; Light Angle (DEG, 0-360) [Default: 270]
Le.St=0.2
; Light Intensity (Floating-point value, 0-1) [Default: 0.2]
Hl.Op=0
; Intensity of the "Crystal" Effect (Floating-point value, 0-1) [Default: 0]
Hl.Bd=1
; Width of the "Crystal" Effect Borders (Floating-point value, 0-1) [Default: 1]
Hl.Cl=0

Cr=10
; Corner radius (px) [Default: 10]
Sp=2
; Spacing (px) [Default: 2]

Op.Bg=0.8
; Opacity of Background (Floating-point value, 0-1) [Default: 0.8]
Op.Fg=1
; Opacity of Foreground (Floating-point value, 0-1) [Default: 1.0]
Op.Bd=0.1
; Opacity of Borders (Floating-point value, 0-1) [Default: 0.1]

Ppos.X=0
; Panel Position Offset (px) (Horizontal) [Default: 0]
Ppos.Y=0
; Panel Position Offset (px) (Vertical) [Default: 0]

Sc=1
; Scaling (Floating-point value) [Default: 1.0]

Bl.Bg.Md=2
; Background Blur: Mode (0/1/2)
; 0 - OFF
; 1 - Aero
; 2 - Windows 10/11 Blur, relying on "Frosted Glass" Plugin
Bl.Bg.Ty=1
; Background Blur: Windows 10/11 Blur: Type (0/1)
; 0 - Regular Blur
; 1 - Acrylic
Bl.Bg.Bd=1
; Background Blur: Windows 10/11 Blur: Border (0/1)
; 0 - None
; 1 - "All" (Rander a shadow)
Bl.Bg.Cn=1
; Background Blur: Windows 10/11 Blur: Corner (0/1/2)
; 0 - "None", Square
; 1 - "Round", Rounded
; 2 - "RoundSmall", Slightly Rounded
Bl.Gl.Md=0
; Global Panel Blur: Mode (0/1/2) [Default: 0]
Bl.Gl.Ty=0
; Global Panel Blur: Windows 10/11 Blur: Type (0/1) [Default: 0]
Bl.Gl.Bd=0
; Global Panel Blur: Windows 10/11 Blur: Border (0/1) [Default: 0]
Bl.Gl.Cn=0
; Global Panel Blur: Windows 10/11 Blur: OpacityofBorders (0/1/2) [Default: 0]

; ================= Feature Settings ==================
Em=0
; Energy-Saving Mode (0/1) [Default: 0]
EzSl=1
; "Makes it easier for Skins to be selected" (0/1) [Default: 1]
SlBd=1
TcMd=0
