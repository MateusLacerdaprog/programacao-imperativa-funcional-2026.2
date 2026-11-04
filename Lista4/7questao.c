#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    printf("=== Questao 07: Raiz Quadrada ou Quadrado ===\n\n");
    printf("Digite um numero real: ");
    scanf("%f", &numero);

    if (numero >= 0.0) {
        printf("O numero e positivo ou zero.\n");
        printf("Raiz quadrada de %.2f = %.4f\n", numero, sqrt(numero));
    } else {
        printf("O numero e negativo.\n");
        printf("Quadrado de %.2f = %.4f\n", numero, numero * numero);
    }

    return 0;
}
