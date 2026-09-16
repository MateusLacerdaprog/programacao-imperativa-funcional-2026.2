#include <stdio.h>

int main() {
    float kmh, ms;

    // Leitura da velocidade em km/h
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);

    // Conversão para m/s utilizando a constante física (3.6)
    ms = kmh / 3.6f;

    // Exibição do resultado formatado
    printf("%.2f km/h equivale a %.2f m/s\n", kmh, ms);

    return 0;
}