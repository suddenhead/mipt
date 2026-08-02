#include <stdio.h>

int main() {
    int num;
    int even_count = 0;

    while (scanf("%d", &num) == 1 && num != 0) {
        if (num % 2 == 0) {
            even_count++;
        }
    }

    printf("%d\n", even_count);

    return 0;
}

