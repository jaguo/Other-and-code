;lab_11_2.asm
;编写过程dtoa实现有符号十进制数转换为字符串的功能，负数字符串以"-"引导。入口参数为eax=有符号十进制数和ebx=字符串首地址，出口参数为ebx=字符串首地址
.386
.model stdcall,flat
.stack 4096
public dtoa
public CONST
.data
        CONST   DWORD   10
.code
dtoa    proc    near32
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
end
