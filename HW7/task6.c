#include <stdio.h>

void reverse_string() {
    char ch;
    if (scanf("%c", &ch) == 1) {
        if (ch == '.') {
            return;
        }
        reverse_string();
        printf("%c", ch);
    }
}

int main() {
    reverse_string();
    printf("\n");
    return 0;
}

