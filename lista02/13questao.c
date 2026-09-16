#include <stdio.h>

int main() {
    float lado, baser, alturar, baset, alturat;

    // a) Área do quadrado (lado * lado)
    printf("--- Quadrado ---\n");
    printf("Digite a medida do lado: ");
    scanf("%f", &lado);
    float area_quadrado = lado * lado;

    // b) Área do retângulo (base * altura)
    printf("\n--- Retangulo ---\n");
    printf("Digite a base: ");
    scanf("%f", &baser);
    printf("Digite a altura: ");
    scanf("%f", &alturar);
    float area_retangulo = baser * alturar;

    // c) Área do triângulo retângulo (base * altura / 2.0)
    printf("\n--- Triangulo Retangulo ---\n");
    printf("Digite a base: ");
    scanf("%f", &baset);
    printf("Digite a altura: ");
    scanf("%f", &alturat);
    float area_triangulo = (baset * alturat) / 2.0;

    // Exibição dos resultados
    printf("\n=== RESULTADOS ===\n");
    printf("a) Area do quadrado: %.2f cm²\n", area_quadrado);
    printf("b) Area do retangulo: %.2f cm²\n", area_retangulo);
    printf("c) Area do triangulo retangulo: %.2f cm²\n", area_triangulo);

    return 0;
}