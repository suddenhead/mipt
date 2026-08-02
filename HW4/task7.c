#include <stdio.h>
#include <inttypes.h>

int main(void) {
    int64_t number = 0;

    if (scanf("%" SCNd64, &number) == 1) {
        int64_t digit1 = number / 100;
        int64_t digit2 = (number / 10) % 10;
        int64_t digit3 = number % 10;

        int64_t max = (digit1 > digit2) ? digit1 : digit2;
        max = (digit3 > max) ? digit3 : max;

        printf("%" PRId64 "\n", max);
    }

    return 0;
}
