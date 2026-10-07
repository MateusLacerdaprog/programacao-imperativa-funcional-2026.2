#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char secreta, palpite;
    int tentativas = 0;

    srand(time(NULL));
    secreta = (rand() % 26) + 'a';

    printf("Adivinhe a letra secreta (entre 'a' e 'z')!\n");

    do {
        printf("Digite um palpite: ");
        scanf(" %c", &palpite);
        tentativas++;

        if (palpite < secreta) {
            printf("Dica: A letra secreta vem DEPOIS no alfabeto.\n");
        } else if (palpite > secreta) {
            printf("Dica: A letra secreta vem ANTES no alfabeto.\n");
        } else {
            printf("\nParabens, voce acertou!\n");
            printf("Total de tentativas: %d\n", tentativas);
        }
    } while (palpite != secreta);

    return 0;
}