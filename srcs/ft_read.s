
; -----------------------------------------------------------------------------
; A 64-bit function that reads from standard input into a buffer
; The function has signature:
;
;   size_t ft_read(int fd, void *buf, size_t count)
;
; The parameters are passed in rdi, rsi, and rdx, respectively.
; We can use the read system call to input data from the console.
; The input is stored in the buffer pointed to by buf.
; The number of bytes read is returned in rax.
; If there is an error, we set errno and return -1.
; -----------------------------------------------------------------------------

			extern	__errno_location

			global ft_read

			section .text

ft_read:
			mov		rax, 0
			mov		rdi, rdi
			mov		rsi, rsi
			mov		rdx, rdx
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