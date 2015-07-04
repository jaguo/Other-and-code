;编写递归过程Factorial完成n！=n*(n-1)!(n!=0).如果n=0,n!=1.用堆栈传递32位的n，返回值在eax中。由主程序移除堆栈中的参数。编写主程序，由用户输入n，调用Factorial过程计算n！，在屏幕显示计算结果。
;n!=?

.386
.model flat,stdcall
.stack 4096
.data
    n       dword   10
    result  dword   ?

.code
Factorial   proc
    push    ebp
    mov     ebp,esp
    mov     ebx,[ebp+8]
    cmp     ebx,0
    je      L1
    sub     ebx,1
    push    ebx
    call    Factorial
    mul     dword ptr[ebp+8]
    jmp     L2
L1:
    mov     eax,1

L2: pop     ebp
    ret     4

Factorial   endp
start:
    push    n
    call    Factorial
    mov     result,eax

ret
end     start