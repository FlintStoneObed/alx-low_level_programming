section .data
	hello db 'Hello, Holberton', 0xA ; 0xA is the newline character
	format db '%s', 0 ; Format string for printf

section .text
	global main
	extern printf, fflush

main:
	sub rsp, 8 ; Align the stack
	mov rdi, format ; Set rdi to point to the format string
	mov rsi, hello ; Set rsi to point to the hello string
	call printf ; Call the printf function

	add rsp, 8 ; Restor the stack
	call fflush ; Flush the output buffer
	ret ; Return from the program

