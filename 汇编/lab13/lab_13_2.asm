;��д�ݹ����GCD���������������Լ�����ö�ջ����32λ����������ֵ��eax���ء��ڹ������Ƴ���ջ�еĲ�������д���������û�����������x��y������GCD������x��y�����Լ��������Ļ��ʾ�����

.386
.model flat,stdcall
.stack 4096
.data
    num1    dword   15
    num2    dword   27
    result  dword   ?

.code
gcd     proc
    push    ebp
    mov     ebp,esp
    mov     eax,[ebp+12]
    cmp     eax,[ebp+8]
    ja      L1
    xchg    eax,[ebp+8]
L1:
    cdq
    div     dword ptr [ebp+8]
    cmp     edx,0
    jne     L2
    mov     eax,[ebp+8]
    jmp     L3
L2:
    mov     eax,[ebp+8]
    mov     [ebp+8],edx
    push    eax
    push    [ebp+8]
    call    gcd    
L3:
    pop     ebp
ret     8
gcd     endp

start:
    push    num1
    push    num2
    call    gcd
    mov     result,eax

ret
end start