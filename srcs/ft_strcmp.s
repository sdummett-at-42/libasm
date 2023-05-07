; -----------------------------------------------------------------------------
; A 64-bit function that compares two strings
; The function has signature:
;
;   int ft_strcmp(const char *s1, const char *s2)
;
; The parameters are passed in rdi and rsi, respectively.
; We can compare the strings byte by byte using cmp.
; If the strings are equal, we return 0.
; If s1 is lexicographically less than s2, we return a negative number.
; If s1 is lexicographically greater than s2, we return a positive number.
; -----------------------------------------------------------------------------

			global	ft_strcmp

			section	.text

ft_strcmp:
			cmp		byte [rdi] , 0
			je		end
			cmp		byte [rsi] , 0
			je		end
			mov		al, byte [rdi]
			mov		bl, byte [rsi]
			cmp		al, bl
			jne		end
			inc		rdi
			inc		rsi
			jmp		ft_strcmp

end:
			mov		al, byte [rdi]
			mov		bl, byte [rsi]
			sub		al, bl
			ret