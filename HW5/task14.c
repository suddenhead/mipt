#include <stdio.h>

int main() {
    int num;
    int count = 0;

    while (scanf("%d", &num) == 1 && num != 0) {
        count++;
    }

    printf("%d\n", count);

    return 0;
}

