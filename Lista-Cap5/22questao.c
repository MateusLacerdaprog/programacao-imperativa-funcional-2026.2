#include <stdio.h>
#include "areas.h"

/* Prototipos das funcoes auxiliares antes da main() */
void exibirAreaCirculo(double raio);
void exibirAreaRetangulo(double base, double alt);
void exibirAreaTriangulo(double base, double alt);

int main(void) {
    double raio;
    double baseRet, altRet;
    double baseTri, altTri;

    printf("=== Calculo de Areas com areas.h ===\n\n");

    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);

    printf("Digite a base e a altura do retangulo: ");
    scanf("%lf %lf", &baseRet, &altRet);

    printf("Digite a base e a altura do triangulo: ");
    scanf("%lf %lf", &baseTri, &altTri);

    printf("\n--- Resultados ---\n");
    exibirAreaCirculo(raio);
    exibirAreaRetangulo(baseRet, altRet);
    exibirAreaTriangulo(baseTri, altTri);

    return 0;
}

void exibirAreaCirculo(double raio) {
    printf("Area do circulo: %.2f\n", A_CIRC(raio));
}

void exibirAreaRetangulo(double base, double alt) {
    printf("Area do retangulo: %.2f\n", A_RET(base, alt));
}

void exibirAreaTriangulo(double base, double alt) {
    printf("Area do triangulo: %.2f\n", A_TRI(base, alt));
}
