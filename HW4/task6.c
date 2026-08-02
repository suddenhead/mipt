#include <stdio.h>
#include <inttypes.h>

int main(void) {
    int64_t n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0;

    if (scanf("%" SCNd64 " %" SCNd64 " %" SCNd64 " %" SCNd64 " %" SCNd64, 
              &n1, &n2, &n3, &n4, &n5) == 5) {
        
        int64_t max = n1;
        int64_t min = n1;

        max = (n2 > max) ? n2 : max;
        max = (n3 > max) ? n3 : max;
        max = (n4 > max) ? n4 : max;
        max = (n5 > max) ? n5 : max;

        min = (n2 < min) ? n2 : min;
        min = (n3 < min) ? n3 : min;
        min = (n4 < min) ? n4 : min;
        min = (n5 < min) ? n5 : min;

        printf("%" PRId64 "\n", max + min);
    }

    return 0;
}

