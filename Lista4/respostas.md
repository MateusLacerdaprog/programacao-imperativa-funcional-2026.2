# Lista de Exercícios - Capítulo 4: Comandos de Decisão
**Disciplina:** Programação Imperativa e Funcional (PIF - 2026.2)  
**Instituição:** CESAR School  
**Aluno:** Mateus Lacerda  

---

## PARTE I: QUESTÕES TEÓRICAS E ANALÍTICAS

### Questão 01. Avaliação de Expressões Condicionais e Atribuição vs. Igualdade

**a) Efeito prático de escrever `if (x = 0)` em vez de `if (x == 0)`:**
- O operador `=` é o operador de **atribuição**, enquanto `==` é o operador de **comparação de igualdade**.
- Em `if (x = 0)`, o valor `0` é atribuído à variável `x`, sobrescrevendo qualquer valor que ela continha anteriormente. Em Linguagem C, o valor resultante de uma expressão de atribuição é o próprio valor atribuído (neste caso, `0`). Como `0` é interpretado como falso, a condição do `if` sempre será avaliada como falsa, e o bloco de código associado ao `if` **nunca será executado** (se houver uma cláusula `else`, ela sempre será executada).
- Em contrapartida, em `if (x == 0)`, o valor de `x` é apenas comparado com `0`, sem sofrer nenhuma modificação. O bloco do `if` só será executado se `x` for de fato igual a `0`.

**b) Interpretação de valores numéricos dentro da condição do `if`:**
- No padrão ANSI C, não há tipo booleano nativo primitivo na especificação clássica (em C99 foi introduzido `<stdbool.h>`). As estruturas de controle avaliam expressões numéricas:
  - **Falso:** Representado exclusivamente pelo valor zero (`0` para inteiros ou `0.0` para números de ponto flutuante).
  - **Verdadeiro:** Qualquer valor numérico **diferente de zero** (`!= 0`), seja ele positivo ou negativo (ex.: `1`, `-5`, `42`, `0.001`).

**c) Análise da instrução `if (x = -5)`:**
- A expressão `x = -5` atribui o valor `-5` à variável `x`. O valor de retorno dessa expressão de atribuição é `-5`.
- De acordo com o padrão ANSI C, qualquer valor diferente de zero é logicamente avaliado como **verdadeiro**.
- Como `-5 != 0`, a condição é verdadeira e o bloco de código associado **será executado**.

---

### Questão 02. Associação do Comando else e Aninhamento de Decisões

**a) Mensagem impressa no console:**
- A mensagem impressa será: **`Opção B`**.
- **Justificativa:** Em Linguagem C, a indentação do código-fonte é puramente visual e ignorada pelo compilador. Pela regra sintática da linguagem, a cláusula `else` associa-se ao `if` mais próximo que ainda não foi fechado, que neste caso é `if (y > 10)`. Como `x = 15 > 10` é verdadeiro, o programa entra no primeiro `if`. Em seguida, avalia `if (y > 10)` com `y = 5`, resultando em falso (`5 > 10` é falso). Consequentemente, o fluxo é desviado para o `else` deste segundo `if`, imprimindo `"Opção B"`.

**b) Regra oficial da Linguagem C para associação da cláusula `else`:**
- A regra oficial (*regra do else pendente / dangling else*) estabelece que, na ausência de chaves `{ }`, uma cláusula `else` é vinculada incondicionalmente ao comando `if` precedente mais próximo no mesmo nível de aninhamento que ainda não possua um `else` correspondente.

**c) Código reescrito com chaves garantindo que Opção B só seja impressa se `x <= 10`:**
```c
int x = 15, y = 5;

if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}
```

---

### Questão 03. Operador Condicional Ternário vs. Estrutura if-else

**a) Funcionamento e valor armazenado para `media = 6.8`:**
- O operador ternário opera na forma `<condição> ? <expressão_se_verdadeiro> : <expressão_se_falso>`.
- Avalia-se a expressão lógica `(media >= 7.0)`. Se verdadeira, retorna o caractere `'A'`; se falsa, retorna o caractere `'R'`.
- Para `media = 6.8`, a condição `6.8 >= 7.0` é falsa. Portanto, a expressão retorna `'R'`, que é atribuído à variável `situacao`.

**b) Reescrita obrigatória utilizando estrutura `if-else`:**
```c
media = (nota1 + nota2) / 2.0;

if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}
```

**c) Limitações do operador ternário em relação ao `if-else`:**
- O operador ternário é uma **expressão** que produz obrigatoriamente um valor de retorno, enquanto `if-else` é uma **instrução de controle de fluxo** (*statement*).
- **Limitações:**
  1. **Blocos de múltiplos comandos:** O operador ternário não permite blocos de instruções `{ }`, declarações de variáveis, comandos de repetição (`for`, `while`) ou instruções como `return`, `break` e `continue`.
  2. **Compatibilidade de tipos:** As duas alternativas do operador ternário devem possuir tipos compatíveis ou conversíveis entre si pelo compilador, ao passo que os blocos `if-else` podem executar ações completamente independentes e sem retorno.
  3. **Legibilidade:** Encadeamentos complexos de operadores ternários tornam a manutenção e a legibilidade do código significativamente prejudicadas.

---

### Questão 04. Seleção Múltipla com switch-case e Efeito Fall-Through

**a) Saída exata no terminal:**
```
Prata
Ouro
```
- **Explicação:** A variável `codigo` vale `2`. O comando `switch` desvia a execução diretamente para o rótulo `case 2:`, imprimindo `"Prata\n"`. Como não existe a instrução `break` ao término do `case 2`, o fluxo de controle continua caindo para a instrução do rótulo seguinte (`case 3:`), imprimindo `"Ouro\n"`. Ao encontrar o `break` dentro de `case 3`, o bloco `switch` é finalmente encerrado.

**b) Papel do `break` e nome do fenômeno:**
- O comando `break` interrompe imediatamente a execução da estrutura `switch`, fazendo o fluxo do programa saltar para a primeira linha após a chave de fechamento `}` do `switch`.
- Quando o `break` é omitido, a execução continua sequencialmente nos casos abaixo, fenômeno formalmente denominado **Fall-Through** (ou queda direta).

**c) Tipos de dados permitidos no `switch (expressão)`:**
- No padrão C, o argumento do `switch` e as constantes dos rótulos `case` **devem ser tipos inteiros ou promovíveis a inteiro** (`int`, `char`, `short`, `long`, `unsigned int`, `enum`).
- **NÃO é permitido utilizar `float` ou `double`**.
- **Justificativa:** Números de ponto flutuante sofrem imprecisões de arredondamento em representação binária (padrão IEEE 754), tornando comparações de igualdade exata instáveis. Além disso, a instrução `switch` é implementada em nível de montador (*assembly*) através de tabelas de saltos indexadas (*jump tables*), mecanismo que requer valores discretos, inteiros e enumeráveis.

---

### Questão 05. Avaliação de Curto-Circuito em Operadores Lógicos

**a) Saída exata impressa pelo comando `printf`:**
```
a = 0, b = 5, c = 8
```
- **Observação sobre `++b`:** O incremento `++b` **foi ignorado** (não executado). Na expressão `a != 0 && ++b > 5`, a primeira subexpressão `a != 0` avalia como falsa (`0 != 0` é falso). Por avaliação de curto-circuito do operador `&&`, a segunda subexpressão não é avaliada, preservando `b = 5`. Com a condição falsa, o bloco `else` é executado: `c -= 2` $\rightarrow$ `c = 10 - 2 = 8`.

**b) Conceito de avaliação de curto-circuito (*short-circuit evaluation*):**
- **Operador E (`&&`):** Uma conjunção lógica só é verdadeira se todos os seus operandos forem verdadeiros. Caso o primeiro operando seja avaliado como **falso** (`0`), o resultado final é garantidamente falso, e o compilador aborta a avaliação dos operandos à direita.
- **Operador OU (`||`):** Uma disjunção lógica é verdadeira se ao menos um dos operandos for verdadeiro. Caso o primeiro operando seja avaliado como **verdadeiro** (`!= 0`), o resultado final é garantidamente verdadeiro, e o compilador aborta a avaliação dos operandos à direita.

**c) Valores finais de `b` e `c` para a condição `if (a == 0 || ++b > 5)`:**
- Como `a = 0`, a expressão `a == 0` avalia como **verdadeira** (`1`).
- Pelo curto-circuito do operador `||`, como o primeiro termo já é verdadeiro, o termo `++b > 5` **não é avaliado**, mantendo `b = 5`.
- A condição do `if` sendo verdadeira aciona o bloco `c += 10`, resultando em `c = 10 + 10 = 20`.
- **Valores finais:** `b = 5` e `c = 20`.

---

### Questão 06. Construções else-if e Análise Lógica de Intervalos

**a) Saída do programa para `idade = 65`:**
```
Idoso
Adulto
Jovem
```
- **Explicação:** Como foram encadeados múltiplos comandos `if` independentes, cada condição é avaliada separadamente pelo processador. Como `65 >= 60`, `65 >= 18` e `65 >= 12` são todas verdadeiras, as três mensagens são impressas em sequência.

**b) Diferença fundamental entre `if`s independentes e cadeia `else-if`:**
- Em comandos `if` independentes, todas as condições são obrigatoriamente testadas, permitindo a execução de múltiplos blocos se mais de uma for verdadeira.
- Na construção `else-if`, as condições são **mutuamente exclusivas**: a partir do momento em que a primeira condição verdadeira é encontrada e seu bloco é executado, todas as demais condições subsequentes são imediatamente ignoradas e o fluxo salta para fora da estrutura.

**c) Programa reescrito com cadeia `else-if` correta:**
```c
int idade = 25;

if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}
```
