#include <stdio.h>

// Prototipo da funcao
int ehPar(int n);

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    if (scanf("%d", &numero) != 1) return 1;

    if (ehPar(numero)) {
        printf("O numero %d e PAR.\n", numero);
    } else {
        printf("O numero %d e IMPAR.\n", numero);
    }

    return 0;
}

// Funcao que verifica se o numero e par (retorna 1 se par, 0 se impar)
int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
