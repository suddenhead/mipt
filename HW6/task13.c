#include <stdio.h>

float cosinus(float x) {
    float x_rad = x * 3.1415926535f / 180.0f;
    
    float sum = 1.0f;
    float term = 1.0f;
    int n = 1;
    
    while ((term > 0 ? term : -term) >= 0.001f) {
        term = -term * x_rad * x_rad / ((2 * n - 1) * (2 * n));
        sum += term;
        n++;
    }
    
    return sum;
}

int main() {
    float x;

    if (scanf("%f", &x) == 1) {
        printf("%.3f\n", cosinus(x));
    }

    return 0;
}

