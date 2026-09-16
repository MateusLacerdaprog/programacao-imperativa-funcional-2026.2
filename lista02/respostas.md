1. a)2. b) truncamento de tipos e coerção implícita. c)Não truncar as variáveis, o valor era decimal, logo era pra ser tipo float e o leitor com 2 casas decimais %2.f
2. a) Porque a biblioteca não possui compatibilidade com esses sistemas, apenas windows, GERANDO ERRO. b) getchar ou fgetc; putchar ou fputc
4. **Valores Iniciais:**
- `a = 1`, `b = 2`, `c = 3`, `d = 4`

a) **`a += b + c;`**
   - **Precedência:** A adição `b + c` é avaliada antes da atribuição composta `+=`.
   - **Cálculo:** `2 + 3` = `5`.
   - **Atribuição:** `a = a + 5` = `1 + 5` = `6`.
   - **Estado atual:** `a = 6`, `b = 2`, `c = 3`, `d = 4`.

b) **`b *= c = d + 2;`**
   - **Precedência:** O operador de atribuição tem associatividade da direita para a esquerda.
   - **Cálculo da expressão:** `d + 2` = `4 + 2` = `6`.
   - **Atribuição a `c`:** `c = 6`.
   - **Atribuição a `b`:** `b *= 6` $\rightarrow$ `b = 2 * 6` = `12`.
   - **Estado atual:** `a = 6`, `b = 12`, `c = 6`, `d = 4`.

c) **`d %= a + a + a;`**
   - **Precedência:** As somas `a + a + a` são avaliadas antes da atribuição de resto `%=`.
   - **Cálculo da soma:** `6 + 6 + 6` = `18`.
   - **Atribuição a `d`:** `d = d % 18` =`4 % 18` = `4`.
   - **Estado atual:** `a = 6`, `b = 12`, `c = 6`, `d = 4`.

d) **`d -= c -= b -= a;`**
   - **Precedência:** Encadeamento de atribuições avaliado da direita para a esquerda.
   - **Passo 1 (`b -= a`):** `b = 12 - 6` = `6`.
   - **Passo 2 (`c -= b`):** `c = 6 - 6` = `0`.
   - **Passo 3 (`d -= c`):** `d = 4 - 0` = `4`.
   - **Estado atual:** `a = 6`, `b = 6`, `c = 0`, `d = 4`.

f) **`a += b += c += 7;`**
   - **Precedência:** Avaliado da direita para a esquerda.
   - **Passo 1 (`c += 7`):** `c = 0 + 7` = `7`.
   - **Passo 2 (`b += c`):** `b = 6 + 7` = `13`.
   - **Passo 3 (`a += b`):** `a = 6 + 13` = `19`.
   - **Estado atual:** `a = 19`, `b = 13`, `c = 7`, `d = 4`.
Resultados finais das variáveis:
* **`a`** = `19`
* **`b`** = `13`
* **`c`** = `7`
* **`d`** = `4`
5.### Questão 05 — Avaliação de Expressões Lógicas e Relacionais

**Valores Iniciais:**
- `int i = 1, j = 2, k = 3, n = 2;`
- `float x = 3.3, y = 4.4;`

a) `i < j + 3`
- **Avaliação:** `j + 3` = `5`. Em seguida: `1 < 5` (Verdadeiro).
- **Resultado:** **1**

b) `2 * i - 7 <= j - 8`
- **Avaliação:** `(2 * 1) - 7` = `-5` e `2 - 8` = `-6`. Em seguida: `-5 <= -6` (Falso).
- **Resultado:** **0**

c) `-x + y >= 2.0 * y`
- **Avaliação:** `-3.3 + 4.4` = `1.1` e `2.0 * 4.4` = `8.8`. Em seguida: `1.1 >= 8.8` (Falso).
- **Resultado:** **0**

d) `x == y`
- **Avaliação:** `3.3 == 4.4` (Falso).
- **Resultado:** **0**

e) `!(n - j)`
- **Avaliação:** `n - j` = `2 - 2` = `0`. Negativo/Negação lógica de zero: `!0` (Verdadeiro).
- **Resultado:** **1**

f) `!n - j`
- **Avaliação:** `!n` $\rightarrow$ `!2` = `0`. Em seguida: `0 - 2` = `-2`. Em C, qualquer valor diferente de zero em um contexto lógico/expressão inteira avalia como não-nulo, mas o resultado aritmético direto é `-2`.
- **Resultado:** **-2** *(Nota: Em termos de valor de expressão inteira é `-2`; se interpretado puramente como booleano, `-2` é considerado verdadeiro)*.

g) `i && j && k`
- **Avaliação:** `1 && 2 && 3` (Todos os operandos são diferentes de zero / verdadeiros).
- **Resultado:** **1**

h) `i || j - 3 && k`
- **Avaliação:** O operador `||` tem curto-circuito. Como `i` (1) é Verdadeiro, a expressão à direita nem precisa ser avaliada.
- **Resultado:** **1**

i) `i < j && 2 >= k`
- **Avaliação:** `1 < 2` (Verdadeiro / 1) e `2 >= 3` (Falso / 0). Logo: `1 && 0` (Falso).
- **Resultado:** **0**

j) `i == 2 || j == 4 || k == 5`
- **Avaliação:** `1 == 2` (0) $\rightarrow$ `2 == 4` (0) $\rightarrow$ `3 == 5` (0). Nenhuma condição é verdadeira.
- **Resultado:** **0**

---

#### Resumo dos Resultados Lógicos:
* **a)** `1`
* **b)** `0`
* **c)** `0`
* **d)** `0`
* **e)** `1`
* **f)** `-2`
* **g)** `1`
* **h)** `1`
* **i)** `0`
* **j)** `0`

6. **a)** Diferença de fluxo, atribuição e valores impressos

Operador Prefixado (++n): O valor da variável é incrementado em 1 antes que o seu valor seja utilizado na expressão de atribuição.

No Trecho A: n passa de 5 para 6 e, em seguida, o valor 6 é atribuído a x.

Valores impressos: Trecho A: n = 6, x = 6

Operador Pós-fixado (m++): O valor atual da variável é utilizado na expressão de atribuição antes que ela seja incrementada.

No Trecho B: o valor atual de m (5) é atribuído a y e, somente após a atribuição, m passa a ser 6.

Valores impressos: Trecho B: m = 6, y = 5

**b)** Explicação sobre a instrução printf("%d\t%d\t%d\n", n, n+1, n++);

Essa instrução invoca um Comportamento Indefinido (Undefined Behavior) no padrão da linguagem C:

Falta de Ponto de Sequência (Sequence Point): A linguagem C não especifica a ordem em que os argumentos de uma função (como o printf) devem ser avaliados.

Modificação Múltipla: Alterar a variável n via efeito colateral (n++) e ler o seu valor (n e n+1) dentro dos mesmos argumentos de chamada sem um ponto de sequência intermediário faz com que diferentes compiladores (GCC, Clang, MSVC) ou diferentes níveis de otimização produzam resultados totalmente inconsistentes e imprevisíveis.
