#include <stdio.h>

int f(int x) {
    if (x >= -2 && x < 2) {
        return x * x;
    } else if (x >= 2) {
        return x * x + 4 * x + 5;
    } else {
        return 4;
    }
}

int main() {
    int x;
    int max_val;
    int is_first = 1;

    while (scanf("%d", &x) == 1 && x != 0) {
        int fx = f(x);
        if (is_first || fx > max_val) {
            max_val = fx;
            is_first = 0;
        }
    }

    if (!is_first) {
        printf("%d\n", max_val);
    }

    return 0;
}

