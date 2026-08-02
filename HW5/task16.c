#include <stdio.h>

int main() {
    long long a, b;

    if (scanf("%lld %lld", &a, &b) != 2) {
        return 0;
    }

    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }

    printf("%lld\n", a);

    return 0;
}

