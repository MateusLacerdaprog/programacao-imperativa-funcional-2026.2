#include <stdio.h>

// Prototipo da funcao recursiva
long potencia(int base, int expoente);

int main() {
    int base, expoente;
    printf("Digite a base e o expoente (inteiro nao negativo): ");
    if (scanf("%d %d", &base, &expoente) != 2 || expoente < 0) {
        printf("Entrada invalida. O expoente deve ser nao negativo.\n");
        return 1;
    }

    long resultado = potencia(base, expoente);
    printf("%d elevado a %d e: %ld\n", base, expoente, resultado);
    return 0;
}

// Funcao recursiva para calculo de potencia
// Caso base: se expoente == 0, retorna 1.
// Passo recursivo: base * potencia(base, expoente - 1).
long potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    }
    return base * potencia(base, expoente - 1);
}
