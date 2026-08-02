#include <stdio.h>

int main() {
    int a, b;
    int sum = 0; 

    if (scanf("%d %d", &a, &b) != 2) {
        return 0;
    }

    for (int i = a; i <= b; i++) {
        sum += i * i;
    }

    printf("%d\n", sum);

    return 0;
}
