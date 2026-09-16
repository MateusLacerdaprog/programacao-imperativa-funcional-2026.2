#include <stdio.h>

int main() {
    float horas_normais, horas_extras;
    float salario_bruto, excedente, imposto;

    // Leitura das horas normais e extras trabalhadas no ano
    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horas_normais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horas_extras);

    // Cálculo do salário bruto anual (R$ 10,00/h normal e R$ 15,00/h extra)
    salario_bruto = (horas_normais * 10.0f) + (horas_extras * 15.0f);

    // Valor que excede a faixa de isenção de R$ 12.000,00
    excedente = salario_bruto - 12000.0f;

    /* 
     * Uso do operador ternário (? :) para calcular o imposto:
     * Se o excedente for maior que 0, aplica-se 10% sobre o excedente.
     * Caso contrário, o imposto é 0.0.
     */
    imposto = (excedente > 0.0f) ? (excedente * 0.10f) : 0.0f;

    // Exibição dos resultados
    printf("\n--- Resumo Salarial Anual ---\n");
    printf("Salario Anual Bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto Retido a Pagar: R$ %.2f\n", imposto);

    return 0;
}