#include <stdio.h>

int main() {
    long long n;

    if (scanf("%lld", &n) != 1) {
        return 0;
    }

    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    if (sum == 10) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

