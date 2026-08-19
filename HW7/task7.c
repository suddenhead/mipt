#include <stdio.h>

void print_numbers_desc(int n) {
    if (n < 1) {
        return;
    }
    printf("%d ", n);
    print_numbers_desc(n - 1);
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        print_numbers_desc(n);
        printf("\n");
    }
    return 0;
}

