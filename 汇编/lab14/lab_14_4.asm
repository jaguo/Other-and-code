;编写子程序将十六进制字符串表示的数据存入EAX寄存器

.386
.model	flat,stdcall
.stack	4096
.data
    bstring byte    '230ABCF',0
    result  dword   ?
.code
toDW	   proc
    push	ebp
    mov     ebp,esp
    mov     ebx,[ebp+8]
    xor     eax,eax
    xor     ecx,ecx
while1:
    mov     cl,[ebx]
    cmp     cl,0
    je      endwhile1
    cmp     cl,040h
    jl      L1
    sub     ecx,037h
    jmp     L2
L1: sub     ecx,030h
L2:
    shl     eax,4
    add     eax,ecx
    inc     ebx
    jmp     while1    
endwhile1:  
    pop     ebp
ret     4
toDW    endp

start:
    push    offset  bstring
    call    toDW
    mov     result,eax

ret
end start
