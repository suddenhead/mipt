#include <stdio.h>

int main() {
    int a, b;

    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    for (int i = a; i <= b; i++) {
        printf("%d ", i * i);
    }

    printf("\n");
    return 0;
}
