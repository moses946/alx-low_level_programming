section .data
    msg db "Hello, Holberton", 0Ah  ; message to print with newline
    fmt db "%s"                    ; format string for printf

section .text
    global main
    extern printf

main:
    ; Call printf function to print the message
    push msg      ; push the message to the stack
    push fmt      ; push the format string to the stack
    call printf   ; call printf function to print the message
    add rsp, 16   ; clean up the stack

    ; Return 0 to indicate successful program execution
    mov eax, 0
    ret