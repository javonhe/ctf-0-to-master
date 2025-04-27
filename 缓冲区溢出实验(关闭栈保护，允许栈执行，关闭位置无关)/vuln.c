#include <stdio.h>
#include <string.h>

void vulnerable_function() {
    char buffer[128];  // 增加缓冲区大小
    printf("Buffer address: %p\n", buffer);
    gets(buffer);
    printf("Your input: %s\n", buffer);  // 添加输入回显
}

int main() {
    printf("This is a buffer overflow experiment!\n");
    vulnerable_function();
    return 0;
}