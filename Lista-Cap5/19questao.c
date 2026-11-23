#include <stdio.h>

// Prototipos dos procedimentos
void contagemRegressiva(int n);
void contagemCrescente(int n);

int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Numero invalido. Deve ser positivo.\n");
        return 1;
    }

    printf("--- Contagem Regressiva ---\n");
    contagemRegressiva(n);

    printf("\n--- Contagem Crescente ---\n");
    contagemCrescente(n);

    return 0;
}

// Procedimento recursivo decrescente (n ate 1)
// A chamada recursiva ocorre APOS a impressao, gerando a ordem decrescente.
void contagemRegressiva(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }
    printf("%d\n", n);
    contagemRegressiva(n - 1);
}

// Procedimento recursivo crescente (1 ate n)
// A chamada recursiva ocorre ANTES da impressao. Isso faz com que os numeros 
// sejam desempilhados e impressos na ordem inversa da chamada (do menor para o maior).
void contagemCrescente(int n) {
    if (n == 0) {
        return;
    }
    contagemCrescente(n - 1);
    printf("%d\n", n);
}
