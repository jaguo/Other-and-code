;编写源代码lab_11_main.asm，调用lab_11.lib中的过程udtoa,dtoa,atod,atoud
;过程dtoa实现有符号十进制数转换为字符串的功能，负数字符串以“-“引导。入口参数为eax=有符号十进制数和ebx=字符串首地址，出口参数为ebx=字符串首地址
;程序atod实现字符串转换为有符号十进制数的功能，用堆栈实现参数的传递

.386
.model flat,stdcall
.stack 4096
;includelib  lab_11.lib
extern  dtoa:near32,atod:near32
.data
    a       dword   -12345
    b       dword   123456
    num     byte    10 dup (?),0
    string1 byte    '-12345'
    string2 byte    '123456'
    result  dword   ?

.code
start:
    mov     eax,a
    mov     ebx,offset  num
    call    dtoa
    mov     eax,b
    mov     ebx,offset  num
    call    dtoa

    push    offset  string1
    call    atod
    mov     result,eax
    push    offset  string2
    call    atod
    mov     result,eax    
ret
end     start
