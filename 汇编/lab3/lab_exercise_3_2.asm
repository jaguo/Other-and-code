.386
.model flat,stdcall
.stack 4096
.data
    v_byte      equ     this byte    ;
    v_word      word    3332h,3735h  ;
    v_byte_byte byte    type    v_byte  ;
    v_word_type byte    type    v_word  ;

    array       word    5 dup (20h)
    array_length1   byte    $-array
    array_type  byte    type    array
    array_size  byte    sizeof  array
    n_point     dword   offset  array

.code
start:

ret
end start