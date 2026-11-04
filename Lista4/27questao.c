#include <stdio.h>

int main() {
    int horas;
    float valor_total = 0.0;

    printf("=== Questao 27: Tarifador de Estacionamento Progressivo ===\n\n");
    printf("Digite o numero de horas inteiras de permanencia: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Tempo de permanencia nulo ou invalido. Valor: R$ 0.00\n");
        return 0;
    }

    if (horas <= 2) {
        valor_total = horas * 2.00;
    } else if (horas <= 4) {
        valor_total = (2 * 2.00) + ((horas - 2) * 2.50);
    } else {
        valor_total = (2 * 2.00) + (2 * 2.50) + ((horas - 4) * 3.00);
    }

    printf("\nTempo total de permanencia: %d hora(s)\n", horas);
    printf("Valor total do ticket a pagar: R$ %.2f\n", valor_total);

    return 0;
}
