#include <stdio.h>

int main() {
    // Declaração e atribuição das variáveis de ponto flutuante
    float lapis = 4.88;
    float borrachas = 234.54;
    float canetas = 42.04;
    float cadernos = 8.00;
    float fitas = 13.05;

    // Impressão dos valores formatados
    // O modificador %-10s alinha a string à esquerda (largura 10)
    // O modificador %12.2f alinha o float à direita com largura mínima de 12 e 2 casas decimais
    printf("%-10s %12.2f\n", "Lapis", lapis);
    printf("%-10s %12.2f\n", "Borrachas", borrachas);
    printf("%-10s %12.2f\n", "Canetas", canetas);
    printf("%-10s %12.2f\n", "Cadernos", cadernos);
    printf("%-10s %12.2f\n", "Fitas", fitas);

    return 0;
}