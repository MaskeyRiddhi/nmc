#include <stdio.h>

int main() {
    char ch;
    while ((ch = getchar()) != '\n') {
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
        putchar(ch);
    }
    return 0;
}
