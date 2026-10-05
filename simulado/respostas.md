1)c) está correta: A linguagem C é estritamente case-sensitive. Para o compilador, qualquer caractere com diferença de caixa (maiúscula/minúscula) gera um símbolo/identificador único e independente. Logo, 'valor' e 'VALOR' são duas variáveis totalmente distintas.

2)Ponto e vírgula após o #include (#include <stdlib.h>;) Diretivas de pré-processador não terminam com ;.Main() com "M" maiúsculo.A função de entrada deve ser main(), porque C diferencia maiúsculas de minúsculas (relacionado à Questão 01).String do printf sem aspas. O texto precisa estar entre aspas duplas: "A idade do aluno eh: %d anos.\n".

3)Valor final de a (após o passo 1): 11. Valores finais de b e c (após o passo 2): b = 32, c = 8. Valor final de d (após o passo 3): 10. Valores finais de a, b e c (após o passo 4): a = 56, b = 45, c = 13.

4)a) A soma tem precedência maior que a comparação, então j + 2 é calculado primeiro.
b) A igualdade -1 <= -1 é verdadeira por causa do operador <=.
c) x + y vale exatamente 7.5, então o >= é verdadeiro.
d) O operador || não avalia o lado direito quando o esquerdo já é verdadeiro. De qualquer forma, 5.0 / 2.5 == 2.0 também seria verdadeiro.
e) O && tem precedência sobre o ||, então a expressão é lida como (i == 2 && j == 4) || (k == 0).

5)a) O while testa a condição antes do bloco e pode executar 0 vezes. O do-while testa depois do bloco e executa no mínimo 1 vez.
b) O for é a melhor escolha quando o número de repetições é conhecido ou controlado por contador. Ele junta inicialização, condição e incremento em uma só linha, o que o deixa mais legível e evita esquecer o incremento.
c) Não é erro de compilação, é erro de lógica. O ; vira o corpo vazio do laço. Se condicao for verdadeira e nada a alterar, o programa entra em laço infinito.

6)a) soma foi declarada dentro do for, então não existe fora dele.

b) Rodam i = 1, 2, 3, 4, 6, 7. O continue pula o 5 e o break encerra o laço no 8.

c) Declare int soma = 0; antes do for.

Saída: Soma final = 115

