#include <stdio.h>

int main() {
    float a, b, c;

    printf("=== Questao 19: Existencia e Tipo de Triangulo ===\n\n");
    printf("Digite o lado A: ");
    scanf("%f", &a);
    printf("Digite o lado B: ");
    scanf("%f", &b);
    printf("Digite o lado C: ");
    scanf("%f", &c);

    // Condicao de existencia de um triangulo
    if (a > 0 && b > 0 && c > 0 && (a < b + c) && (b < a + c) && (c < a + b)) {
        printf("\nOs lados formam um triangulo valido!\n");
        printf("Classificacao: ");
        if (a == b && b == c) {
            printf("Equilatero (todos os lados iguais)\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles (dois lados iguais)\n");
        } else {
            printf("Escaleno (todos os lados diferentes)\n");
        }
    } else {
        printf("\nErro: Os lados fornecidos nao formam um triangulo!\n");
    }

    return 0;
}
