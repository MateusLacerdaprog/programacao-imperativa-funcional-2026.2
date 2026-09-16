#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    // Décima parte (usando casting ou literal de ponto flutuante 10.0 para evitar truncamento)
    double decima_parte = num / 10.0;

    printf("a) Quadrado do numero: %d\n", num * num);
    printf("b) Decima parte: %.2f\n", decima_parte);

    return 0;
}