#include <stdio.h>

/* Macros utilitarias com parenteses de protecao em todos os argumentos e no resultado */
#define SQR(x) ((x) * (x))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int main(void) {
    int num1, num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("\nResultados usando macros:\n");
    printf("Quadrado de %d: %d\n", num1, SQR(num1));
    printf("Quadrado de %d: %d\n", num2, SQR(num2));
    printf("Maior valor: %d\n", MAX(num1, num2));
    printf("Menor valor: %d\n", MIN(num1, num2));

    return 0;
}
