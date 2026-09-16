#include <stdio.h>

int main() {
    int hora_inicio, min_inicio, seg_inicio;
    int duracao_segundos;
    int total_segundos_inicio, total_segundos_fim;
    int hora_fim, min_fim, seg_fim;

    // Leitura do horário de início
    printf("Digite o horario de inicio (horas minutos segundos): ");
    scanf("%d %d %d", &hora_inicio, &min_inicio, &seg_inicio);

    // Leitura da duração em segundos
    printf("Digite a duracao do experimento em segundos: ");
    scanf("%d", &duracao_segundos);

    // Converte o horário inicial inteiramente para segundos
    total_segundos_inicio = (hora_inicio * 3600) + (min_inicio * 60) + seg_inicio;

    // Soma a duração e ajusta para o limite de 24h (86400 segundos em um dia)
    total_segundos_fim = (total_segundos_inicio + duracao_segundos) % 86400;

    // Converte de volta para horas, minutos e segundos
    hora_fim = total_segundos_fim / 3600;
    min_fim = (total_segundos_fim % 3600) / 60;
    seg_fim = total_segundos_fim % 60;

    // Exibição formatada hh:mm:ss
    printf("Horario de termino: %02d:%02d:%02d\n", hora_fim, min_fim, seg_fim);

    return 0;
}