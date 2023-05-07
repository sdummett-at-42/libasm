; -----------------------------------------------------------------------------
; A 64-bit function that copies a string from source to destination
; The function has signature:
;
;   char *ft_strcpy(char *dst, const char *src)
;
; The parameters are passed in rdi and rsi, respectively.
; We can copy the string using movsb.
; After the copy is complete, we return the destination string in rax.
; Note that we assume that the destination buffer is large enough to hold
; the source string, as there is no boundary checking performed.
; -----------------------------------------------------------------------------

			global ft_strcpy

			section .text
ft_strcpy:
			cmp		rdi, 0
			je		done
			cmp		rsi, 0
			je		done
			mov		rcx, -1

loop:
			inc		rcx
			mov		al, byte [rsi + rcx]
			mov		byte [rdi + rcx], al
			cmp		al, 0
			jne		loop

done:
		mov		rax, rdi
		ret