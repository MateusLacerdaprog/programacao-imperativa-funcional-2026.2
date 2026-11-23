#include <stdio.h>

// Prototipo da funcao
float celsius(float fahr);

int main(void) {
    float fahrenheit, tempCelsius;

    printf("Digite a temperatura em graus Fahrenheit: ");
    if (scanf("%f", &fahrenheit) != 1) return 1;

    tempCelsius = celsius(fahrenheit);

    printf("Temperatura em Celsius: %.2f C\n", tempCelsius);

    return 0;
}

// Funcao que converte Fahrenheit para Celsius
float celsius(float fahr) {
    return (fahr - 32.0f) * 5.0f / 9.0f;
}
