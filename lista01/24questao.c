#include <stdio.h>

int main() {
    // Cabeçalho da Tabela
    // %-10s alinha o texto à esquerda com largura mínima de 10 caracteres
    // %-5s alinha a nota à esquerda com largura de 5 caracteres
    printf("%-10s %-5s\n", "ALUNO(A)", "NOTA");
    printf("%-10s %-5s\n", "=========", "=====");

    // Dados dos Alunos
    printf("%-10s %-5.1f\n", "ALINE", 9.0);
    printf("%-10s %-5s\n", "MÁRIO", "DEZ");
    printf("%-10s %-5.1f\n", "SÉRGIO", 4.5);
    printf("%-10s %-5.1f\n", "SHIRLEY", 7.0);

    return 0;
}