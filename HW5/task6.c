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

    bool has_adjacent_equals = false; 

    while (n >= 10) {
        int current_digit = n % 10;
        int next_digit = (n / 10) % 10;

        if (current_digit == next_digit) {
            has_adjacent_equals = true;
            break;
        }

        n /= 10;
    }

    if (has_adjacent_equals) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

