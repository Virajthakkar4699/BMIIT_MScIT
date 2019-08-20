mdata segment
    fact1 dw 00
    fact2 dw 00 
    
mdata ends

mcode segment
    start:
            assume DS:mdata,CS:mcode
            mov ax,mdata
            mov ds,ax
            mov ax,01
            mov bx,01
            mov cx,09
                fact:mul bx
                    inc bx
                    loop fact
                    mov fact1,dx
                    mov fact2,ax
            mov ax,4c00h
            int 21h
mcode ends  
end start