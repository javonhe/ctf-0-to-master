#!/bin/bash

# 编译程序
echo "[*] Compiling the vulnerable program..."
make clean && make

# 关闭ASLR
echo "[*] Disabling ASLR..."
echo 0 | sudo tee /proc/sys/kernel/randomize_va_space

# 运行exploit
echo "[*] Running exploit..."
python3 exploit.py 