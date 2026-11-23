#include <stdio.h>

// Prototipos das funcoes
long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    int n;
    printf("Digite um inteiro nao negativo: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Numero invalido. Deve ser nao negativo.\n");
        return 1;
    }

    long fatIter = fatorialIterativo(n);
    long fatRec = fatorialRecursivo(n);

    printf("Fatorial iterativo de %d = %ld\n", n, fatIter);
    printf("Fatorial recursivo de %d = %ld\n", n, fatRec);

    if (fatIter == fatRec) {
        printf("Confirmacao: Os resultados coincidem!\n");
    } else {
        printf("Confirmacao: Os resultados DIFEREM!\n");
    }

    return 0;
}

// Fatorial usando laco de repeticao
long fatorialIterativo(int n) {
    long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

// Fatorial usando recursao
long fatorialRecursivo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorialRecursivo(n - 1);
}
