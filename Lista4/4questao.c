#include <stdio.h>

int main() {
    int codigo;

    printf("=== Questao 04: Switch-Case e Efeito Fall-Through ===\n\n");
    printf("Digite o codigo da medalha (1 = Bronze, 2 = Prata, 3 = Ouro): ");
    scanf("%d", &codigo);

    printf("\nExecucao com break (sem efeito fall-through):\n");
    switch (codigo) {
        case 1:
            printf("Bronze\n");
            break;
        case 2:
            printf("Prata\n");
            break;
        case 3:
            printf("Ouro\n");
            break;
        default:
            printf("Sem Medalha\n");
            break;
    }

    return 0;
}
