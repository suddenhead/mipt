#include <stdio.h>
#include <inttypes.h>

int main(void) {
    int64_t x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    if (scanf("%" SCNd64 " %" SCNd64 " %" SCNd64 " %" SCNd64, &x1, &y1, &x2, &y2) == 4) {
        double k = (double)(y2 - y1) / (x2 - x1);
        double b = y1 - k * x1;

        printf("%.2f %.2f\n", k, b);
    }

    return 0;
}
