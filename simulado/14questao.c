#include <stdio.h>
#include <stdlib.h>

int main() {
    int senha = 2026;
    int tentativa = 0;

    for (int i = 1; i <= 3 && tentativa != senha; i++) {
        printf("Tentativa %d de 3 - Digite a senha: ", i);
        scanf("%d", &tentativa);
    }

    while (tentativa == senha) {
        printf("Acesso Concedido!\n");
        break;
    }

    while (tentativa != senha) {
        printf("Conta Bloqueada por Seguranca!\n");
        break;
    }

    return 0;
}