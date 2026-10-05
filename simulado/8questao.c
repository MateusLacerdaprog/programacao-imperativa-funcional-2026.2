#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

int main() {
    double R, area, volume;

    printf("Digite o raio R da esfera: ");
    scanf("%lf", &R);

    area = 4 * PI * pow(R, 2);
    volume = (4.0 / 3.0) * PI * pow(R, 3);

    printf("Area da superficie: %.3f\n", area);
    printf("Volume: %.3f\n", volume);

    return 0;
}