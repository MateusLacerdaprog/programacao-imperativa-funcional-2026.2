#include <stdio.h>

int main() {
    float salario_atual, percentual, aumento, novo_salario;
    int cargo;

    printf("=== Questao 21: Reajuste Salarial por Categoria ===\n\n");
    printf("Digite o salario atual (R$): ");
    scanf("%f", &salario_atual);

    if (salario_atual <= 0.0) {
        printf("Erro: Salario deve ser maior que zero!\n");
        return 1;
    }

    printf("\nCargos disponiveis:\n");
    printf("  1 - Tecnico\n");
    printf("  2 - Gerente\n");
    printf("  3 - Demais Cargos\n");
    printf("Digite o codigo do cargo (1-3): ");
    scanf("%d", &cargo);

    if (cargo == 1) {
        percentual = (salario_atual <= 3000.0) ? 0.15 : 0.10;
    } else if (cargo == 2) {
        percentual = (salario_atual <= 5000.0) ? 0.10 : 0.05;
    } else if (cargo == 3) {
        percentual = 0.08;
    } else {
        printf("\nErro: Codigo de cargo invalido!\n");
        return 1;
    }

    aumento = salario_atual * percentual;
    novo_salario = salario_atual + aumento;

    printf("\nPercentual aplicado: %.0f%%\n", percentual * 100.0);
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario reajustado: R$ %.2f\n", novo_salario);

    return 0;
}
