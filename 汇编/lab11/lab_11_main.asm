;��дԴ����lab_11_main.asm������lab_11.lib�еĹ���udtoa,dtoa,atod,atoud
;����dtoaʵ���з���ʮ������ת��Ϊ�ַ����Ĺ��ܣ������ַ����ԡ�-����������ڲ���Ϊeax=�з���ʮ��������ebx=�ַ����׵�ַ�����ڲ���Ϊebx=�ַ����׵�ַ
;����atodʵ���ַ���ת��Ϊ�з���ʮ�������Ĺ��ܣ��ö�ջʵ�ֲ����Ĵ���

.386
.model flat,stdcall
.stack 4096
;includelib  lab_11.lib
extern  dtoa:near32,atod:near32
.data
    a       dword   -12345
    b       dword   123456
    num     byte    10 dup (?),0
    string1 byte    '-12345'
    string2 byte    '123456'
    result  dword   ?

.code
start:
    mov     eax,a
    mov     ebx,offset  num
    call    dtoa
    mov     eax,b
    mov     ebx,offset  num
    call    dtoa

    push    offset  string1
    call    atod
    mov     result,eax
    push    offset  string2
    call    atod
    mov     result,eax    
ret
end     start
