#include <stdio.h>

int is_happy_number(int n) {
    if (n == 0) {
        return 1;
    }
    
    int sum = 0;
    int product = 1;
    
    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }
    
    return sum == product;
}

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        if (is_happy_number(n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

