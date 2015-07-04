;编写程序将b_string中存放的字符串表示的十进制有符号数据存入EAX寄存器
;将实验五稍加修改便可
;StringToInt
.386
.model flat,stdcall
.stack 4096
.data
    b_string   byte    '-123456',0
    n       dword   ?
    const   dword   10
    flag    dword   ?
.code
SToI    proc
        push    ebp
        mov     ebp,esp
        cmp     byte ptr[ebx],'-'
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
        mul     const
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
        ret
SToI    endp
start:
    mov     ebx,offset  b_string
    call    SToI
    mov     n,eax
ret
end     start
