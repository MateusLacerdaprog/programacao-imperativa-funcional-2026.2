#include <stdio.h>

int main() {
    int c;
    float f, k;

    printf("=========================================\n");
    printf("  Celsius (C)  | Fahrenheit (F) | Kelvin (K)\n");
    printf("=========================================\n");

    for (c = 0; c <= 100; c += 5) {
        f = (9.0 * c) / 5.0 + 32.0;
        k = c + 273.15;
        printf("   %6.2f      |    %8.2f    |  %8.2f\n", (float)c, f, k);
    }

    printf("=========================================\n");

    return 0;
}