#include <stdio.h>

int main() {
    float nota;
    int faltas;
    char conceito;

    printf("=== Questao 14: Conceito por Nota e Faltas ===\n\n");
    printf("Digite a nota final (0.0 a 10.0): ");
    scanf("%f", &nota);
    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    if (nota < 0.0 || nota > 10.0 || faltas < 0) {
        printf("Erro: Nota ou numero de faltas invalido!\n");
        return 1;
    }

    if (nota >= 9.0) {
        conceito = (faltas <= 20) ? 'A' : 'B';
    } else if (nota >= 7.5) {
        conceito = (faltas <= 20) ? 'B' : 'C';
    } else if (nota >= 5.0) {
        conceito = (faltas <= 20) ? 'C' : 'D';
    } else if (nota >= 4.0) {
        conceito = (faltas <= 20) ? 'D' : 'E';
    } else {
        conceito = 'E';
    }

    printf("\nNota: %.1f | Faltas: %d\n", nota, faltas);
    printf("Conceito atribuido: %c\n", conceito);

    return 0;
}
