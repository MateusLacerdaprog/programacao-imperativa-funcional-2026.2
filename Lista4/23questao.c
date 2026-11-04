#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("=== Questao 23: Data Por Extenso (switch-case) ===\n\n");
    printf("Digite a data no formato (Dia Mes Ano), separados por espaco: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (mes < 1 || mes > 12 || dia < 1 || dia > 31) {
        printf("Erro: Data informada invalida!\n");
        return 1;
    }

    printf("\nData formatada: %02d de ", dia);

    switch (mes) {
        case 1:
            printf("janeiro");
            break;
        case 2:
            printf("fevereiro");
            break;
        case 3:
            printf("marco");
            break;
        case 4:
            printf("abril");
            break;
        case 5:
            printf("maio");
            break;
        case 6:
            printf("junho");
            break;
        case 7:
            printf("julho");
            break;
        case 8:
            printf("agosto");
            break;
        case 9:
            printf("setembro");
            break;
        case 10:
            printf("outubro");
            break;
        case 11:
            printf("novembro");
            break;
        case 12:
            printf("dezembro");
            break;
    }

    printf(" de %d\n", ano);

    return 0;
}
