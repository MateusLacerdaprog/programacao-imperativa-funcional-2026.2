#include <stdio.h>

int main() {
    int idade, tempo_servico;

    printf("=== Questao 15: Elegibilidade para Aposentadoria ===\n\n");
    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);
    printf("Digite o tempo de servico (em anos): ");
    scanf("%d", &tempo_servico);

    if (idade < 0 || tempo_servico < 0) {
        printf("Erro: Valores nao podem ser negativos!\n");
        return 1;
    }

    if (idade >= 65 || tempo_servico >= 30 || (idade >= 60 && tempo_servico >= 25)) {
        printf("\nResultado: O trabalhador PODE se aposentar.\n");
    } else {
        printf("\nResultado: O trabalhador NAO PODE se aposentar.\n");
    }

    return 0;
}
