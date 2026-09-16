#include <stdio.h>

int main() {
    float n1, n2, n3, n4;

    printf("Digite as quatro notas do aluno (separadas por espaco): ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    // a) Média aritmética simples
    float media_simples = (n1 + n2 + n3 + n4) / 4.0;

    // b) Média ponderada com pesos: P1=1, P2=1, P3=2, P4=2 (Soma dos pesos = 6)
    float media_ponderada = (n1 * 1 + n2 * 1 + n3 * 2 + n4 * 2) / 6.0;

    printf("\na) Media Aritmetica Simples: %.2f", media_simples);
    printf("\nb) Media Ponderada: %.2f\n", media_ponderada);

    return 0;
}