#include <stdio.h>

int main() {
    char caractere;

    // Leitura de um caractere digitado pelo usuário
    printf("Digite um caractere: ");
    scanf(" %c", &caractere); // O espaço antes de %c ignora eventuais espaços/quebras de linha no buffer

    /* 
     * O número exibido representa a codificação decimal do caractere na Tabela ASCII.
     * Em C, o tipo 'char' é armazenado internamente como um inteiro de 1 byte (8 bits).
     * Ao usar %d no printf, exibimos o valor numérico correspondente a esse caractere.
     */
    printf("O caractere '%c' possui o código ASCII: %d\n", caractere, caractere);

    return 0;
}