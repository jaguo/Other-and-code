;lab_exercise_6_3.asm
;C=£¨5/9£©*(F-32)

.386
.model flat,stdcall
.stack 4096
.data
    C1  dword   ?
    F   dword   30

.code
start:
    mov     eax,F
    sub     eax,32
    imul    eax,5
    cwd
    mov     bx,9
    idiv    bx
    mov     C1,eax
    neg     eax

ret
end start