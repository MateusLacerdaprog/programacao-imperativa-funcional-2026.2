#include <stdio.h>

/* Prototipo da funcao antes da main() */
long fibonacci(int n);

int main(void) {
    int qtd, i;

    do {
        printf("Digite a quantidade de termos da sequencia de Fibonacci (> 0): ");
        scanf("%d", &qtd);
        if (qtd <= 0) {
            printf("Quantidade invalida! Informe um valor maior que zero.\n");
        }
    } while (qtd <= 0);

    printf("Sequencia de Fibonacci (%d termos):\n", qtd);
    for (i = 0; i < qtd; i++) {
        printf("%ld", fibonacci(i));
        if (i < qtd - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}

/*
 * Por que a versao recursiva simples de Fibonacci se torna lenta para n grande?
 *
 * A funcao fibonacci(n) chama a si mesma duas vezes: fibonacci(n - 1) e
 * fibonacci(n - 2). Isso forma uma arvore binaria de chamadas recursivas cuja
 * quantidade de nos cresce exponencialmente com n — complexidade de tempo
 * aproximadamente O(2^n) (mais precisamente O(phi^n), onde phi ~ 1.618).
 *
 * O principal problema e o recalculo redundante de subproblemas identicos:
 * por exemplo, para calcular fibonacci(5), calculam-se fibonacci(4) e
 * fibonacci(3); dentro de fibonacci(4), calcula-se fibonacci(3) novamente,
 * e fibonacci(2) acaba sendo calculado varias vezes. Para valores como n = 45
 * ou n = 50, bilhoes de chamadas repetidas sao feitas na pilha de execucao,
 * tornando o algoritmo extremamente lento em comparacao com uma abordagem
 * iterativa ou com memoizacao (O(n)).
 */
long fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
