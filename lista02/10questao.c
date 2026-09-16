#include <stdio.h>

int main() {
    float c, f, k;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &c);

    // Fórmulas de conversão
    // Uso do literal 9.0/5.0 para garantir divisão em ponto flutuante, criação de variáveis para organizar o código.
    f = (c * 9.0 / 5.0) + 32.0;
    k = c + 273.15;

    printf("\n--- Conversoes ---");
    printf("\nFahrenheit: %.2f *F", f);
    printf("\nKelvin: %.2f K\n", k);

    return 0;
}