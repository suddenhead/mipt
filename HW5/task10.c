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

    bool strictly_increasing = true;
    int last_digit = 10;

    do {
        int current_digit = n % 10;
        if (current_digit >= last_digit) {
            strictly_increasing = false;
            break;
        }
        last_digit = current_digit;
        n /= 10;
    } while (n > 0);

    if (strictly_increasing) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

