section .data
    text db "Hello World!",10

section .text   
    global _start

_start :
    mov rax,60
    mov rdi,0
    syscall //syscall for exit from linux kernel
    
    
_printHello:
    mov rax,1
    mov rdi,1
    mov rsi,text
    mov rdx, 14
    syscall
    ret

    /*It is quite funny that even to print a hello world program we need to use kernel which is another program.
    Programming is like a relay race where you take th baton from the previous racer and try hard to finish the race.
    
    My race is against time and I have to get out of Wipro within next 6 months and I have targeted to finish off GeeksForGeeks for that.
    This would not only pave the way for product based comapnies but also GATE. No matter what may be the result but I will give a good fight.
    */
