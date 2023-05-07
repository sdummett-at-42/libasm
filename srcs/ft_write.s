; -----------------------------------------------------------------------------
; A 64-bit function that writes a string to standard output
; The function has signature:
;
;   size_t ft_write(int fd, const void *buf, size_t count)
;
; The parameters are passed in rdi, rsi, and rdx, respectively.
; We can use the write system call to output the string to the console.
; If the call is successful, the number of bytes written is returned in rax.
; If there is an error, we set errno and return -1.
; -----------------------------------------------------------------------------

			extern	__errno_location

			global	ft_write

			section	.text
; Args are already well ordered when this function is called
; rdi: fd, rsi: pointer, rdx: str len
ft_write:
			mov		rax, 1
			syscall
			test	rax, rax
			js		error
			mov		rdi, rax
			call	__errno_location
			mov		qword [rax], 0
			mov		rax, rdi
			ret

error:
			neg		rax
			mov		rdi, rax
			call	__errno_location
			mov		qword [rax], rdi
			mov		rax, -1
			ret
