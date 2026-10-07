#include <stdio.h>

int main() {
    int num, i;
    int encontrados = 0;

    printf("Digite um numero limite inteiro positivo: ");
    scanf("%d", &num);

    printf("Multiplos de 3 e 5 entre 1 e %d:\n", num);
    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum numero satisfaz a condicao no intervalo informado.");
    }

    printf("\n");
    return 0;
}