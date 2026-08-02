#include <stdio.h>

int main() {
    int ch;

    while ((ch = getchar()) != EOF && ch != '.') {
        if (ch >= 'A' && ch <= 'Z') {
            putchar(ch + ('a' - 'A'));
        } else {
            putchar(ch);
        }
    }

    return 0;
}

