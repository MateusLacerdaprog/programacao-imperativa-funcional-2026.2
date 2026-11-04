#include <stdio.h>

int main() {
    int ang1, ang2, ang3;

    printf("=== Questao 24: Classificacao de Triangulos por Angulos ===\n\n");
    printf("Digite o primeiro angulo interno: ");
    scanf("%d", &ang1);
    printf("Digite o segundo angulo interno: ");
    scanf("%d", &ang2);
    printf("Digite o terceiro angulo interno: ");
    scanf("%d", &ang3);

    // Validacao dos angulos internos
    if (ang1 <= 0 || ang2 <= 0 || ang3 <= 0 || (ang1 + ang2 + ang3 != 180)) {
        printf("\nErro: Os angulos informados nao formam um triangulo valido (a soma deve ser 180 graus)!\n");
        return 1;
    }

    printf("\nOs angulos formam um triangulo valido.\n");
    printf("Classificacao: ");

    if (ang1 == 90 || ang2 == 90 || ang3 == 90) {
        printf("Retangulo (possui um angulo reto de 90 graus)\n");
    } else if (ang1 > 90 || ang2 > 90 || ang3 > 90) {
        printf("Obtusangulo (possui um angulo obtuso maior que 90 graus)\n");
    } else {
        printf("Acutangulo (todos os tres angulos sao agudos, menores que 90 graus)\n");
    }

    return 0;
}
