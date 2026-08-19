#include <stdio.h>

void print_numbers(int n) {
    if (n < 1) {
        return;
    }
    print_numbers(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        print_numbers(n);
        printf("\n");
    }
    return 0;
}

