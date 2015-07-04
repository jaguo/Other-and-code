;StringToInt
.386
.model flat,stdcall
.stack 4096
.data
    table   byte    '123456',0
    n       dword   ?
    const   dword     10
.code
SToI    proc
        push    ebp
        mov     ebp,esp
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
        pop     ebp
        ret
SToI    endp
start:
    mov     ebx,offset  table
    call    SToI
    mov     n,eax
ret
end     start
