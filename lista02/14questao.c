#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os tres lados do triangulo (a b c): ");
    scanf("%f %f %f", &a, &b, &c);

    // Cálculo do semiperímetro
    float p = (a + b + c) / 2.0;

    // Expressão dentro da raiz quadrada na Fórmula de Heron
    float radicando = p * (p - a) * (p - b) * (p - c);

    // Método de Newton-Raphson para aproximar a raiz quadrada de 'radicando'
    float raiz = radicando / 2.0;
    
    // Executa algumas iterações para obter precisão decimal rápida
    if (radicando > 0) {
        raiz = (raiz + radicando / raiz) / 2.0;
        raiz = (raiz + radicando / raiz) / 2.0;
        raiz = (raiz + radicando / raiz) / 2.0;
        raiz = (raiz + radicando / raiz) / 2.0;
        raiz = (raiz + radicando / raiz) / 2.0;
        raiz = (raiz + radicando / raiz) / 2.0;
    } else {
        raiz = 0;
    }

    printf("Area do triangulo: %.2f\n", raiz);

    return 0;
}