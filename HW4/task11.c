#include <stdio.h>
#include <inttypes.h>

int main(void) {
    int64_t a = 0;
    int64_t b = 0;

    if (scanf("%" SCNd64 " %" SCNd64, &a, &b) == 2) {
        const char *result = (a > b) ? "Above" :
                             (a < b) ? "Less"  : 
                                       "Equal";

        printf("%s\n", result);
    }

    return 0;
}
