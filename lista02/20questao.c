#include <stdio.h>
#include <math.h>

int main() {
    float lado_a, lado_b, hipotenusa;

    // Leitura dos catetos
    printf("Digite o valor do primeiro cateto (lado a): ");
    scanf("%f", &lado_a);

    printf("Digite o valor do segundo cateto (lado b): ");
    scanf("%f", &lado_b);

    // Cálculo da hipotenusa: c = sqrt(a^2 + b^2)
    hipotenusa = sqrt(pow(lado_a, 2) + pow(lado_b, 2));

    // Exibição do resultado
    printf("O comprimento da hipotenusa eh: %.2f\n", hipotenusa);

    return 0;
}