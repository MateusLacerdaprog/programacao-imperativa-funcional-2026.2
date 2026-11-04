#include <stdio.h>

int main() {
    float nota1, nota2, media;
    char situacao_ternario;
    char situacao_ifelse;

    printf("=== Questao 03: Operador Ternario vs if-else ===\n\n");

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2.0;

    // 1. Usando operador condicional ternario
    situacao_ternario = (media >= 7.0) ? 'A' : 'R';

    // 2. Usando estrutura tradicional if-else
    if (media >= 7.0) {
        situacao_ifelse = 'A';
    } else {
        situacao_ifelse = 'R';
    }

    printf("\nMedia calculada: %.2f\n", media);
    printf("Situacao (Operador Ternario): %c\n", situacao_ternario);
    printf("Situacao (Estrutura if-else): %c\n", situacao_ifelse);

    return 0;
}
