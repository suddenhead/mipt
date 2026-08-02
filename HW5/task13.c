#include <stdio.h>

int main() {
    long long n;

    if (scanf("%lld", &n) != 1) {
        return 0;
    }

    int even_count = 0;
    int odd_count = 0;

    do {
        int digit = n % 10;
        if (digit % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
        n /= 10;
    } while (n > 0);

    printf("%d %d\n", even_count, odd_count);

    return 0;
}

