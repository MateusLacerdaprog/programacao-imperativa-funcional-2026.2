#include <stdio.h>

int main() {
    int a, b, num, i;
    int soma_primos = 0;

    do {
        printf("Digite o valor de A: ");
        scanf("%d", &a);
        printf("Digite o valor de B: ");
        scanf("%d", &b);

        if (a <= 0 || b <= 0 || a >= b) {
            printf("Valores invalidos! Certifique-se de que A > 0, B > 0 e A < B.\n");
        }
    } while (a <= 0 || b <= 0 || a >= b);

    printf("\nPrimos no intervalo [%d, %d]:\n", a, b);

    for (num = a; num <= b; num++) {
        if (num <= 1) {
            continue;
        }

        int divisores = 0;
        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d ", num);
            soma_primos += num;
        }
    }

    printf("\nSoma total dos primos: %d\n", soma_primos);

    return 0;
}