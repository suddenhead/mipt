#include <stdio.h>

void print_range(int a, int b) {
    printf("%d ", a);
    if (a < b) {
        print_range(a + 1, b);
    } else if (a > b) {
        print_range(a - 1, b);
    }
}

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        print_range(a, b);
        printf("\n");
    }
    return 0;
}

