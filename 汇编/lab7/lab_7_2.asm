;lab_7_2.asm
;编写程序求x，y，z中的最大数和最小数，分别存入内存max和min中,其中32位操作数x, y, z在程序中直接定义

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
    