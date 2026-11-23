#include <stdio.h>

/*
 * Ative ou desative a linha abaixo para controlar a depuracao em tempo de
 * compilacao. Tambem e possivel deixar comentada e compilar via terminal com:
 *   Com depuracao: gcc 24questao.c -DDEBUG -o 24questao
 *   Sem depuracao: gcc 24questao.c -o 24questao
 */
#define DEBUG

/*
 * Diferenca de comportamento ao compilar COM e SEM #define DEBUG (ou -DDEBUG):
 * - COM #define DEBUG ativo: o pre-processador inclui o bloco dentro de
 *   #ifdef DEBUG ... #endif no codigo-fonte enviado ao compilador. Durante a
 *   execucao, cada iteracao do laco imprime a soma parcial acumulada,
 *   facilitando o rastreamento e a depuracao passo a passo.
 * - SEM #define DEBUG (ou sem a flag -DDEBUG): o pre-processador descarta
 *   completamente o bloco #ifdef DEBUG ... #endif antes mesmo da compilacao.
 *   O executavel gerado nao contem as instrucoes de impressao parcial,
 *   ficando mais enxuto, mais rapido e exibindo apenas o resultado final.
 */

/* Prototipo da funcao antes da main() */
int somaAteN(int n);

int main(void) {
    int n, resultado;

    printf("Digite um inteiro positivo N: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Valor invalido! Informe um numero inteiro maior ou igual a 1.\n");
        return 1;
    }

    resultado = somaAteN(n);
    printf("Soma final de 1 ate %d = %d\n", n, resultado);

    return 0;
}

int somaAteN(int n) {
    int i;
    int soma = 0;

    for (i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("[DEBUG] Iteracao %d: soma parcial = %d\n", i, soma);
#endif
    }

    return soma;
}
