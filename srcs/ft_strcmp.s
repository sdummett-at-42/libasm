global ft_strcmp

section .text

ft_strcmp:
	cmp byte [rdi] , 0
	je end
	cmp byte [rsi] , 0
	je end
	mov al, byte [rdi]
	mov bl, byte [rsi]
	cmp al, bl
	jne end
	inc rdi
	inc rsi
	jmp ft_strcmp

end:
	mov al, byte [rdi]
	mov bl, byte [rsi]
	sub al, bl
	ret