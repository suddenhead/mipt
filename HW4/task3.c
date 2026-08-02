#include <stdio.h>
#include <inttypes.h>

int main(void) {
    int64_t a = 0;
    int64_t b = 0;
    int64_t c = 0;

    if (scanf("%" SCNd64 " %" SCNd64 " %" SCNd64, &a, &b, &c) == 3) {
        int64_t max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

        printf("%" PRId64 "\n", max);
    }

    return 0;
}
