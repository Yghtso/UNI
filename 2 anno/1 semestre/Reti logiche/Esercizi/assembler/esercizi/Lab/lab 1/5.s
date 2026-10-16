# https://rzippo.github.io/reti-logiche-esercitazioni/esercitazioni/Assembler/Esercitazioni/Esercitazione%201#esercizio-15

# Scrivere un programma che, a partire dalla sezione .data che segue
# conta e stampa il numero di occorrenze di numero in array.

.include "./files/utility.s"

.data
array:      .word 1, 256, 256, 512, 42, 2048, 1024, 1, 0
array_len:  .long 9
numero:     .word 1
counter:    .byte 0

.text
.global _main

_main:
    nop
    movl $array, %edi
    movl array_len, %ecx
    movw numero, %ax
    cld

ciclo:
    REPNE scasw

    cmp $0, %ecx
    je stampa

    incb counter
    jmp ciclo

stampa:
    orb $0x30, counter
    mov counter, %al
    call outchar

    xorl %eax, %eax
    ret
