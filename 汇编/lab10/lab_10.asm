;1.��д����udtoaʵ���޷���ʮ������ת��Ϊʮ�����ַ����Ĺ��ܡ���ڲ���Ϊeax=�޷���ʮ��������ebx=�ַ����׵�ַ�����ڲ���Ϊebx=�ַ����׵�ַ��
;2.��д����dtoaʵ���з���ʮ������ת��Ϊ�ַ����Ĺ��ܣ������ַ�����"-"��������ڲ���Ϊeax=�з���ʮ��������ebx=�ַ����׵�ַ�����ڲ���Ϊebx=�ַ����׵�ַ��
;3.��д����atoudʵ���ַ���ת��Ϊ�޷���ʮ�������Ĺ��ܣ��ö�ջʵ�ֲ����Ĵ���.
;4.��д����atodʵ���ַ���ת��Ϊ�з���ʮ�������Ĺ��ܣ��ö�ջʵ�ֲ����Ĵ��ݡ�
;5.�����������ù���udtoa��dtoa��atod��atoud��ʹ�õ������ڳ����ж��塣

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
        jg      S                   ;�ж�eax���������Ǹ���
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

start:
    mov     eax,n
    mov     ebx,offset  nstring
    call    dtoa
    push    offset  string
    call    atod
    mov     result,eax

ret
end start
    