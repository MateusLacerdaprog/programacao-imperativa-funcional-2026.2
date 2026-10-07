#include <stdio.h>

int main() {
    float valor;
    float soma = 0.0;
    int quantidade = 0;

    printf("Digite valores reais positivos (ou um valor negativo para encerrar):\n");

    while (1) {
        printf("Informe um numero: ");
        scanf("%f", &valor);

        if (valor < 0.0) {
            break;
        }

        soma += valor;
        quantidade++;
    }

    printf("\n--- Resultados ---\n");
    printf("Quantidade de valores validos: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);

    if (quantidade > 0) {
        printf("Media aritmetica: %.2f\n", soma / quantidade);
    } else {
        printf("Nenhum valor valido foi digitado.\n");
    }

    return 0;
}