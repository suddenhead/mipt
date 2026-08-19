#include <stdio.h>

int acounter(void) {
    char ch;
    if (scanf("%c", &ch) != 1 || ch == '.') {
        return 0;
    }
    int count = (ch == 'a') ? 1 : 0;
    return count + acounter();
}

int main() {
    printf("%d\n", acounter());
    return 0;
}

