#include <stdio.h>

int main() {
    float valor_produto, aliquota, preco_final;
    int estado;

    printf("=== Questao 22: Impostos Estaduais sobre Produtos ===\n\n");
    printf("Digite o valor do produto (R$): ");
    scanf("%f", &valor_produto);

    if (valor_produto <= 0.0) {
        printf("Erro: O valor do produto deve ser positivo!\n");
        return 1;
    }

    printf("\nEstados de destino:\n");
    printf("  1 - MG (Minas Gerais - 7%%)\n");
    printf("  2 - SP (Sao Paulo - 12%%)\n");
    printf("  3 - RJ (Rio de Janeiro - 15%%)\n");
    printf("  4 - MS (Mato Grosso do Sul - 8%%)\n");
    printf("Digite o codigo do estado de destino (1-4): ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            aliquota = 0.07;
            preco_final = valor_produto * (1.0 + aliquota);
            printf("\nDestino: Minas Gerais (MG)\n");
            printf("Imposto (7%%): R$ %.2f\n", valor_produto * aliquota);
            printf("Preco final com imposto: R$ %.2f\n", preco_final);
            break;
        case 2:
            aliquota = 0.12;
            preco_final = valor_produto * (1.0 + aliquota);
            printf("\nDestino: Sao Paulo (SP)\n");
            printf("Imposto (12%%): R$ %.2f\n", valor_produto * aliquota);
            printf("Preco final com imposto: R$ %.2f\n", preco_final);
            break;
        case 3:
            aliquota = 0.15;
            preco_final = valor_produto * (1.0 + aliquota);
            printf("\nDestino: Rio de Janeiro (RJ)\n");
            printf("Imposto (15%%): R$ %.2f\n", valor_produto * aliquota);
            printf("Preco final com imposto: R$ %.2f\n", preco_final);
            break;
        case 4:
            aliquota = 0.08;
            preco_final = valor_produto * (1.0 + aliquota);
            printf("\nDestino: Mato Grosso do Sul (MS)\n");
            printf("Imposto (8%%): R$ %.2f\n", valor_produto * aliquota);
            printf("Preco final com imposto: R$ %.2f\n", preco_final);
            break;
        default:
            printf("\nErro: Codigo de estado invalido!\n");
            break;
    }

    return 0;
}
