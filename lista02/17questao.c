#include <stdio.h>

int main() {
    float raio;
    const float Pi = 3.141593;
    // Exibe o valor da área do círculo e circunferência //

    printf("=== Calculadora de Área e Circunferência do Círculo ===\n\n");
    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio); 

    printf("\n Àrea do círculo: %.2f\n", Pi * raio * raio);
  
  
    printf("\nCircunferência do círculo: %.2f\n", 2 * Pi * raio);
    return 0;
}