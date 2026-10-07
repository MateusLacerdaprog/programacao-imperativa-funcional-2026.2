#include <stdio.h>

int main() {
    int opcao;
    float salario, novo_salario, imposto;

    do {
        printf("\n==== SISTEMA DE FOLHA DE PAGAMENTO ====\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Informe o salario atual: R$ ");
                scanf("%f", &salario);
                if (salario <= 2000.0f) {
                    novo_salario = salario * 1.15f;
                } else {
                    novo_salario = salario * 1.10f;
                }
                printf("Novo salario reajustado: R$ %.2f\n", novo_salario);
                break;

            case 2:
                printf("Informe o salario: R$ ");
                scanf("%f", &salario);
                if (salario <= 3000.0f) {
                    imposto = salario * 0.08f;
                } else {
                    imposto = salario * 0.15f;
                }
                printf("Desconto de IR: R$ %.2f\n", imposto);
                printf("Salario liquido: R$ %.2f\n", salario - imposto);
                break;

            case 3:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida! Digite 1, 2 ou 3.\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}