#include <stdio.h>

long long to_base_p(int n, int p) {
    if (n == 0) {
        return 0;
    }
    
    long long result = 0;
    long long position = 1;
    
    while (n > 0) {
        int remainder = n % p;
        result += remainder * position;
        position *= 10;
        n /= p;
    }
    
    return result;
}

int main() {
    int n, p;

    if (scanf("%d %d", &n, &p) == 2) {
        printf("%lld\n", to_base_p(n, p));
    }

    return 0;
}

