#include <stdio.h>

// Definindo Pi como constante conforme solicitado
#define PI 3.141593

int main() {
    float graus, radianos;

    printf ("Digite o valor do angulo em graus: ");
    scanf("%f", &graus);

    printf ("Angulo em radianos: %.6f rad\n", graus * (PI / 180.0)); 

    return 0;
}