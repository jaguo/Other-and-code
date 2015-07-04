;lab_7_3.asm
;编写程序判断某一年year是否为闰年。如果是al设置为1， 如果不是al设置为0。Year在程序中直接设定

.386
.model flat,stdcall
.stack 4096
.data
    year    word    2000
    const1  word    100
    const2  word    4
    const3  word    400

.code
start:
    mov     ax,year
    cwd
    div     const1
    cmp     dx,0
    je      L1
    mov     ax,year
    cwd
    div     const2
    cmp     dx,0
    jne     L2
    mov     al,1
    jmp     L3

L1:
    mov     ax,year
    cwd
    div     const3
    cmp     dx,0
    jne     L2
    mov     al,1
    jmp     L3
L2:
    mov     al,0

L3:
ret
end start