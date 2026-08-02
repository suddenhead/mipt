#include <stdio.h>
#include <stdbool.h>

int main() {
    long long n;

    if (scanf("%lld", &n) != 1) {
        return 0;
    }

    if (n < 0) {
        n = -n;
    }

    bool all_even = true;

    do {
        int digit = n % 10;
        if (digit % 2 != 0) {
            all_even = false;
            break;
        }
        n /= 10;
    } while (n > 0);

    if (all_even) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

