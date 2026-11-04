#include <stdio.h>

int main() {
    float lab, semestral, final_exam, media;

    printf("=== Questao 09: Media Ponderada e Situacao Academica ===\n\n");

    printf("Digite a nota do Trabalho de Laboratorio (peso 2): ");
    scanf("%f", &lab);
    printf("Digite a nota da Avaliacao Semestral (peso 3): ");
    scanf("%f", &semestral);
    printf("Digite a nota do Exame Final (peso 5): ");
    scanf("%f", &final_exam);

    media = (lab * 2.0 + semestral * 3.0 + final_exam * 5.0) / 10.0;

    printf("\nMedia ponderada final: %.2f\n", media);
    printf("Situacao do aluno: ");

    if (media >= 5.0) {
        printf("Aprovado\n");
    } else if (media >= 3.0) {
        printf("Em Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
