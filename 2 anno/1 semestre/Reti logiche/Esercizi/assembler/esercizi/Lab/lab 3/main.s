# https://rzippo.github.io/reti-logiche-esercitazioni/esercitazioni/Assembler/Esercitazioni/

.include "./files/utility.s"

.data
N: .byte 0
k: .byte 0

.text
.global _main

_main:
    nop

    call read_char
    cmp $0, %al
    je end
    mov %al, N
    call newline

    call read_char
    mov %al, k
    call newline

    movzbl N, %ecx
    mov $1, %ax

    print_line:

        push %ecx
        
        movzbl N, %ebx              # %ebx = N (1 byte zero-extended to 32-bit)
        negl %ecx                   # %ecx = -%ecx
        leal 1(%ebx, %ecx), %ecx    # %ecx = N - %ecx + 1 (combines add and inc!)

            print_char:
            call outdecimal_word
            
            push %ax
            mov $0x20, %al
            call outchar
            pop %ax
            
            add k, %ax
            loop print_char
        
        call newline
        pop %ecx
        loop print_line

    call newline
    jmp _main
end:
    xor %eax, %eax
    ret




/*
    - legge una cifra in base 10 (decimale)
    - ignora i caratteri non tra 0-9 non facendo eco fino a quando c'è carattere accettabile
    - ritorna in %al il valore (non codifica ASCII) della cifra
*/
read_char:
    
    read_char_loop:
        call inchar
        cmp $'0', %al
        jb read_char_loop
        cmp $'9', %al
        ja read_char_loop

    call outchar
    sub $'0', %al
    ret
