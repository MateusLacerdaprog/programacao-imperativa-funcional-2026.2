#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    // Criamos cópias da variável original para manipular de forma independente
    int antecessor = num;
    int sucessor = num;

    // Utilizando exclusivamente os operadores unários
    --antecessor; // Decremento unário: subtrai 1 do valor armazenado
    ++sucessor;   // Incremento unário: adiciona 1 ao valor armazenado

    printf("Antecessor de %d: %d\n", num, antecessor);
    printf("Sucessor de %d: %d\n", num, sucessor);

    return 0;
}