#include <stdio.h>

int main() {
    int n, i;
    int divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: O numero deve ser positivo.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    printf("Quantidade de divisores encontrados: %d\n", divisores);

    if (divisores == 2) {
        printf("Conclusao: O numero %d E PRIMO.\n", n);
    } else {
        printf("Conclusao: O numero %d NAO E PRIMO.\n", n);
    }

    return 0;
}