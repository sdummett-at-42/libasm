; -----------------------------------------------------------------------------
; A 64-bit function that duplicates a string
; The function has signature:
;
;   char *ft_strdup(char *)
;
; Note that the parameter have already been passed in rdi.
; We need to allocate memory for the new string using malloc.
; Then we copy the original string to the new one using ft_strcpy.
; Finally, we return the new string in rax.
; ----------------------------------------------------------------------------
			extern	ft_strcpy
			extern	ft_strlen
			extern	malloc
			extern	__errno_location

			global	ft_strdup

			section	.text
ft_strdup:
			call	ft_strlen
			inc		rax
			push	rdi
			mov		rdi, rax
			call	malloc
			test	rax, rax
			jz		error
			mov		rdi, rax
			pop		rsi
			call	ft_strcpy
			ret

error:
			mov		rdi, __errno_location
			mov		qword [rdi], 12
			xor		rax, rax
			ret

