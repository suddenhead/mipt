#include <stdio.h>

int nod(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % temp;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;

    if (scanf("%d %d", &a, &b) == 2) {
        printf("%d\n", nod(a, b));
    }

    return 0;
}

