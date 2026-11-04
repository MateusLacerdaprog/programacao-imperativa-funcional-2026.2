#include <stdio.h>

int main() {
    int ano;

    printf("=== Questao 08: Verificacao de Ano Bissexto ===\n\n");
    printf("Digite um ano (inteiro positivo): ");
    scanf("%d", &ano);

    if (ano <= 0) {
        printf("Erro: O ano deve ser um numero inteiro positivo!\n");
        return 1;
    }

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano %d E BISSEXTO.\n", ano);
    } else {
        printf("O ano %d NAO E BISSEXTO.\n", ano);
    }

    return 0;
}
