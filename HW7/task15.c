#include <stdio.h>

int max_find(int max) {
    int num;
    if (scanf("%d", &num) == 1) {
        if (num == 0) {
            return max;
        }
        if (num > max) {
            max = num;
        }
        return max_find(max);
    }
    return max;
}

int main() {
    int first_num;
    if (scanf("%d", &first_num) == 1 && first_num != 0) {
        printf("%d\n", max_find(first_num));
    }
    return 0;
}

