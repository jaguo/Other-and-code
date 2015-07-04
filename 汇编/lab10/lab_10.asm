;1.编写过程udtoa实现无符号十进制数转换为十进制字符串的功能。入口参数为eax=无符号十进制数和ebx=字符串首地址，出口参数为ebx=字符串首地址。
;2.编写过程dtoa实现有符号十进制数转换为字符串的功能，负数字符串以"-"引导。入口参数为eax=有符号十进制数和ebx=字符串首地址，出口参数为ebx=字符串首地址。
;3.编写过程atoud实现字符串转换为无符号十进制数的功能，用堆栈实现参数的传递.
;4.编写程序atod实现字符串转换为有符号十进制数的功能，用堆栈实现参数的传递。
;5.设计主程序调用过程udtoa，dtoa，atod，atoud。使用的数据在程序中定义。

.386
.model flat,stdcall
.stack 4096
.data
    nstring     byte    10  dup (?)
    string      byte    '123456',0
    n           dword   -123456
    result      dword   ?
    CONST       dword   10
    flag        dword   ?
.code
dtoa    proc
        push    ebp
        mov     ebp,esp
        cmp     eax,0
        jg      S                   ;判断eax是正数还是负数
        neg     eax
        mov     byte ptr[ebx],'-'
        add     ebx,1
S:
        mov     ecx,0
while1: cmp     eax,0
        jz      endwhile1
        cdq
        div     CONST
        imul    ecx,CONST
        add     ecx,edx
        jmp     while1
endwhile1:
        mov     eax,ecx
while2: cmp     eax,0
        jz      endwhile2
        cdq
        div     CONST
        add     edx,30h
        mov     [ebx],dl
        inc     ebx
        jmp     while2
endwhile2:
        mov     byte ptr [ebx],0
        pop     ebp
        ret
dtoa    endp

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

start:
    mov     eax,n
    mov     ebx,offset  nstring
    call    dtoa
    push    offset  string
    call    atod
    mov     result,eax

ret
end start
    