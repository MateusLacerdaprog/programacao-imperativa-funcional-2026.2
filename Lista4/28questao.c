#include <stdio.h>

int main() {
    int opcao;

    printf("===========================================\n");
    printf("   SISTEMA DE ATENDIMENTO BANCARIO (SAC)   \n");
    printf("===========================================\n\n");
    printf("Por favor, selecione uma das opcoes abaixo:\n");
    printf("  1 - Consultar Saldo\n");
    printf("  2 - Efetuar Extrato\n");
    printf("  3 - Fazer Transferencia\n");
    printf("  4 - Falar com Atendente\n\n");
    printf("Opcao desejada: ");
    scanf("%d", &opcao);

    printf("\n");
    switch (opcao) {
        case 1:
            printf(">> Direcionando para: Consulta de Saldo em conta corrente.\n");
            printf("Por favor, aguarde o carregamento dos seus dados...\n");
            break;
        case 2:
            printf(">> Direcionando para: Emissao e Demonstrativo de Extrato bancario.\n");
            printf("Por favor, selecione o periodo desejado nos proximos passos...\n");
            break;
        case 3:
            printf(">> Direcionando para: Area de Transferencias (TED/DOC/PIX).\n");
            printf("Tenha em maos a chave ou os dados bancarios do favorecido.\n");
            break;
        case 4:
            printf(">> Direcionando sua chamada para um de nossos atendentes.\n");
            printf("Sua ligacao e muito importante para nos. Aguarde na linha...\n");
            break;
        default:
            printf(">> Erro: Opcao digitada invalida! Retornando ao menu principal.\n");
            break;
    }

    return 0;
}
