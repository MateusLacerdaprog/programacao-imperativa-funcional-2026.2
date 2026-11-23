#include <stdio.h>

/* Prototipos das funcoes antes da main() */
float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main(void) {
    float preco, subtotal, total, pago, troco;
    int quantidade, opcaoPagamento;

    printf("=== Caixa Simples de Mercadinho ===\n");
    printf("Digite o preco unitario do produto (R$): ");
    scanf("%f", &preco);

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    if (preco < 0.0f || quantidade <= 0) {
        printf("Erro: preco deve ser nao-negativo e quantidade maior que zero.\n");
        return 1;
    }

    printf("Forma de pagamento (1 - A vista com 10%% de desconto | 2 - Parcelado sem desconto): ");
    scanf("%d", &opcaoPagamento);

    if (opcaoPagamento != 1 && opcaoPagamento != 2) {
        printf("Erro: opcao de pagamento invalida.\n");
        return 1;
    }

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcaoPagamento);

    printf("\nSubtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    printf("Digite o valor pago pelo cliente (R$): ");
    scanf("%f", &pago);

    if (pago < total) {
        printf("Valor pago insuficiente! Faltam R$ %.2f.\n", total - pago);
        return 1;
    }

    troco = calculaTroco(total, pago);
    printf("\n--- Resumo da Compra ---\n");
    printf("Subtotal:      R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);
    printf("Valor pago:    R$ %.2f\n", pago);
    printf("Troco:         R$ %.2f\n", troco);

    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * (float)quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.90f;
    }
    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}
