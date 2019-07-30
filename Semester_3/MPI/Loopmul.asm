data segment
    num db 5
    factorial db 00
data ends

code segment
    start:
        ssume ds:data,cd:code 
        mov ax,data
        mov ds,ax
        mov bh,num
        mov ah,1
        mov cx,5
fact: mul bh
        dec bh
        loop fact
        mov factorial,ah
        mov ax,4c00h
        int 21h
     end start
code ends
