#include <stdio.h>
#include <inttypes.h>

int main(void) {
    int64_t a = 0;
    int64_t b = 0;

    if (scanf("%" SCNd64 " %" SCNd64, &a, &b) == 2) {
        printf("%" PRId64 "\n", a - b);
    }

    return 0;
}
