#include <stdio.h>
#include <inttypes.h>

int main(void) {
    int64_t a = 0;
    int64_t b = 0;

    if (scanf("%" SCNd64 " %" SCNd64, &a, &b) == 2) {
        int64_t min = (a < b) ? a : b;
        int64_t max = (a > b) ? a : b;

        printf("%" PRId64 " %" PRId64 "\n", min, max);
    }

    return 0;
}
