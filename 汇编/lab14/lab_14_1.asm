;编写子程序将EAX的内容转换为二进制字符串

.386
.model flat,stdcall
.stack 4096
.data
    n       dword   123456
    bstring byte    20 dup (?),0

.code
bstr    proc
    push    ebp
    mov     ebp,esp
    mov     eax,[ebp+12]
    mov     ebx,[ebp+8]
    mov     ecx,10000000h
swhile:
    test    ecx,eax
    jnz     endwhile
    shr     ecx,1
    jmp     swhile
endwhile:
    cmp     ecx,0
    je      endif1
    test    ecx,eax
    jz      L1
    mov     byte ptr [ebx],'1'
    jmp     L2
L1: mov     byte ptr [ebx],'0'
L2: inc     ebx
    shr     ecx,1
    jmp     endwhile
endif1:
    pop     ebp
ret     8
bstr    endp

start:
    push    n
    push    offset  bstring
    call    bstr

ret
end start