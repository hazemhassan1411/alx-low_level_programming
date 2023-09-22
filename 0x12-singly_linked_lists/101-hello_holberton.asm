section .data
    hello db "Hello, Holberton",10  ; The string to be printed, followed by a newline
    hello_len equ $ - hello         ; Calculate the length of the string

section .text
    global main
    extern printf

main:
    ; Call printf to print the string
    mov rdi, hello               ; Set the format string address (1st argument)
    call printf                 ; Call printf function

    ; Exit the program
    mov rax, 60                 ; syscall: exit
    xor rdi, rdi                ; status: 0
    syscall

