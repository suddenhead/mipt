#include <stdio.h>

int main() {
    long long n;

    if (scanf("%lld", &n) != 1) {
        return 0;
    }

    if (n < 0) {
        n = -n;
    }

    int count_nines = 0; 

    do {
        int digit = n % 10;
        
        if (digit == 9) {
            count_nines++;
        }
        
        n /= 10;
    } while (n > 0);

    if (count_nines == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

