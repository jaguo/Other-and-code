;lab_exercise_6_1.asm
;x-2y+4z
.386
.model flat,stdcall
.stack 4096
.data
    x   word   10
    y   word   3
    z   word   11
    result  word   ?

.code
start:
    mov ax,x
    mov bx,y
    imul bx,2
    sub ax,bx
    mov bx,z
    imul bx,4
    add ax,bx
    mov result,ax

ret
end start
    