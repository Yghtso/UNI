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

    call read_char
    mov %al, k

    mov N, %ecx
    mov $1, %ax

print_line:

    push %ecx
    
    print_char:
        negl %ecx                 # %ecx = -%ecx
        addl N, %ecx              # %ecx = N - %ecx
        incl %ecx                 # %ecx = N - %ecx + 1     

        call outdecimal_word
        add k, %ax
        loop print_line
        call newline
    
    pop %ecx
    loop print_line

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
    call newline
    sub $'0', %al
    ret
