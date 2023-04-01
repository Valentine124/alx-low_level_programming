section .data
    format db "Hello, Holberton\n", 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    mov rdi, format
    xor rax, rax
    call printf

    mov rsp, rbp
    pop rbp
    xor rax, rax
    ret
