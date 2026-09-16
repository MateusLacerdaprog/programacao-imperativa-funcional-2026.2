#include <stdio.h>

int main() {
    float comprimento, largura, preco_metro;
    float perimetro, total_metros, custo_total;

    // Leitura das dimensões do terreno
    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &largura);

    // Leitura do preço unitário do metro de arame
    printf("Digite o preço unitário por metro de arame (em R$): ");
    scanf("%f", &preco_metro);

    // São necessários 3 fios ao longo do perímetro
    total_metros = perimetro * 3;

    // Exibição dos resultados
    printf("\n--- Orçamento de Cercamento ---\n");
    printf("Perímetro do terreno: %.2f metros\n", 2 * (comprimento + largura));
    printf("Total de arame necessário (3 fios): %.2f metros\n", total_metros);
    printf("Custo total do cercamento: R$ %.2f\n", total_metros * preco_metro);

    return 0;
}