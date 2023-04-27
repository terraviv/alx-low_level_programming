global main
    extern    printf
main:
    mov   edi, format ; moving 
    xor   eax, eax  ; the exclusif or
    call  printf; calling printf in main to show our string
    mov 	eax, 0 ; moving 
    ret ; returns control
format: db `Hello, Holberton\n`,0

