#include <stdio.h>
#include <math.h>
int main() {
    float altura_degrau_cm, altura_total_m;
    float altura_total_cm;
    int num_degraus;
    printf("=== Calculadora de Degraus ===\n\n");
    printf("Digite a altura de cada degrau (em centimetros): ");
   
    scanf("%f", &altura_degrau_cm);
   
    printf("Digite a altura total a alcancar (em metros): ");
   
    scanf("%f", &altura_total_m);
    // Converte metros para centimetros
    altura_total_cm = altura_total_m * 100.0;
    // Calcula o numero minimo de degraus (arredonda para cima)
    num_degraus = (int)ceil(altura_total_cm / altura_degrau_cm);
    printf("\nAltura de cada degrau: %.2f cm\n", altura_degrau_cm);
    printf("Altura total desejada: %.2f m (%.2f cm)\n", altura_total_m, altura_total_cm);
    printf("Numero minimo de degraus: %d\n", num_degraus);
    return 0;
}