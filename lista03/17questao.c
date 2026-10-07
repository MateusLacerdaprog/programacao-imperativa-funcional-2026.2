#include <stdio.h>

int main() {
    float nota;
    int total = 0;
    float maior, menor, soma = 0.0;

    printf("Digite as notas dos alunos (de 0.0 a 10.0) ou -1.0 para encerrar:\n");

    while (1) {
        printf("Nota: ");
        scanf("%f", &nota);

        if (nota == -1.0f) {
            break;
        }

        if (nota < 0.0 || nota > 10.0) {
            printf("Nota fora do intervalo permitido (0.0 a 10.0)!\n");
            continue;
        }

        if (total == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        }

        soma += nota;
        total++;
    }

    printf("\n--- Estatisticas da Turma ---\n");
    if (total > 0) {
        printf("a) Total de alunos avaliados: %d\n", total);
        printf("b) Maior nota: %.2f\n", maior);
        printf("c) Menor nota: %.2f\n", menor);
        printf("d) Media geral da turma: %.2f\n", soma / total);
    } else {
        printf("Nenhuma nota valida foi registrada.\n");
    }

    return 0;
}