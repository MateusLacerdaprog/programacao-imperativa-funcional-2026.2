#include <stdio.h>
#include <stdlib.h>

int main() {
    int dias;
    double bruto, gratificacao, imposto, liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * 45.00;
    gratificacao = bruto * 0.05;
    imposto = bruto * 0.08;
    liquido = bruto + gratificacao - imposto;

    printf("\n===== HOLERITE =====\n");
    printf("Dias trabalhados:      %d\n", dias);
    printf("Salario bruto:         R$ %.2f\n", bruto);
    printf("Gratificacao (5%%):     R$ %.2f\n", gratificacao);
    printf("Imposto de renda (8%%): R$ %.2f\n", imposto);
    printf("Valor liquido:         R$ %.2f\n", liquido);

    return 0;
}