[Variables]
; AIDA CONFIG

Unit=2
; Actual Unit
; 0 - B
; 1 - kB
; 2 - MB
; 3 - GB

OperationMethod=1
; Operation Method of Total Video Memory
; 0 - Total Video Memory is already known
; 1 - Free Video Memory + Used Video Memory
; 2 - Used Video Memory / Percentage of Used Video Memory
; 3 - Free Video Memory / Percentage of Free Video Memory

SMLs.FreeVideoMemory.Show=1
SMLs.FreeVideoMemory.RSKN=Value.SFREEVMEM
SMLs.FreeVideoMemory.Sbtt=
SMLs.FreeVideoMemory.Sufx=MHz

SMLs.UsedVideoMemory.Show=1
SMLs.UsedVideoMemory.RSKN=Value.SUSEDVMEM
SMLs.UsedVideoMemory.Sbtt=
SMLs.UsedVideoMemory.Sufx=

SMLs.TotalVideoMemory.Show=0
SMLs.TotalVideoMemory.RSKN=
SMLs.TotalVideoMemory.Sbtt=
SMLs.TotalVideoMemory.Sufx=

SMLs.FreeVideoMemoryPer.Show=0
SMLs.FreeVideoMemoryPer.RSKN=
SMLs.FreeVideoMemoryPer.Sbtt=
SMLs.FreeVideoMemoryPer.Sufx=

SMLs.UsedVideoMemoryPer.Show=0
SMLs.UsedVideoMemoryPer.RSKN=
SMLs.UsedVideoMemoryPer.Sbtt=
SMLs.UsedVideoMemoryPer.Sufx=