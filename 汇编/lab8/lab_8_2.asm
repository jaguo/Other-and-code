;��д������ɼ�����grades��ƽ��ֵaverage������ȡС��average�ĳɼ�����below_average��ʼ���ڴ浥Ԫ,��ȡ����average�ĳɼ�����above_average�С��ɼ������ڳ�����ֱ�Ӷ��塣

.386
.model flat,stdcall
.stack 4096
.data
    grades      dword    90,93,94,95,81,83,76,60
    lengrades   dword    ($-grades)/4
    below_average   dword    8 dup (?)
    above_average   dword    8 dup (?)
    average     dword    ?

.code
start:
    mov     eax,0
    mov     ebx,offset grades
    mov     ecx,lengrades
Loop1:
    add     eax,[ebx]
    add     ebx,4
    Loop    Loop1
    cdq
    div     lengrades
    mov     ebx,offset  grades
    mov     esi,eax
    mov     eax,0
    mov     edx,0
    mov     edi,0
    mov     ecx,lengrades
Loop2:
    cmp     esi,[ebx]
    jl      L1
    mov     eax,[ebx]
    mov     above_average[edi],eax
    add     edi,4
    jmp     L2
L1:
    mov     eax,[ebx]
    mov     below_average[edx],eax
    add     edx,4

L2: add     ebx,4
    Loop    Loop2

ret
end start
