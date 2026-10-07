#include <stdio.h>

int main() {
    int i;

    // Versão 1: laço for
    printf("--- Versao FOR ---\n");
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // Versão 2: estrutura while
    printf("--- Versao WHILE ---\n");
    i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    // Versão 3: estrutura do-while
    printf("--- Versao DO-WHILE ---\n");
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");

    return 0;
}
