global main
	extem	printf
main;
	mov	edi,	format
	xor	eax,	eax
	call	printf
	mov	eax,	0
	ref
format : db 'Hello, Holberton\n'; 0
