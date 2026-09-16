#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    // Divisão real usando casting explícito (float) para evitar a divisão inteira


    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a-b);
    printf("Multiplicacao: %d\n", a * b);
    ("Divisao real: %.2f\n", (float)a / b); 
        if (b != 0) {
        printf("Divisao inteira: %d\n", a / b);
    } else {
        printf("Divisao inteira: Divisao por zero nao e permitida.\n");
    }

    return 0;
}

