#include <stdio.h>

int sum(int n) {
    if (n <= 1) {
        return n;
    }
    return n + sum(n - 1);
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printf("%d\n", sum(n));
    }
    return 0;
}

