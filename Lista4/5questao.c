#include <stdio.h>

int main() {
    int a = 0, b = 5, c = 10;

    printf("=== Questao 05: Avaliacao de Curto-Circuito ===\n\n");
    printf("Valores iniciais: a = %d, b = %d, c = %d\n", a, b, c);

    // Avaliacao de curto-circuito com &&
    if (a != 0 && ++b > 5) {
        c += 10;
    } else {
        c -= 2;
    }

    printf("Apos 'if (a != 0 && ++b > 5)':\n");
    printf("a = %d, b = %d, c = %d (note que ++b nao foi executado)\n\n", a, b, c);

    // Teste alternativo com ||
    a = 0; b = 5; c = 10;
    if (a == 0 || ++b > 5) {
        c += 10;
    } else {
        c -= 2;
    }

    printf("Apos 'if (a == 0 || ++b > 5)':\n");
    printf("a = %d, b = %d, c = %d (a == 0 e verdadeiro, logo ++b nao foi executado)\n", a, b, c);

    return 0;
}
