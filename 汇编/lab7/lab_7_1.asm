;lab_7_1.asm
;��д������|X-Y|�ľ���ֵ���������result��Ԫ������16λ������x, y�ڳ�����ֱ�Ӷ���

.386
.model flat,stdcall
.stack 4096
.data
    x       word    15
    y       word    17
    result  word    ?

.code
start:
    mov     ax,x
    sub     ax,y
    jns     L1
    neg     ax

L1:
    mov     result,ax

ret
end start
    