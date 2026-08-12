#include <stdio.h>

int is_digit(char c) {
    return (c >= '0' && c <= '9');
}

int main() {
    char ch;
    int count = 0;

    while (scanf("%c", &ch) == 1) {
        if (is_digit(ch)) {
            count++;
        }
        if (ch == '.') {
            break;
        }
    }

    printf("%d\n", count);
    return 0;
}

