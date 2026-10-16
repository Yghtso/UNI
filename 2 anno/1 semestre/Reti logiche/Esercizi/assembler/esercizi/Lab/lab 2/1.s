# https://rzippo.github.io/reti-logiche-esercitazioni/esercitazioni/Assembler/Esercitazioni/Esercitazione%202#esercizio-21-esercizio-desame-2025-09-09

.include "./files/utility.s"

.data

.text
_main:
    nop
    call innumber_b7
    call newline
    movzwl %bx, %eax
    call outdecimal_long
    call newline

    test $0x3f, %bx
    jnz not_divisible_by_64
    mov $1, %al
    jmp print_divisibility

not_divisible_by_64:
    mov $0, %al

print_divisibility:
    call outdecimal_byte
    call newline
    
    xor %eax, %eax
    ret


#   legge e fa eco di un numero natuale di 4 cifre in base 7
#   ignora i caratteri inattesi
#   lascia in %bx il valore del numero inserito
innumber_b7:
    pushal

    xor %eax, %eax
    mov $4, %ecx

innumber_b7_loop:
    call indigit_b7
    movzbl %bl, %edx
    imull $7, %eax
    add %edx, %eax
    loop innumber_b7_loop

    mov %eax, 16(%esp)
    popal
    ret


#   legge una cifra in base 7 da tastiera
#   ignora i caratteri inattesi
#   lascia in %bl il valore della cifra letta
indigit_b7:
    pushal

indigit_b7_loop:
    call inchar
    cmp $'0', %al 
    jb indigit_b7_loop  
    cmp $'6', %al 
    ja indigit_b7_loop

    call outchar

    sub $'0', %al
    mov %al, %bl

    mov %ebx, 16(%esp)
    popal

    ret
