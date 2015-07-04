;lab_11_4.asm
;编写程序atod实现字符串转换为有符号十进制数的功能，用堆栈实现参数的传递。
.386
.model flat,stdcall
.stack 4096
public atod
extern CONST:dword	
.data
    flag    dword   ?

.code
atod    proc
        push    ebp
        mov     ebp,esp
        mov     ebx,[ebp+8]
        cmp     byte ptr[ebx],'-'               ;判断字符串首字母是否为'-'
        jne     S1
        inc     ebx
        mov     flag,1
S1:
        mov     edx,0
        mov     eax,0
while1: mov     dl,[ebx]
        cmp     dl,0
        je      endwhile1
        push    edx
        mul     CONST
        pop     edx
        sub     edx,30h
        add     eax,edx
        inc     ebx
        jmp     while1
endwhile1:
        cmp     flag,1
        jne     S2
        neg     eax
S2:
        pop     ebp
        ret     4
atod    endp
end
