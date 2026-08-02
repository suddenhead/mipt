#include <stdio.h>

int main() {
    long long n;

    if (scanf("%lld", &n) != 1) {
        return 0;
    }

    int min_digit = 9;
    int max_digit = 0;

    do {
        int digit = n % 10;
        if (digit < min_digit) {
            min_digit = digit;
        }
        if (digit > max_digit) {
            max_digit = digit;
        }
        n /= 10;
    } while (n > 0);

    printf("%d %d\n", min_digit, max_digit);

    return 0;
}

