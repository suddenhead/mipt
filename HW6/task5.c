#include <stdio.h>

long long sum_to_n(int n) {
    return (long long)n * (n + 1) / 2;
}

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        printf("%lld\n", sum_to_n(n));
    }

    return 0;
}

