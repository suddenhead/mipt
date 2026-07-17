#include <stdio.h>

int main() {
    int a, b, c;

    if (scanf("%d %d %d", &a, &b, &c) == 3) {
        printf("%d+%d+%d=%d\n", a, b, c, a + b + c);
        printf("%d*%d*%d=%d\n", a, b, c, a * b * c);
    }

    return 0;
}
