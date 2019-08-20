mydata segment
    num1 db 10
    num2 db 20
    large db 00
    equal db 00
mydata ends

mycode segment
    start
    assume cs:mycode,ds:mydata
    mov ax,mydata
    mov ds,ax
    mov ah,num1
    mov bh,num2
    