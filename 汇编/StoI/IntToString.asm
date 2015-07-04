;IntToString
.386
.model flat,stdcall
.stack 4096
.data
    String  byte    10 dup (?),0
    n       dword   1234
    const   dword    10

.code
IToS    proc
        push    ebp
        mov     ebp,esp
        mov     eax,[ebp+12]
        mov     ebx,[ebp+8]
        mov     ecx,0
while1: cmp     eax,0
        jz      endwhile1
        cdq
        div     const
        imul    ecx,const
        add     ecx,edx
        jmp     while1
endwhile1:
        mov     eax,ecx
while2: cmp     eax,0
        jz      endwhile2
        cdq
        div     const
        add     edx,30h
        mov     [ebx],dl
        inc     ebx
        jmp     while2
endwhile2:
        mov     byte ptr [ebx],0
        pop     ebp
        ret     8

IToS    endp
start:
    push    n
    push    offset String
    call    IToS
    mov     eax,10

ret
end     start