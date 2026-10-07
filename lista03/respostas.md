a)while: Avaliação pré-teste (no início). Executa no mínimo 0 vezes.
do-while: Avaliação pós-teste (no final). Executa no mínimo 1 vez.

b)for: Quando o número de iterações é pré-determinado (laços contados).
while: Quando o número de repetições é indeterminado e pode não executar nenhuma vez.
do-while: Menus e validação de dados de entrada, onde o bloco precisa rodar obrigatoriamente ao menos uma vez.

c)Tipo de erro: Erro de lógica.
Comportamento: Se a condição for verdadeira, o programa entra em loop infinito e trava a execução, pois o corpo do laço é uma instrução vazia que nunca altera a condição.

3)a) 36	18	9	4	2	1

b)Comportamento e ch + 1: Lê caracteres continuamente até que a tecla 'X' seja pressionada. A expressão ch + 1 imprime o caractere sucessor na tabela ASCII (por exemplo, ao digitar 'A', imprime 'B').
Necessidade dos parênteses: O operador de comparação != tem maior precedência que o operador de atribuição =. Sem os parênteses, getch() != 'X' seria executado primeiro, atribuindo 1 ou 0 a ch em vez do caractere lido.

c) Utilizando o comando break; (ou return; / goto) condicionado a uma estrutura de decisão (if) dentro do corpo do laço.

4)a) Interrompe imediatamente a execução do laço e desvia o fluxo do programa para a primeira linha de código fora dele.
b)Ação: Interrompe apenas a iteração atual, ignorando as instruções restantes do bloco naquele ciclo.
Expressão executada: Salta diretamente para a expressão de incremento (a terceira expressão do cabeçalho do for), antes de reavaliar o teste condicional.
c) Apenas o laço interno (o laço no qual a instrução break está diretamente inserida). O laço externo continua executando normalmente.

5)a) Exatamente 5 iterações. 
b)i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
c)int i = 0, j = 10;
while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}

6)a) Valor final de x = 6
b)x = 0: avalia 0 < 5 (V), incrementa para x = 1.
x = 1: avalia 1 < 5 (V), incrementa para x = 2.
x = 2: avalia 2 < 5 (V), incrementa para x = 3.
x = 3: avalia 3 < 5 (V), incrementa para x = 4.
x = 4: avalia 4 < 5 (V), incrementa para x = 5.
x = 5: avalia 5 < 5 (F), incrementa para x = 6 (o pós-incremento é executado após a comparação) e encerra o laço.
c)int x = 0;
while (x < 6) {
    x++;
}
printf("Valor final de x = %d\n", x);
