;lab_8_1.asm
;��д������X��Y�����Լ�����������result��Ԫ������16λ������x, y�ڳ�����ֱ�Ӷ���

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