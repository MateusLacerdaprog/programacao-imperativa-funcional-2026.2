#include <stdio.h>

int main() {
    int numero;

    printf("=== Questao 10: Analise de Paridade e Sinal de Inteiros ===\n\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // a) Paridade
    if (numero % 2 == 0) {
        printf("Paridade: PAR\n");
    } else {
        printf("Paridade: IMPAR\n");
    }

    // b) Sinal
    if (numero > 0) {
        printf("Sinal: POSITIVO\n");
    } else if (numero < 0) {
        printf("Sinal: NEGATIVO\n");
    } else {
        printf("Sinal: ZERO\n");
    }

    return 0;
}
