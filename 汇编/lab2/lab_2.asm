.386
.model flat,stdcall

.stack 4096

.data
number1 dword 100
number2 dword 200
number3 dword 300
sum     dword ?

.code
start:
    mov eax,number1
    add eax,number2
    add eax,number3
    mov sum,eax
ret
end start