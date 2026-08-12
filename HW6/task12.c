#include <stdio.h>

float sinus(float x) {
    float x_rad = x * 3.1415926535f / 180.0f;
    
    float sum = x_rad;
    float term = x_rad;
    int n = 1;
    
    while ((term > 0 ? term : -term) >= 0.001f) {
        term = -term * x_rad * x_rad / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
    }
    
    return sum;
}

int main() {
    float x;

    if (scanf("%f", &x) == 1) {
        printf("%.3f\n", sinus(x));
    }

    return 0;
}

