;��д�ݹ����Factorial���n��=n*(n-1)!(n!=0).���n=0,n!=1.�ö�ջ����32λ��n������ֵ��eax�С����������Ƴ���ջ�еĲ�������д���������û�����n������Factorial���̼���n��������Ļ��ʾ��������
;n!=?

.386
.model flat,stdcall
.stack 4096
.data
    n       dword   10
    result  dword   ?

.code
Factorial   proc
    push    ebp
    mov     ebp,esp
    mov     ebx,[ebp+8]
    cmp     ebx,0
    je      L1
    sub     ebx,1
    push    ebx
    call    Factorial
    mul     dword ptr[ebp+8]
    jmp     L2
L1:
    mov     eax,1

L2: pop     ebp
    ret     4

Factorial   endp
start:
    push    n
    call    Factorial
    mov     result,eax

ret
end     start