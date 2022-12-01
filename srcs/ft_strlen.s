; -----------------------------------------------------------------------------
; A 64-bit function that returns the maximum value of its three 64-bit integer
; arguments.  The function has signature:
;
;   int64_t maxofthree(int64_t x, int64_t y, int64_t z)
;
; Note that the parameters have already been passed in rdi, rsi, and rdx.  We
; just have to return the value in rax.
; -----------------------------------------------------------------------------


			global ft_strlen

			section .text
ft_strlen:
			cmp		rdi, 0
			je		return
			mov		rax, -1			; init rax to 0
			dec		rdi				; decrement the pointer so the loop can work properly

loop:	
			inc		rax				; incement this is the actual length of the string
			inc		rdi				; increment the pointer`
			cmp		byte [rdi], 0	; check if the char is equal to '\0'
			jne		loop			; if not loop again
			ret						; return rax (length of string)
return:
			xor rax, rax
			ret
