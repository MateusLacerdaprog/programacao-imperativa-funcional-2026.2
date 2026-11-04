#include <stdio.h>

int main() {
    float valor_total, valor_final, parcela, comissao;
    int opcao;

    printf("=== Questao 17: Calculo de Pagamento e Comissao de Vendas ===\n\n");
    printf("Digite o valor total da compra (R$): ");
    scanf("%f", &valor_total);

    if (valor_total <= 0.0) {
        printf("Erro: Valor da compra deve ser positivo!\n");
        return 1;
    }

    printf("\nOpcoes de pagamento:\n");
    printf("  1 - A Vista (com 10%% de desconto)\n");
    printf("  2 - Parcelado em 3x sem juros\n");
    printf("Escolha a opcao desejada: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        valor_final = valor_total * 0.90;
        comissao = valor_final * 0.05;
        printf("\nForma de Pagamento: A Vista com 10%% de desconto\n");
        printf("Valor final a pagar: R$ %.2f\n", valor_final);
        printf("Comissao do vendedor (5%% sobre o valor com desconto): R$ %.2f\n", comissao);
    } else if (opcao == 2) {
        parcela = valor_total / 3.0;
        comissao = valor_total * 0.05;
        printf("\nForma de Pagamento: Parcelado em 3x sem juros\n");
        printf("Valor total da compra: R$ %.2f\n", valor_total);
        printf("Valor de cada parcela (3x): R$ %.2f\n", parcela);
        printf("Comissao do vendedor (5%% sobre o valor total): R$ %.2f\n", comissao);
    } else {
        printf("\nErro: Opcao de pagamento invalida!\n");
    }

    return 0;
}
