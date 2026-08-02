#include <stdio.h>
#include <inttypes.h>

int main(void) {
    int8_t month = 0;

    if (scanf("%" SCNd8, &month) == 1) {
        const char *season = (month == 12 || month == 1 || month == 2) ? "winter" :
                             (month >= 3 && month <= 5)                ? "spring" :
                             (month >= 6 && month <= 8)                ? "summer" : 
                                                                         "autumn";

        printf("%s\n", season);
    }

    return 0;
}
