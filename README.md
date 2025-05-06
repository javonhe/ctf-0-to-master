# ctf-0-to-master
从零开始一步步深入ctf技术，主要集中在pwn部分

## buffer-overflow-1
演示基础的缓冲区溢出攻击。通过关闭栈保护和地址随机化，利用不安全的`gets`函数溢出128字节缓冲区，覆盖返回地址，注入shellcode，最终获取shell。包含详细的漏洞分析、shellcode编写、攻击脚本（exploit.py）和防护机制说明，适合初学者理解栈溢出原理和利用流程。

## buffer-overflow-2
进阶缓冲区溢出实验，重点演示基于shellcode注入和返回地址覆盖的攻击方式。通过暴力猜测返回地址、使用NOP滑板和shellcode，自动化利用脚本实现攻击。
