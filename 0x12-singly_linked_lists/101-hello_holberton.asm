; 101-hello_holberton.asm
; A 64-bit program in assembly that prints Hello, Holberton, followed by a new line.

        global  main
        extern  printf

        section .text
main:
        ; Save the current stack pointer in rbp
        push    rbp
        mov     rbp, rsp

        ; Allocate space for the string on the stack
        sub     rsp, 16

        ; Copy the string to the stack
        mov     rax, 0x6e6f7465
        mov     [rsp], rax
        mov     rax, 0x726f626c6f48
        mov     [rsp+8], rax

        ; Call printf with the string as argument
        mov     rdi, rsp
        xor     rax, rax
        call    printf

        ; Restore the original stack pointer and return
        mov     rsp, rbp
        pop     rbp
        ret
