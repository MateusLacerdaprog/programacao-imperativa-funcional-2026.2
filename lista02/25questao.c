#include <stdio.h>

int main() {
    float salario_base, gratificacao, imposto, salario_liquido;

    // Leitura do salário-base
    printf("Digite o salario-base do funcionario: R$ ");
    scanf("%f", &salario_base);

    /*
     * Justificativa da fórmula matemática:
     * - Gratificação (5%): gratificacao = salario_base * 0.05
     * - Imposto retido (7%): imposto = salario_base * 0.07
     * - Salário Líquido: salario_base + gratificacao - imposto
     * 
     * Simplificando através dos operadores aritméticos:
     * salario_liquido = salario_base + (salario_base * 0.05) - (salario_base * 0.07)
     * salario_liquido = salario_base * (1 + 0.05 - 0.07)
     * salario_liquido = salario_base * 0.98
     */

    gratificacao = salario_base * 0.05f;
    imposto = salario_base * 0.07f;
    salario_liquido = salario_base + gratificacao - imposto;

    // Exibição dos resultados
    printf("Gratificacao (5%%): R$ %.2f\n", gratificacao);
    printf("Imposto Retido (7%%): R$ %.2f\n", imposto);
    printf("Salario Liquido a receber: R$ %.2f\n", salario_liquido);

    return 0;
}