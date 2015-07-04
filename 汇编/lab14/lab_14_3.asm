;编写子程序将二进制字符串表示的数据存入EAX寄存器

.386
.model	flat,stdcall
.stack	4096
.data
    bstring byte    '1010010',0
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
    shl     eax,1
    and     ecx,0fh
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
