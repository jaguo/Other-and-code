;lab_7_3.asm
;��д�����ж�ĳһ��year�Ƿ�Ϊ���ꡣ�����al����Ϊ1�� �������al����Ϊ0��Year�ڳ�����ֱ���趨

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