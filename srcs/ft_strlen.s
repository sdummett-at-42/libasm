; -----------------------------------------------------------------------------
; A 64-bit function that returns the length of a string
; The function has signature:
;
;   int ft_strlen(char *)
;
; Note that the parameter have already been passed in rdi.
; We just have to return the value in rax.
; -----------------------------------------------------------------------------


			global ft_strlen

			section .text
ft_strlen:
			cmp		rdi, 0
			je		return
			mov		rax, -1			; init rax to 0

loop:	
			inc		rax				; incement this is the actual length of the string
			cmp		byte [rdi + rax], 0	; check if the char is equal to '\0'
			jne		loop			; if not loop again
			ret						; return rax (length of string)
return:
			xor rax, rax
			ret
