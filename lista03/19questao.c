#include <stdio.h>

int main() {
    int n, i;
    long long int t1 = 1, t2 = 1, proximo = 1;

    printf("Informe o numero do termo desejado (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: O valor de N deve ser positivo.\n");
        return 1;
    }

    printf("Sequencia ate o termo %d:\n", n);

    if (n == 1) {
        printf("1\n");
        printf("Valor do 1o termo: 1\n");
        return 0;
    }

    printf("1 1 ");
    for (i = 3; i <= n; i++) {
        proximo = t1 + t2;
        printf("%lld ", proximo);
        t1 = t2;
        t2 = proximo;
    }

    printf("\nValor do %do termo: %lld\n", n, proximo);

    return 0;
}