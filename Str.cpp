#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = str; // 指向字符串的第一個字符

    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}
