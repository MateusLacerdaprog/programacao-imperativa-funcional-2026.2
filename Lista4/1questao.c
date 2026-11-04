#include <stdio.h>

int main() {
    int x;

    printf("=== Questao 01: Atribuicao vs Igualdade em Condicionais ===\n\n");

    // Demonstracao de if (x = 0)
    x = 10;
    printf("Valor inicial de x: %d\n", x);
    if (x = 0) {
        printf("Bloco IF executado (x = 0)\n");
    } else {
        printf("Bloco ELSE executado pois a expressao (x = 0) resultou em 0 (Falso).\n");
    }
    printf("Valor de x apos a atribuicao no if: %d\n\n", x);

    // Demonstracao de if (x = -5)
    if (x = -5) {
        printf("Bloco IF executado para (x = -5) pois qualquer valor diferente de zero e Verdadeiro!\n");
        printf("Valor de x: %d\n", x);
    }

    return 0;
}
