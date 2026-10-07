#include <stdio.h>

int main() {
    const int SENHA_CORRETA = 2026;
    int senha_digitada;
    int tentativas = 0;
    int acertou = 0;

    for (tentativas = 1; tentativas <= 3; tentativas++) {
        printf("Digite a senha numerica: ");
        scanf("%d", &senha_digitada);

        if (senha_digitada == SENHA_CORRETA) {
            printf("Acesso Concedido!\n");
            printf("Tentativas utilizadas: %d\n", tentativas);
            acertou = 1;
            break;
        } else {
            printf("Senha incorreta!\n");
        }
    }

    if (!acertou) {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}