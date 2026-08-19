#include <stdio.h>

void print_reverse_digits(int n) {
    printf("%d ", n % 10);
    if (n >= 10) {
        print_reverse_digits(n / 10);
    }
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        print_reverse_digits(n);
        printf("\n");
    }
    return 0;
}

