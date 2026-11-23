#include <stdio.h>

// Prototipo da funcao
int ehBissexto(int ano);

int main() {
    int ano;
    printf("Digite um ano: ");
    if (scanf("%d", &ano) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (ehBissexto(ano)) {
        printf("O ano %d e bissexto.\n", ano);
    } else {
        printf("O ano %d nao e bissexto.\n", ano);
    }

    return 0;
}

// Retorna 1 se o ano for bissexto e 0 caso contrario
int ehBissexto(int ano) {
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        return 1;
    }
    return 0;
}
