#include <stdio.h>

// Prototipos das funcoes
float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main(void) {
    int opcao;
    float num1, num2, resultado;

    printf("=== CALCULADORA ===\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha a operacao (1-4): ");
    if (scanf("%d", &opcao) != 1) return 1;

    if (opcao < 1 || opcao > 4) {
        printf("Erro: Opcao invalida!\n");
        return 1;
    }

    printf("Digite o primeiro operando: ");
    if (scanf("%f", &num1) != 1) return 1;

    printf("Digite o segundo operando: ");
    if (scanf("%f", &num2) != 1) return 1;

    switch (opcao) {
        case 1:
            resultado = soma(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = subtrai(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = multiplica(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (num2 == 0.0f) {
                printf("Erro: Divisao por zero nao permitida!\n");
            } else {
                resultado = divide(num1, num2);
                printf("Resultado: %.2f\n", resultado);
            }
            break;
    }

    return 0;
}

// Funcoes das operacoes
float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
