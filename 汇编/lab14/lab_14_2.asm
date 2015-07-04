;编写子程序将EAX的内容转换为十六进制字符串

.386
.model flat,stdcall
.stack 4096
.data
    tabel   byte    '0123456789ABCDEF',0
    hstring byte    20 dup (?)
    n       dword   012AB8CFh

.code
toHString   proc
    push    ebp
    mov     ebp,esp
    mov     ebx,[ebp+8]
    mov     eax,[ebp+12]
    mov     ecx,0f0000000h
while3:
    push    eax
    and     eax,ecx
    jnz     while2
    shr     ecx,4
    pop     eax
    jmp     while3

while1:
    cmp     ecx,0
    je      endwhile1
    push    eax
    and     eax,ecx
while2:
    cmp     eax,00000000Fh
    jle     endwhile2
    shr     eax,4
    jmp     while2
endwhile2:
    push    ebx
    lea     ebx,tabel
    xlat    
    pop     ebx
    mov     [ebx],al
    add     ebx,1
    pop     eax
    shr     ecx,4
    jmp     while1
endwhile1:
    pop     ebp
ret     8
toHString   endp

start:
    push    n
    push    offset  hstring
    call    toHString
ret
end start