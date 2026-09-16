#include <stdio.h>

int main() {
    char c;

    printf("Digite um caractere: ");
    
    // O espaço antes de %c instrui o scanf a ignorar espaços em branco 
    // e quebras de linha ('\n') residuais no buffer do teclado.
    scanf(" %c", &c);

    printf("Caractere lido: %c\n", c);

    return 0;
}