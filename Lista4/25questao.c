#include <stdio.h>

int main() {
    int valor_total, valor_pago, troco, restante;
    int c100, c50, c20, c10, c5, c2;

    printf("=== Questao 25: Decomposicao de Troco em Cedulas ===\n\n");
    printf("Digite o valor total a pagar (R$): ");
    scanf("%d", &valor_total);
    printf("Digite o valor entregue pelo cliente (R$): ");
    scanf("%d", &valor_pago);

    if (valor_pago < valor_total) {
        printf("\nErro: Valor entregue (R$ %d) e insuficiente para pagar a conta de R$ %d!\n", valor_pago, valor_total);
        return 1;
    }

    troco = valor_pago - valor_total;
    printf("\nTroco total a devolver: R$ %d\n", troco);

    if (troco == 0) {
        printf("Nao ha troco a devolver (valor exato).\n");
        return 0;
    }

    restante = troco;

    c100 = restante / 100;
    restante %= 100;

    c50 = restante / 50;
    restante %= 50;

    c20 = restante / 20;
    restante %= 20;

    c10 = restante / 10;
    restante %= 10;

    c5 = restante / 5;
    restante %= 5;

    c2 = restante / 2;
    restante %= 2;

    printf("Menor quantidade de cedulas:\n");
    if (c100 > 0) printf("  Cedulas de R$ 100: %d\n", c100);
    if (c50 > 0)  printf("  Cedulas de R$ 50:  %d\n", c50);
    if (c20 > 0)  printf("  Cedulas de R$ 20:  %d\n", c20);
    if (c10 > 0)  printf("  Cedulas de R$ 10:  %d\n", c10);
    if (c5 > 0)   printf("  Cedulas de R$ 5:   %d\n", c5);
    if (c2 > 0)   printf("  Cedulas de R$ 2:   %d\n", c2);
    if (restante > 0) printf("  Moeda restante: R$ %d\n", restante);

    return 0;
}
