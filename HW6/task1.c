#include <stdio.h>
#include <inttypes.h>

int64_t absolute_value(int64_t n) {
    if (n < 0) {
        return -n;
    }
    return n;
}

int main() {
    int64_t number;

    if (scanf("%" SCNd64, &number) != 1) {
        return 0;
    }

    int64_t result = absolute_value(number);

    printf("%" PRId64 "\n", result);

    return 0;
}

