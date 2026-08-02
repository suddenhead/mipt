#include <stdio.h>
#include <inttypes.h>

int main(void) {
    int64_t n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0;

    // Проверяем, что успешно считаны все 5 чисел
    if (scanf("%" SCNd64 " %" SCNd64 " %" SCNd64 " %" SCNd64 " %" SCNd64, 
              &n1, &n2, &n3, &n4, &n5) == 5) {
        
        int64_t max = n1;
        max = (n2 > max) ? n2 : max;
        max = (n3 > max) ? n3 : max;
        max = (n4 > max) ? n4 : max;
        max = (n5 > max) ? n5 : max;

        printf("%" PRId64 "\n", max);
    }

    return 0;
}
