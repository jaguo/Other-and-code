;编写递归过程GCD，求两个数的最大公约数。用堆栈传递32位整数，返回值由eax返回。在过程中移除堆栈中的参数。编写主程序，由用户输入两个数x和y，调用GCD过程求x和y的最大公约数，在屏幕显示结果。

.386
.model flat,stdcall
.stack 4096
.data
    num1    dword   15
    num2    dword   27
    result  dword   ?

.code
gcd     proc
    push    ebp
    mov     ebp,esp
    mov     eax,[ebp+12]
    cmp     eax,[ebp+8]
    ja      L1
    xchg    eax,[ebp+8]
L1:
    cdq
    div     dword ptr [ebp+8]
    cmp     edx,0
    jne     L2
    mov     eax,[ebp+8]
    jmp     L3
L2:
    mov     eax,[ebp+8]
    mov     [ebp+8],edx
    push    eax
    push    [ebp+8]
    call    gcd    
L3:
    pop     ebp
ret     8
gcd     endp

start:
    push    num1
    push    num2
    call    gcd
    mov     result,eax

ret
end start