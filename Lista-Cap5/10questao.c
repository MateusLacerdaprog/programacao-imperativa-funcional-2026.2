#include <stdio.h>

#define PI 3.141593

// Prototipo da funcao
float area(float r);

int main(void) {
    float raio, resultadoArea;

    printf("Digite o raio da esfera: ");
    if (scanf("%f", &raio) != 1) return 1;

    resultadoArea = area(raio);

    printf("A area da esfera com raio %.2f e: %.4f\n", raio, resultadoArea);

    return 0;
}

// Funcao que calcula a area da esfera: 4 * PI * r * r
float area(float r) {
    return 4.0f * PI * r * r;
}
