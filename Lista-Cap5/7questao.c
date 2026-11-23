#include <stdio.h>

// Prototipo da funcao
int soma(int a, int b);

int main(void) {
    int num1, num2, resultado;

    printf("Digite o primeiro numero inteiro: ");
    if (scanf("%d", &num1) != 1) return 1;

    printf("Digite o segundo numero inteiro: ");
    if (scanf("%d", &num2) != 1) return 1;

    resultado = soma(num1, num2);

    printf("A soma de %d e %d e: %d\n", num1, num2, resultado);

    return 0;
}

// Funcao que calcula a soma de dois inteiros
int soma(int a, int b) {
    return a + b;
}
