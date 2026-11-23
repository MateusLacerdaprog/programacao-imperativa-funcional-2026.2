#include <stdio.h>

/* Macro inicial propositalmente SEM parenteses de protecao */
#define DOBRO(x) x*2

/* Prototipo da funcao antes da main() */
int dobro(int x);

int main(void) {
    printf("=== Teste 1: Macro sem parenteses vs Funcao ===\n");
    printf("DOBRO(2+3) = %d\n", DOBRO(2+3));
    printf("dobro(2+3) = %d\n", dobro(2+3));

    /*
     * Explicacao da diferenca (8 vs 10):
     * - Na macro DOBRO(x) definida como x*2, o pre-processador faz uma
     *   substituicao textual literal ANTES da compilacao. Assim, DOBRO(2+3)
     *   e expandido para: 2+3*2. Pela precedencia de operadores em C, a
     *   multiplicacao ocorre antes da soma: 2 + (3 * 2) = 2 + 6 = 8.
     * - Na funcao dobro(2+3), a expressao 2+3 e avaliada primeiro como
     *   argumento (resultando em 5), e esse valor 5 e passado para o
     *   parametro x, calculando 5 * 2 = 10.
     */

    /* Redefinicao segura da macro com parenteses de protecao */
    #undef DOBRO
    #define DOBRO(x) ((x)*2)

    printf("\n=== Teste 2: Macro redefinida COM parenteses ===\n");
    printf("DOBRO(2+3) = %d\n", DOBRO(2+3));
    printf("dobro(2+3) = %d\n", dobro(2+3));

    return 0;
}

int dobro(int x) {
    return x * 2;
}
