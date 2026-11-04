#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("=== Questao 20: Equacao do Segundo Grau (Bhaskara) ===\n\n");
    printf("Digite o coeficiente 'a': ");
    scanf("%f", &a);

    if (a == 0.0) {
        printf("Erro: 'a' deve ser diferente de zero para caracterizar uma equacao do segundo grau!\n");
        return 1;
    }

    printf("Digite o coeficiente 'b': ");
    scanf("%f", &b);
    printf("Digite o coeficiente 'c': ");
    scanf("%f", &c);

    delta = (b * b) - (4.0 * a * c);

    printf("\nDelta calculado: %.4f\n", delta);

    if (delta < 0.0) {
        printf("A equacao nao possui raizes reais.\n");
    } else if (delta == 0.0) {
        x1 = -b / (2.0 * a);
        printf("A equacao possui uma raiz real unica: x = %.4f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("A equacao possui duas raizes reais distintas:\n");
        printf("  x1 = %.4f\n", x1);
        printf("  x2 = %.4f\n", x2);
    }

    return 0;
}
