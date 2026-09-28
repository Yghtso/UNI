.include "./files/utility.s"

.GLOBAL _main


.DATA

prompt:
    .ASCII "Inserisci n: "
prompt_end:

msg_result:
    .ASCII "n! = "
msg_result_end:

msg_overflow:
    .ASCII "Overflow: il risultato non entra in 32 bit."
msg_overflow_end:


.TEXT

_main:
    # Stampa il prompt
    MOVL $prompt, %EBX
    MOVW $(prompt_end-prompt), %CX
    CALL outmess

    # Legge n -> EAX
    CALL indecimal_long
    CALL newline

    # ECX = n
    MOVL %EAX, %ECX

    # risultato iniziale = 1
    MOVL $1, %EAX

    # 0! = 1
    CMPL $0, %ECX
    JE stampa_risultato


ciclo_fattoriale:

    # EDX:EAX = EAX * ECX
    MULL %ECX

    # MULL mette CF=OF=1 se la parte alta EDX
    # non è zero, cioè il risultato non entra in 32 bit
    JC overflow

    # ECX--
    # se ECX != 0 torna al ciclo
    LOOP ciclo_fattoriale


stampa_risultato:

    # Salva EAX perché dobbiamo stampare prima il messaggio
    PUSH %EAX

    MOVL $msg_result, %EBX
    MOVW $(msg_result_end-msg_result), %CX
    CALL outmess

    POP %EAX

    # stampa EAX come unsigned decimale
    CALL outdecimal_long
    CALL newline

    JMP fine


overflow:

    MOVL $msg_overflow, %EBX
    MOVW $(msg_overflow_end-msg_overflow), %CX
    CALL outmess
    CALL newline


fine:

    XORL %EAX, %EAX
    RET
