#include <stdio.h>

int main() {
    int dia, mes, ano;

    // Solicita a data utilizando as barras '/' como separadores
    printf("Digite uma data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    // Exibe a data no formato invertido aaaa/mm/dd
    // %04d e %02d garantem o preenchimento com zeros à esquerda (ex: 02 para o mês)
    printf("Data no formato invertido: %04d/%02d/%02d\n", ano, mes, dia);

    return 0;
}