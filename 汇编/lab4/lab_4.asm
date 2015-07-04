;lab_exercise_4.asm
.386
.model flat,stdcall
.stack 4096
.data
    cr          equ     13
    var         word    20 dup(?)
    var_word    equ     this word
    var_dword   equ     this dword
    var_byte    byte    1,2,3,4,5
    d_var       dword   12345678h
    array1      byte    1,2,3,4,5,6,7
    array2      byte    8,9,10,11,12,13,14
    array_end   equ     $-1
    array       word    1,2,3,4,5,6,7
                word    8,9,10,11,12,13,14
                word    15,16,17,18,19,20,21
    row         equ     7*2
    array3      byte    1,2,3,4,5,6,7
                byte    8,9,10,11,12,13,14
                byte    15,16,17,18,19,20,21
    numcols     equ     7
    array4      byte    1,2,3,4,5,6,7
    array4_end  equ     $-1
.code
start:
    mov     eax,    -1
    mov     eax,    0ffffffffh
    mov     eax,    offset var
    mov     eax,    sizeof var
    mov     eax,    length var
    mov     eax,    type   var
    mov     eax,    $
    mov     eax,    cr
    mov     al,     var_byte    ;al<-[var_byte]
    mov     ax,     var_word    ;AX<-[var_word]
    mov     eax,    var_dword   ;EAX<-[var_dword]
    mov     ax,     cs:var      ;EAX<-CS:[var]
    mov     al,     cr          ;AL<-CR, AL=0DH
    mov     esi,    offset d_var
    mov     eax,    [esi]
    mov     eax,    esi
    mov     eax,    offset d_var
    mov     eax,    cs:[eax]
    mov     ebx,    offset array1
    mov     esi,    1
    mov     al,     [ebx+esi]   ;
    mov     ebx,    offset array2
    mov     al,     [ebx+esi]
    mov     ebx,    row
    mov     esi,    1
    mov     ax,     array[ebx][esi*2]
    mov     ax,     [array+ebx+esi*2]
    mov     ebx,    numcols
    mov     esi,    1
    mov     al,     array3[ebx][esi]
    mov     esi,    offset array4
    mov     al,     [esi]
    mov     al,     [esi+4]
    mov     esi,    array4_end
    mov     al,     [esi-4]

ret
end start