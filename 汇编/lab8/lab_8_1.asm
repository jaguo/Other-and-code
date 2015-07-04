;lab_8_1.asm
;编写程序求X和Y的最大公约数，结果存入result单元。其中16位操作数x, y在程序中直接定义

.386
.model flat,stdcall
.stack 4096
.data
    x       word    81
    y       word    24
    result  word    ?

.code
start:
    mov     ax,x
    mov     cx,y
    cmp     ax,cx
    jnl      L1
    xchg    ax,cx
L1:
Loop1:
    cwd
    div     cx
    cmp     dx,0
    je      endLoop
    mov     ax,cx
    mov     cx,dx
    jmp     Loop1
endLoop:
    mov     result,cx

ret
end start