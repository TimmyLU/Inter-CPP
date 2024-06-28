#include <stdio.h>
#include <string.h>

// 函數：反轉字串
void reverseString(char *str) {
    int length = strlen(str); // 獲取字串的長度
    char *start = str;        // 指向字串的開頭
    char *end = str + length - 1; // 指向字串的結尾

    // 交換開頭和結尾的字元，逐漸向中間移動
    while (start < end) {
        // 交換指向的字元
        char temp = *start;
        *start = *end;
        *end = temp;

        // 移動指標
        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    reverseString(str);
    printf("Reversed string: %s\n", str);

    return 0;
}