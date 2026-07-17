#include <stdio.h>

int main() {
    int number;

    if (scanf("%d", &number) == 1) {
        int hundreds = number / 100;
        int tens = (number / 10) % 10;
        int units = number % 10; 

        int mult = hundreds * tens * units;

        printf("%d\n", mult);
    }

    return 0;
}
