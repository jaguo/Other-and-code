;lab_exercise_6_2.asm
;2(-x+y-1)

.386
.model flat,stdcall
.stack 4096
.data
    x   dword   8
    y   dword   12
    result  dword   ?

.code
start:
    mov eax,x
    neg eax
    add eax,y
    sub eax,1
    imul eax,2
    mov result,eax

ret
end start