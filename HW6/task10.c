#include <stdio.h>

void print_simple(int n) {
    int first = 1;
    
    while (n % 2 == 0) {
        if (!first) printf(" ");
        printf("2");
        first = 0;
        n /= 2;
    }
    
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            if (!first) printf(" ");
            printf("%d", i);
            first = 0;
            n /= i;
        }
    }
    
    if (n > 1) {
        if (!first) printf(" ");
        printf("%d", n);
    }
    printf("\n");
}

int main() {
    int n;

    if (scanf("%d", &n) == 1 && n > 0) {
        print_simple(n);
    }

    return 0;
}

