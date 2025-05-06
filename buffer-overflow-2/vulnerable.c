#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void win() {
    printf("Congratulations! You have successfully exploited the buffer overflow vulnerability!\n");
    system("/bin/sh");
}

void vulnerable_function() {
    char buffer[128];  // 增大buffer大小，为shellcode提供更多空间
    printf("buffer is: %p\n", buffer);
    
    printf("Please enter your input: ");
    fflush(stdout);
    
    gets(buffer);  // 使用不安全的gets函数
    
    printf("Your input was: %s\n", buffer);
}

int main() {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
    
    printf("Welcome to the buffer overflow challenge!\n");
    vulnerable_function();
    
    return 0;
} 