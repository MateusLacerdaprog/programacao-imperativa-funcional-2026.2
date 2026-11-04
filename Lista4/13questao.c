#include <stdio.h>
#include <math.h>

int main() {
    char operacao;
    float num1, num2, resultado;

    printf("=== Questao 13: Calculadora Aritmetica e Cientifica ===\n\n");
    printf("Operacoes disponiveis:\n");
    printf("  +  : Soma\n");
    printf("  -  : Subtracao\n");
    printf("  *  : Multiplicacao\n");
    printf("  /  : Divisao\n");
    printf("  ^  : Potenciacao (num1 ^ num2)\n");
    printf("Escolha a operacao: ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro operando: ");
    scanf("%f", &num1);
    printf("Digite o segundo operando: ");
    scanf("%f", &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("\nResultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("\nResultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("\nResultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '/':
            if (num2 == 0.0) {
                printf("\nErro: Divisao por zero nao permitida!\n");
            } else {
                resultado = num1 / num2;
                printf("\nResultado: %.2f / %.2f = %.4f\n", num1, num2, resultado);
            }
            break;
        case '^':
            resultado = (float)pow(num1, num2);
            printf("\nResultado: %.2f ^ %.2f = %.4f\n", num1, num2, resultado);
            break;
        default:
            printf("\nErro: Operacao '%c' invalida!\n", operacao);
            break;
    }

    return 0;
}
