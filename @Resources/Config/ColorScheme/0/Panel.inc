[Variables]
Cl.Dt=(#Cl.Ac.Ar#>128?1:0)
; Determine if Accent Color is a "bright color" (Formula)
; 0 - NO
; 1 - YES
; "DynamicVariables=1" is required
; (#Cl.Dt#)   - Original - If it is a "bright color" -> 1
; (1-#Cl.Dt#) - Reversed - If it is a "bright color" -> 0
Cl.Gn.Fg.Gn=0,0,0
; Foreground / Dividing line / Borders / Font
Cl.Gn.Bg.Gn=255,255,255
; Background
Cl.Gn.Bg.Da=243,243,243
; Background when the window is unselected
Cl.Gn.Bg.Sl=255,255,255
; Solid Background, usually used in pages
Cl.Gn.Bg.Op=255,255,255
; Option
Cl.Gn.Bg.Ti=255,255,255
; Text Inputer Box
Cl.Ac.Fg.Gn=(255*(1-#Cl.Dt#)),(255*(1-#Cl.Dt#)),(255*(1-#Cl.Dt#))
Cl.Ac.Fg.Sl=(#Cl.Ac.R#-64),(#Cl.Ac.G#-64),(#Cl.Ac.B#-64)
; Accent: Foreground
Cl.Ac.Bg.Gn=#Cl.Ac.R#,#Cl.Ac.G#,#Cl.Ac.B#
; Accent: Background
Cl.Wrng.Fg.Gn=192,0,0
; Warning Color: Foreground
Cl.Wrng.Bg.Gn=255,0,0
; Warning Color: Background
Cl.SwBd=1
; Show Button Borders