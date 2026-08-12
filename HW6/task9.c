#include <stdio.h>

long long factorial(int n) {
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        printf("%lld\n", factorial(n));
    }

    return 0;
}

