#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    long long f1 = 1;
    long long f2 = 1;

    for (int i = 1; i <= n; i++) {
        printf("%lld", f1);
        
        if (i < n) {
            printf(" ");
        }

        long long next = f1 + f2;
        f1 = f2;
        f2 = next;
    }

    printf("\n");

    return 0;
}

