;lab_7_1.asm
;编写程序求|X-Y|的绝对值，结果存入result单元。其中16位操作数x, y在程序中直接定义

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
    