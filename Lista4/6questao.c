#include <stdio.h>

int main() {
    int idade;

    printf("=== Questao 06: Classificacao por Faixa Etaria (else-if) ===\n\n");
    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Classificacao: ");
    if (idade >= 60) {
        printf("Idoso\n");
    } else if (idade >= 18) {
        printf("Adulto\n");
    } else if (idade >= 12) {
        printf("Jovem\n");
    } else {
        printf("Crianca\n");
    }

    return 0;
}
