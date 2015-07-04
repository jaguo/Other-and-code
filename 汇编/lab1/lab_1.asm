;lab_exercise_1.asm
.386
.model flat,stdcall
.stack 4096
.data
Number1 dword 100
Number2 dword 200
Result dword ?
.code
start:
mov eax,Number1
add eax,Number2
mov Result,eax
ret
end start
