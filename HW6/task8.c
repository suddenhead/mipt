#include <stdio.h>

char to_upper_case(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}

int main() {
    char ch;

    while (scanf("%c", &ch) == 1) {
        if (ch == '.') {
            break;
        }
        printf("%c", to_upper_case(ch));
    }
    printf("\n");

    return 0;
}

