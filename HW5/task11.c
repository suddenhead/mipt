#include <stdio.h>

int main() {
    long long n;

    if (scanf("%lld", &n) != 1) {
        return 0;
    }

    long long reversed = 0;

    do {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    } while (n > 0);

    printf("%lld\n", reversed);

    return 0;
}

