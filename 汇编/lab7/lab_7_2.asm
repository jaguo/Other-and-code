;lab_7_2.asm
;��д������x��y��z�е����������С�����ֱ�����ڴ�max��min��,����32λ������x, y, z�ڳ�����ֱ�Ӷ���

.386
.model flat,stdcall
.stack 4096
.data
    x       dword   1
    y       dword   2
    z       dword   3
    max     dword   ?
    min     dword   ?

.code
start:
    mov     eax,x
    cmp     eax,y
    jng      L1
    mov     eax,y
L1:
    cmp     eax,z
    jng     L2
    mov     eax,z
L2:
    mov     min,eax
    mov     eax,x
    cmp     eax,y
    jnl     L3
    mov     eax,y
L3:
    cmp     eax,z
    jnl     L4
    mov     eax,z
L4:
    mov     max,eax

ret
end start
    