;lab_11_4.asm
;��д����atodʵ���ַ���ת��Ϊ�з���ʮ�������Ĺ��ܣ��ö�ջʵ�ֲ����Ĵ��ݡ�
.386
.model flat,stdcall
.stack 4096
public atod
extern CONST:dword	
.data
    flag    dword   ?

.code
atod    proc
        push    ebp
        mov     ebp,esp
        mov     ebx,[ebp+8]
        cmp     byte ptr[ebx],'-'               ;�ж��ַ�������ĸ�Ƿ�Ϊ'-'
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
end
