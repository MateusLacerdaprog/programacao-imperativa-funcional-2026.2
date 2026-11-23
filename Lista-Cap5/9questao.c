#include <stdio.h>

// Prototipo da funcao
int maior(int a, int b);

int main(void) {
    int num1, num2, resultado;

    printf("Digite o primeiro numero inteiro: ");
    if (scanf("%d", &num1) != 1) return 1;

    printf("Digite o segundo numero inteiro: ");
    if (scanf("%d", &num2) != 1) return 1;

    resultado = maior(num1, num2);

    printf("O maior numero entre %d e %d e: %d\n", num1, num2, resultado);

    return 0;
}

// Funcao que retorna o maior entre dois inteiros
int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
