
global  ft_write

extern __errno_location

section .text

; Args are already well ordered when this function is called
; rdi: fd, rsi: pointer, rdx: str len
ft_write:
    mov rax, 1
    syscall
	test rax, rax
	js error
	mov rdi, rax
	call __errno_location
	mov qword [rax], 0
	mov rax, rdi
	ret

error:
	neg rax
	mov rdi, rax
	call __errno_location
	mov qword [rax], rdi
	mov rax, -1
    ret
