section .data
    hello db "Hello, Holberton", 10 ; 10 is the ASCII code for newline character

section .text
    global main

extern printf
global _start

_start:
    call main
    ; Exit the program
    mov rax, 60         ; syscall number for sys_exit
    xor rdi, rdi        ; Exit code 0
    syscall             ; Invoke syscall

main:
    push rbp
    mov rdi, hello      ; Pass the address of the hello string to printf
    call printf
    pop rbp
    ret

