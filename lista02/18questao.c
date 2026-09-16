#include <stdio.h>
#define PI 3.141593
int main() {
    float raio,volume;
    printf("=== Geometria da Esfera ===\n\n");
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);


    printf("\nRaio: %.2f\n", raio);
    printf("Area de superficie: %.4f\n", 4.0 * PI * raio * raio);
    printf("Volume: %.4f\n", (4.0 / 3.0) * PI * raio * raio * raio);
    return 0;
}