#include <stdio.h>

int main() {
    int i;
    long int soma_quadrados = 0;

    for (i = 1; i <= 100; i++) {
        int quadrado = i * i;
        printf("%d -> %d\n", i, quadrado);
        soma_quadrados += quadrado;
    }

    printf("\nSoma total dos quadrados: %ld\n", soma_quadrados);

    return 0;
}