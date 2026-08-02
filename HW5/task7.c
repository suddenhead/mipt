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

    bool seen[10] = {false};
    bool has_duplicates = false;

    do {
        int digit = n % 10;

        if (seen[digit]) {
            has_duplicates = true;
            break;
        }

        seen[digit] = true;
        n /= 10;
    } while (n > 0);

    if (has_duplicates) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

