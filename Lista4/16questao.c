#include <stdio.h>

int main() {
    float distancia_km, litros, consumo;

    printf("=== Questao 16: Eficiencia de Consumo de Combustivel ===\n\n");
    printf("Digite a distancia percorrida (em km): ");
    scanf("%f", &distancia_km);
    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);

    if (litros <= 0.0 || distancia_km < 0.0) {
        printf("Erro: Valores invalidos informados!\n");
        return 1;
    }

    consumo = distancia_km / litros;

    printf("\nConsumo medio: %.2f km/l\n", consumo);
    printf("Classificacao: ");

    if (consumo < 8.0) {
        printf("Venda o carro!\n");
    } else if (consumo <= 14.0) {
        printf("Economico!\n");
    } else {
        printf("Super economico!\n");
    }

    return 0;
}
