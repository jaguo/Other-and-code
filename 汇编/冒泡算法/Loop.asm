.386
.model flat,stdcall
.stack 4096
.data
    A   dword 5,4,3,2,1
    n   dword ($-A)/4

.code
start:
    mov ecx,n
    dec ecx
Lp1:
    lea ebx,A
    mov edx,1
Lp2:
    cmp edx,ecx
    jg  L3
    mov eax,[ebx]
    cmp eax,[ebx+4]
    jl  Lp2
    xchg [ebx+4],eax
    xchg [ebx],eax
    add ebx,4
    inc edx
    jmp Lp2
 L3:
    loop Lp1

ret
end start
  