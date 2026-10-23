.include "./files/utility.s"

/*
    z = x * y usando solo MUL a 8 bit.

    x = xh*256 + xl,  y = yh*256 + yl
    z = (xh*yh << 16) + ((xh*yl + xl*yh) << 8) + xl*yl

    Ogni prodotto parziale e' un MUL a 8 bit (AL * r/m8 -> AX),
    le somme e gli shift sono fatti a 32 bit.
*/

.data
X: .word 0
Y: .word 0

.text
.global _main

_main:
    nop

    call indecimal_word         # legge x (con eco)
    mov %ax, X
    call newline

    call indecimal_word         # legge y (con eco)
    mov %ax, Y
    call newline

    xor %ebx, %ebx              # EBX = accumulatore di z

    // xl * yl
    movb X, %al
    mulb Y                      # AX = xl * yl
    movzwl %ax, %eax
    add %eax, %ebx

    // xh * yl  << 8
    movb X+1, %al
    mulb Y                      # AX = xh * yl
    movzwl %ax, %eax
    shl $8, %eax
    add %eax, %ebx

    // xl * yh  << 8
    movb X, %al
    mulb Y+1                    # AX = xl * yh
    movzwl %ax, %eax
    shl $8, %eax
    add %eax, %ebx

    // xh * yh  << 16
    movb X+1, %al
    mulb Y+1                    # AX = xh * yh
    movzwl %ax, %eax
    shl $16, %eax
    add %eax, %ebx

    mov %ebx, %eax
    call outdecimal_long        # stampa z
    call newline

    xor %eax, %eax
    ret
