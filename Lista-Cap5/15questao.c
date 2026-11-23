#include <stdio.h>

// Prototipos das funcoes
float mediaPonderada(float n1, float n2, float n3);
void exibeSituacao(float media);

int main() {
    float n1, n2, n3;
    printf("Digite as tres notas: ");
    if (scanf("%f %f %f", &n1, &n2, &n3) != 3) {
        printf("Entrada invalida.\n");
        return 1;
    }

    float media = mediaPonderada(n1, n2, n3);
    printf("Media ponderada: %.2f\n", media);
    exibeSituacao(media);

    return 0;
}

// Calcula a media ponderada com pesos 2, 3 e 5
float mediaPonderada(float n1, float n2, float n3) {
    return (n1 * 2 + n2 * 3 + n3 * 5) / (2 + 3 + 5);
}

// Exibe a situacao do aluno com base na media
void exibeSituacao(float media) {
    if (media >= 5.0) {
        printf("Situacao: Aprovado\n");
    } else if (media >= 3.0 && media < 5.0) {
        printf("Situacao: Em Recuperacao\n");
    } else {
        printf("Situacao: Reprovado\n");
    }
}
