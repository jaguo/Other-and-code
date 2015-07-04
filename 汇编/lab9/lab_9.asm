;lab_exercise_9.asm
.386
.model flat, stdcall
.code
start:
      push 100
	call subproc
	pop eax
	ret
subproc proc
ret
subproc endp
end start
