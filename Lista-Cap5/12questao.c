#include <stdio.h>

// Prototipo do procedimento
void exibeMenu(void);

int main(void) {
    int opcao;

    exibeMenu();
    printf("Escolha uma opcao: ");
    if (scanf("%d", &opcao) != 1) return 1;

    switch (opcao) {
        case 1:
            printf("Opcao selecionada: Cadastrar\n");
            break;
        case 2:
            printf("Opcao selecionada: Listar\n");
            break;
        case 3:
            printf("Opcao selecionada: Remover\n");
            break;
        case 0:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Erro: Opcao invalida!\n");
            break;
    }

    return 0;
}

// Procedimento que exibe o menu de opcoes
void exibeMenu(void) {
    printf("=== MENU ===\n");
    printf("1 - Cadastrar\n");
    printf("2 - Listar\n");
    printf("3 - Remover\n");
    printf("0 - Sair\n");
}
