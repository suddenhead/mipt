#include <stdio.h>

unsigned long long grains_on_cell(int n) {
    return 1ULL << (n - 1);
}

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        printf("%llu\n", grains_on_cell(n));
    }

    return 0;
}

