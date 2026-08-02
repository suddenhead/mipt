#include <stdio.h>
#include <stdbool.h>

int main() {
    long long n;

    if (scanf("%lld", &n) != 1) {
        return 0;
    }

    if (n <= 1) {
        printf("NO\n");
        return 0;
    }

    bool is_prime = true;

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    if (is_prime) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

