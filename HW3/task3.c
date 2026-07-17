#include <stdio.h>

int main() {
    int a, b, c;

    if (scanf("%d %d %d", &a, &b, &c) == 3) {
        double average = (double)(a + b + c) / 3.0;
        printf("%.2f\n", average);
    }

    return 0;
}
