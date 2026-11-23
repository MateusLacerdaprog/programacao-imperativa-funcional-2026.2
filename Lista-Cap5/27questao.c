#include <stdio.h>

/* Prototipos das funcoes antes da main() */
float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main(void) {
    int opcao;
    float temp, convertida;

    printf("=== Conversor de Temperaturas ===\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opcao (1 a 4): ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida!\n");
        return 1;
    }

    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    switch (opcao) {
        case 1:
            convertida = celsiusParaFahrenheit(temp);
            printf("%.2f C = %.2f F\n", temp, convertida);
            break;
        case 2:
            convertida = celsiusParaKelvin(temp);
            printf("%.2f C = %.2f K\n", temp, convertida);
            break;
        case 3:
            convertida = fahrenheitParaCelsius(temp);
            printf("%.2f F = %.2f C\n", temp, convertida);
            break;
        case 4:
            convertida = kelvinParaCelsius(temp);
            printf("%.2f K = %.2f C\n", temp, convertida);
            break;
    }

    return 0;
}

float celsiusParaFahrenheit(float c) {
    return (c * 9.0f / 5.0f) + 32.0f;
}

float celsiusParaKelvin(float c) {
    return c + 273.15f;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32.0f) * 5.0f / 9.0f;
}

float kelvinParaCelsius(float k) {
    return k - 273.15f;
}
