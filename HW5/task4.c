#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 0;
    }

    if (n >= 100 && n <= 999) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
