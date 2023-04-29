section .data
	msg: db "Hello, Holberton", 10, 0
	fmt: db "%s"

section .text
	global main
	extern printf

	main:
		push rbp
		mov rbp, rsp

		mov rdi, fmt
		mov rsi, msg
		xor eax, eax
		call printf

		xor eax, eax
		mov rsp, rbp
		pop rbp
		ret
