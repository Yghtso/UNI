# https://rzippo.github.io/reti-logiche-esercitazioni/esercitazioni/Assembler/Esercitazioni/Esercitazione%201#esercizio-11

# Scrivere dei programmi che si comportano come gli esercizi 1.1 e 1.2, tranne che per il fatto di convertire da maiuscolo in minuscolo anziché il contrario.

.include "./files/utility.s"

.data

messaggio_in: .fill 80, 1, 0
messaggio_out: .fill 80, 1, 0

.text
.global _main

_main: nop

punto_1:

    lea messaggio_in, %EBX
    mov $80, %CX
    call inline

punto_2:

    lea messaggio_in, %ESI
    lea messaggio_out, %EDI
    mov $0, %ECX

punto_2_loop: #do

    # c = messaggio_in[i]
    mov (%ESI, %ECX, 1), %AL #addr = 0 +%ESI + (%ECX * 1)

punto_2_loop_if:

    # // if(c <= 'a' || c >= 'z') salta al prossimo carattere
    cmp $'A', %AL
    jb punto_2_loop_next
    cmp $'Z', %AL
    jg punto_2_loop_next

    add $32, %AL

punto_2_loop_next:

    # messaggio_out[i] = c
    mov %AL, (%EDI, %ECX, 1)

    INC %ECX

    # while c != \r
    cmp $'\r', %AL
    jne punto_2_loop

punto_2_loop_fine:

punto_3:
    lea messaggio_out, %EBX
    call outline

    xor %eax, %eax
    ret
