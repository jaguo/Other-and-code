.386
.model flat,stdcall
.stack 4096
.data
    n   byte 9
    table   byte '0123456789'
    m   dword FFFFFFFFh

.code
start:
    mov eax,0
    mov al,n
    mov ebx,offset table
    mov al,[ebx+eax]
    mov eax,0
    mov al,31h
    sub al,30h
    xlat
    mov eax,m
    SHL eax,8

ret
end start