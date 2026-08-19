#include <stdio.h>

void print_binary(int num) {
    if (num >= 2) {
        print_binary(num / 2);
    }
    printf("%d", num % 2);
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        print_binary(n);
        printf("\n");
    }
    return 0;
}

