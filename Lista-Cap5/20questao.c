#include <stdio.h>

// Prototipo da funcao
int ehPrimo(int n);

int main() {
    int n;
    printf("Digite um numero inteiro: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (ehPrimo(n)) {
        printf("O numero %d e primo.\n", n);
    } else {
        printf("O numero %d nao e primo.\n", n);
    }

    printf("\nNumeros primos de 1 ate 50:\n");
    for (int i = 1; i <= 50; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

// Retorna 1 se n for primo e 0 caso contrario
int ehPrimo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
