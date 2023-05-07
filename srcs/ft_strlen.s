; -----------------------------------------------------------------------------
; A 64-bit function that calculates the length of a string
; The function has signature:
;
;   size_t ft_strlen(const char *s)
;
; The parameter is passed in rdi.
; We can calculate the length of the string by repeatedly incrementing
; a counter until we encounter a null terminator using cmp byte ptr [rdi], 0.
; The final length is returned in rax.
; -----------------------------------------------------------------------------


			global ft_strlen

			section .text
ft_strlen:
			cmp		rdi, 0
			je		done
			mov		rax, -1			; init rax to 0

loop:	
			inc		rax				; increment this is the actual length of the string
			cmp		byte [rdi + rax], 0	; check if the char is equal to '\0'
			jne		loop			; if not loop again
			ret						; return rax (length of string)
done:
			xor rax, rax
			ret
