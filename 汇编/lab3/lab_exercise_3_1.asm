.386
.model flat,stdcall
.stack 4096
.data
    bvar    byte    16
    wbar    word    4*3
    dvar    dword   4294967295    ;=232-1=FFFFFFFFH
    qvar    qword   ?
            byte    1,2,3,4,5
    tvar    tbyte   2345
    abc     byte    'a','b','c'
    msg     byte    'Hello',13,10,'$'
    bbuf    byte    12 dup ('month')
    dbuf    dword   25 dup (?)
.code
start:
    ;none
ret
end start
