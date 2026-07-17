#include <stdio.h>

int main() {
    int a, b, c;
    
    if (scanf("%d %d %d", &a, &b, &c) == 3) {
        int sum = a + b + c;
        printf("%d+%d+%d=%d\n", a, b, c, sum);
    }
    
    return 0;
}
