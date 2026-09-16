#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dado1, dado2, dado3;

    // Inicializa a semente do gerador de números aleatórios com o tempo atual
    srand(time(NULL));

    /*
     * rand() % 6 gera um número de 0 a 5.
     * Somando +1, ajustamos o intervalo para 1 a 6 (simulando um dado de 6 lados).
     */
    dado1 = (rand() % 6) + 1;
    dado2 = (rand() % 6) + 1;
    dado3 = (rand() % 6) + 1;

    // Exibição dos resultados
    printf("--- Lançamento de 3 Dados ---\n");
    printf("Dado 1: %d\n", dado1);
    printf("Dado 2: %d\n", dado2);
    printf("Dado 3: %d\n", dado3);

    return 0;
}