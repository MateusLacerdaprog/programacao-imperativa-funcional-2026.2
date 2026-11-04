#include <stdio.h>

int main() {
    int x = 15, y = 5;

    printf("=== Questao 02: Associacao do else e Aninhamento ===\n\n");
    printf("Valores iniciais: x = %d, y = %d\n", x, y);

    // Codigo reescrito com chaves para garantir que Opcao B ocorra somente quando x <= 10
    if (x > 10) {
        if (y > 10) {
            printf("Opcao A\n");
        }
    } else {
        printf("Opcao B\n");
    }

    // Teste com x <= 10 para demonstrar a execucao da Opcao B
    printf("\nTestando com x = 8 e y = 5:\n");
    x = 8;
    if (x > 10) {
        if (y > 10) {
            printf("Opcao A\n");
        }
    } else {
        printf("Opcao B\n");
    }

    return 0;
}
