#include <stdio.h>

void print_prime_factors(int n, int divisor) {
    if (n < 2) {
        return;
    }
    if (n % divisor == 0) {
        printf("%d ", divisor);
        print_prime_factors(n / divisor, divisor);
    } else {
        print_prime_factors(n, divisor + 1);
    }
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        print_prime_factors(n, 2);
        printf("\n");
    }
    return 0;
}

