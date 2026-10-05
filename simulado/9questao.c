#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b, c, p, area;

    printf("Digite o lado a: ");
    scanf("%lf", &a);
    printf("Digite o lado b: ");
    scanf("%lf", &b);
    printf("Digite o lado c: ");
    scanf("%lf", &c);

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Semiperimetro: %.3f\n", p);
    printf("Area do triangulo: %.3f\n", area);

    return 0;
}