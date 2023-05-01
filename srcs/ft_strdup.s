global ft_strdup
extern ft_strcpy
extern ft_strlen
extern malloc
extern __errno_location

section .text
ft_strdup:
	call ft_strlen
	inc rax
	push rdi
	mov rdi, rax
	call malloc
	test rax, rax
	jz error
	mov rdi, rax
	pop rsi
	call ft_strcpy
	ret

error:
	mov rdi, __errno_location
	mov qword [rdi], 12
	xor rax, rax
	ret

