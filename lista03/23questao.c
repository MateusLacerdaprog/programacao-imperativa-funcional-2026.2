#include <stdio.h>

int main() {
    int l, i, j;

    do {
        printf("Digite a dimensao do lado L (entre 3 e 20): ");
        scanf("%d", &l);
        if (l < 3 || l > 20) {
            printf("Valor invalido! Tente novamente.\n");
        }
    } while (l < 3 || l > 20);

    for (i = 1; i <= l; i++) {
        for (j = 1; j <= l; j++) {
            if (i == 1 || i == l || j == 1 || j == l) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}