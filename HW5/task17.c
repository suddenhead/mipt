#include <stdio.h>
#include <stdbool.h>

int main() {
    int max_val;

    if (scanf("%d", &max_val) != 1) {
        return 0;
    }

    bool first = true;

    for (int i = 10; i <= max_val; i++) {
        int sum = 0;
        int prod = 1;
        int temp = i;

        while (temp > 0) {
            int digit = temp % 10;
            sum += digit;
            prod *= digit;
            temp /= 10;
        }

        if (sum == prod) {
            if (!first) {
                printf(" ");
            }
            printf("%d", i);
            first = false;
        }
    }

    printf("\n");

    return 0;
}

