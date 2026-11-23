#include <stdio.h>

// Prototipo da funcao recursiva
int somaDigitos(int n);

int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Numero invalido. Deve ser um inteiro positivo.\n");
        return 1;
    }

    int resultado = somaDigitos(n);
    printf("A soma dos digitos de %d e: %d\n", n, resultado);
    return 0;
}

// Funcao recursiva para somar os digitos
// Caso base: se n == 0, retorna 0.
// Passo recursivo: soma o ultimo digito (n % 10) com a chamada recursiva para o restante do numero (n / 10).
int somaDigitos(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + somaDigitos(n / 10);
}
