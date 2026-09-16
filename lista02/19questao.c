#include <stdio.h>

int main() {
    int dias_trabalhados;
    float salario_bruto, valor_imposto, salario_liquido;

    // Leitura do número de dias trabalhados
    printf("Digite o numero de dias uteis trabalhados: ");
    scanf("%d", &dias_trabalhados);

    // Cálculos (R$ 30,00 por dia e 8% de imposto)
    salario_bruto = dias_trabalhados * 30.0f;
    valor_imposto = salario_bruto * 0.08f;
    salario_liquido = salario_bruto - valor_imposto;

    // Exibição dos resultados
    printf("Salario Bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto IR (8%%): R$ %.2f\n", valor_imposto);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);

    return 0;
}