mydata segment
       num1 db 0
       sumoften db 0
mydata ends

mycode segment
    start:
    assume cs:mydata,ds:mydata
    mov ax,mydata
    mov ds,ax
    mov ah,num1
    mov cx,10
    sum: add ah,bh
        inc bh
        loop sum
        mov sumoften,ah
        mov ax,4c00h
        int 21h
mycode ends