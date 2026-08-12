#include <stdio.h>

int grow_up(int n) {
    if (n < 10) {
        return 1;
    }
    
    int last_digit = n % 10;
    n /= 10;
    
    while (n > 0) {
        int current_digit = n % 10;
        if (current_digit >= last_digit) {
            return 0;
        }
        last_digit = current_digit;
        n /= 10;
    }
    
    return 1;
}

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        if (grow_up(n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

