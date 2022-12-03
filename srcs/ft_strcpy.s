
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