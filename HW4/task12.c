#include <stdio.h>
#include <inttypes.h>

int main(void) {
    int64_t a = 0, b = 0, c = 0;

    if (scanf("%" SCNd64 " %" SCNd64 " %" SCNd64, &a, &b, &c) == 3) {
        const char *result = (a < b + c && b < a + c && c < a + b) ? "YES" : "NO";

        printf("%s\n", result);
    }

    return 0;
}
