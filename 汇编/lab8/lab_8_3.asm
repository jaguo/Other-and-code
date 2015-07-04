;编写程序将EAX的内容转换为无符号十进制字符串，字符串存入内存b_string开始的空间。

;IntToString
.386
.model flat,stdcall
.stack 4096
.data
    b_string  byte  10 dup (?),0
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
    push    offset b_string
    call    IToS
    mov     eax,10

ret
end     start