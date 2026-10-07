#include <stdio.h>

int main() {
    int n, i, j;

    do {
        printf("Digite uma dimensao impar N (entre 3 e 19): ");
        scanf("%d", &n);
        if (n < 3 || n > 19 || n % 2 == 0) {
            printf("Entrada invalida! O numero deve ser impar e estar entre 3 e 19.\n");
        }
    } while (n < 3 || n > 19 || n % 2 == 0);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == j || i + j == n + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}