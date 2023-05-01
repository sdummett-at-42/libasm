global ft_read

extern __errno_location

section .text

ft_read:
	mov rax, 0
	mov rdi, rdi
	mov rsi, rsi
	mov rdx, rdx
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