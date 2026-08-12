#include <stdio.h>

int is_sum_even(int n) {
    int sum = 0;
    
    if (n == 0) {
        return 1;
    }
    
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    
    return sum % 2 == 0;
}

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        if (is_sum_even(n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

