# Lista de Exercícios — Capítulo 5: Funções (Parte I: Questões Teóricas)

**Disciplina:** Programação Imperativa e Funcional (PIF 2026.2)  
**Instituição:** CESAR School  
**Aluno:** Mateus Lacerda  

---

## Questão 01 — Anatomia de uma Função e o Papel do Protótipo

### a) Identificação e papel do protótipo, da chamada e da definição

No código apresentado, as três etapas da utilização da função `celsius()` são:

1. **Protótipo (declaração antecipada):**
   ```c
   float celsius(float);
   ```
   - **Papel:** Informa ao compilador, antes da função `main()`, a **assinatura** da função — isto é, seu nome (`celsius`), o tipo de dado que ela recebe como parâmetro (`float`) e o tipo de dado que ela devolve (`float`). O nome do parâmetro é opcional no protótipo.

2. **Chamada (invocação):**
   ```c
   c = celsius(f);
   ```
   - **Papel:** Solicita a execução da função `celsius` dentro da `main()`, passando o valor da variável `f` (`100.0`) como argumento. O fluxo de execução desvia para o corpo de `celsius`, aguarda o retorno do cálculo e atribui o resultado à variável `c`.

3. **Definição (implementação):**
   ```c
   float celsius(float fahr) {
       return (fahr - 32.0) * 5.0 / 9.0;
   }
   ```
   - **Papel:** Contém o cabeçalho completo (com o nome formal do parâmetro `fahr`) e o bloco de código que implementa de fato o comportamento da função, realizando a conversão de Fahrenheit para Celsius e devolvendo o resultado via `return`.

---

### b) Função do protótipo para o compilador e consequências da sua omissão

- **Função para o compilador:** Como a compilação em C ocorre sequencialmente (de cima para baixo), quando o compilador lê `c = celsius(f);` dentro da `main()`, ele ainda não chegou à definição de `celsius()` (que está depois da `main()`). O protótipo serve para que o compilador conheça previamente a interface da função, permitindo:
  - Verificar se a **quantidade** e os **tipos** dos argumentos passados na chamada são compatíveis com os parâmetros esperados (e aplicar conversões implícitas adequadas, se necessário);
  - Verificar se o **tipo do valor retornado** é compatível com o contexto onde a chamada é usada (neste caso, a atribuição a `float c`).

- **O que aconteceria se o protótipo fosse omitido e a função fosse definida depois da `main()`:**
  - **No padrão ANSI C (C89/C90):** Ao encontrar uma chamada sem declaração prévia, o compilador assume uma **declaração implícita**, presumindo que a função retorna `int` e desconhecendo totalmente sua lista de parâmetros. Consequentemente:
    1. **Ausência de verificação de parâmetros:** O compilador não conseguiria checar se o número ou o tipo dos argumentos está correto. Além disso, aplicaria as *promoções padrão de argumentos* (*default argument promotions*), promovendo `float` para `double` na chamada, o que causaria incompatibilidade com o parâmetro `float fahr` na definição (comportamento indefinido ou erro de leitura na pilha/registradores).
    2. **Conflito de tipo de retorno:** Ao chegar à definição `float celsius(float fahr)` após a `main()`, o compilador detectaria um conflito de tipos (havia assumido retorno `int`, mas a definição retorna `float`), gerando erro de compilação.
  - **Nos padrões modernos (C99 em diante):** Declarações implícitas foram removidas da linguagem. A omissão do protótipo antes da chamada provoca um erro (ou aviso severo tratado como erro em compiladores modernos) por uso de função não declarada, além do conflito de tipos ao encontrar a definição posterior.

---

### c) Tipo da função `celsius()` e determinação pelo valor retornado

- **Tipo da função:** O tipo de retorno da função `celsius()` é `float` (em termos rigorosos de tipo de função em C, sua assinatura completa é "função que recebe `float` e retorna `float`", sendo `float` o tipo da expressão gerada por sua chamada).
- **Por que o tipo é determinado pelo valor retornado e não pelos parâmetros:**  
  Em C, a chamada a uma função (`celsius(f)`) atua como uma **expressão** que produz um valor resultante no local onde foi invocada (como em `c = celsius(f);` ou `celsius(f) + 10.0`). Os parâmetros representam apenas os dados de **entrada** necessários ao processamento interno da função, enquanto o tipo escrito antes do nome da função indica o **tipo do resultado** que será entregue ao chamador. É com base nesse tipo de retorno que o compilador verifica se a expressão da chamada é compatível com atribuições, cálculos ou passagens para outras funções.

---

## Questão 02 — O Comando `return` e suas Limitações

### a) Quantidade de valores retornados, intenção do programador e operador vírgula

- **Quantos valores o `return` pode devolver:** Em C, uma função pode devolver **no máximo um único valor** (escalar, ponteiro ou `struct`) por meio do comando `return` — ou nenhum valor, no caso de funções `void`.
- **O que o programador pretendia fazer:** Na função `calcular()`, o programador pretendia retornar **dois valores simultaneamente** (`soma` e `media`).
- **Por que a abordagem não cumpre o objetivo:**  
  A instrução `return soma, media;` não retorna uma tupla ou par de valores. Em C, quando há uma vírgula separando expressões nesse contexto, ela atua como o **operador vírgula** (*comma operator*). O funcionamento do operador vírgula é:
  1. Avaliar a expressão à esquerda (`soma`);
  2. **Descartar** o resultado dessa avaliação;
  3. Avaliar a expressão à direita (`media`) e assumir o valor desta como o resultado final de toda a expressão.

  Portanto, `return soma, media;` equivale, na prática, a retornar **apenas `media`**, descartando `soma`.

---

### b) Efeito e obrigatoriedade de `return;` em funções `void`

- **Efeito em `imprime_mensagem()`:**  
  Quando `erro < 0`, a instrução `return;` executa uma **saída antecipada** (*early return*): ela interrompe imediatamente a execução da função `imprime_mensagem()` e devolve o controle do fluxo para a função chamadora, sem retornar nenhum valor. Com isso, o segundo `printf("Codigo processado: %d\n", erro);` não é executado para valores negativos.
- **Obrigatoriedade no final de uma função `void`:**  
  **Não é obrigatório.** Em uma função cujo tipo de retorno é `void`, ao atingir a chave de fechamento `}` do bloco da função, o retorno ao chamador ocorre automaticamente. O comando `return;` só é necessário em funções `void` quando se deseja encerrar a função antes do seu final lógico (como na validação de erro da função dada).

---

### c) Reescrita em duas funções separadas

Quando utilizamos apenas o valor de retorno do comando `return` (sem recorrer a ponteiros ou estruturas `struct`), precisamos de duas funções distintas porque cada chamada de função em C só pode produzir um único valor de retorno na expressão que a invoca. Assim, cada responsabilidade de cálculo que gera um resultado independente deve ser encapsulada em sua própria função.

```c
/* Protótipos das funções */
int calcular_soma(int a, int b, int c);
int calcular(int a, int b, int c);

/* Retorna apenas a soma dos três valores */
int calcular_soma(int a, int b, int c) {
    return a + b + c;
}

/* Retorna apenas a média inteira dos três valores */
int calcular(int a, int b, int c) {
    int soma = a + b + c;
    return soma / 3;
}
```
*(Observação: a função `calcular()` poderia inclusive reutilizar `calcular_soma(a, b, c) / 3;` caso desejado.)*

---

## Questão 03 — Funções `void`, Parâmetros e Assinaturas

### a) Classificação dos protótipos

1. **`void exibe_mensagem(char* msg);`**
   - **Parâmetros de entrada:** Possui **1 parâmetro de entrada** do tipo `char*` (ponteiro para caractere / string).
   - **Valor de retorno:** **Não possui** valor de retorno (`void`).

2. **`int obter_codigo(void);`**
   - **Parâmetros de entrada:** **Não possui** parâmetros de entrada (explicitado pelo `void` na lista de parâmetros).
   - **Valor de retorno:** Possui valor de retorno do tipo `int`.

3. **`void limpar_tela(void);`**
   - **Parâmetros de entrada:** **Não possui** parâmetros de entrada (`void`).
   - **Valor de retorno:** **Não possui** valor de retorno (`void`).

---

### b) Diferença prática entre função com retorno e procedimento (`void`)

- **Função com retorno:** Tem como foco principal **computar ou obter um dado** e entregá-lo de volta ao código chamador para que seja armazenado em uma variável ou usado em expressões posteriores.
  - *Exemplo adequado:* Uma função `double calcular_imc(double peso, double altura);` que calcula e devolve o índice de massa corporal para ser exibido, comparado ou armazenado pelo programa principal.
- **Procedimento (função `void`):** Tem como foco executar uma **ação ou efeito colateral** (como imprimir dados na tela, alterar o estado de dispositivos de saída, gravar em arquivo ou modificar dados via ponteiros), sem precisar devolver um valor resultante da operação.
  - *Exemplo adequado:* Uma função `void exibir_menu(void);` ou `void limpar_tela(void);`, cuja finalidade é apenas apresentar opções ao usuário ou limpar o console.

---

### c) Validade da chamada `x = limpar_tela();`

A chamada `x = limpar_tela();` **não é válida** e gera um **erro de compilação**.

**Justificativa:** O tipo de retorno da função `limpar_tela` é `void`, o que significa literalmente "ausência de tipo/valor". A função não produz nem devolve dado algum ao término de sua execução. Logo, não existe nenhum valor do lado direito do operador de atribuição `=` que possa ser atribuído à variável `x` (em C, não é permitido atribuir uma expressão de tipo `void` a uma variável de qualquer tipo).

---

## Questão 04 — Recursão: Caso Base, Passo Recursivo e Pilha de Execução

### a) Caso base, passo recursivo e remoção do caso base

No código:
```c
long fatorial(int n) {
    return ((n == 0) ? (long)1 : (long)n * fatorial(n - 1));
}
```

- **Caso base (condição de parada):**  
  Representado pela condição `n == 0`, que retorna diretamente `(long)1` sem realizar nenhuma nova chamada recursiva.
- **Passo recursivo:**  
  Representado pela expressão `(long)n * fatorial(n - 1)` (executada quando `n != 0`), que reduz o problema original em direção ao caso base chamando `fatorial` com `n - 1`.
- **O que aconteceria se o caso base fosse removido:**  
  A função entraria em **recursão infinita**. Para `fatorial(4)`, ela chamaria `fatorial(3)`, `fatorial(2)`, `fatorial(1)`, `fatorial(0)`, `fatorial(-1)`, `fatorial(-2)` e assim por diante, indefinidamente, sem jamais interromper as chamadas. Isso consumiria toda a memória reservada à pilha de execução, provocando um erro fatal conhecido como **estouro de pilha (*stack overflow*)** e encerrando o programa de forma abrupta.

---

### b) Rastreamento completo da chamada `fatorial(4)`

#### Fase 1 — Empilhamento (descida das chamadas)
Cada chamada fica suspensa aguardando o retorno da chamada subsequente:

1. `fatorial(4)`: `4 != 0` → aguarda `4L * fatorial(3)`
2. `fatorial(3)`: `3 != 0` → aguarda `3L * fatorial(2)`
3. `fatorial(2)`: `2 != 0` → aguarda `2L * fatorial(1)`
4. `fatorial(1)`: `1 != 0` → aguarda `1L * fatorial(0)`
5. `fatorial(0)`: `0 == 0` → **atinge o caso base** e retorna `1L` (`1`)

#### Fase 2 — Desempilhamento (resolução e retorno dos valores)
À medida que cada chamada conclui, seu quadro é removido da pilha e o valor devolvido alimenta a chamada anterior:

1. `fatorial(0)` devolve **`1`**
2. `fatorial(1)` calcula `(long)1 * 1` e devolve **`1`**
3. `fatorial(2)` calcula `(long)2 * 1` e devolve **`2`**
4. `fatorial(3)` calcula `(long)3 * 2` e devolve **`6`**
5. `fatorial(4)` calcula `(long)4 * 6` e devolve **`24`** (resultado final)

---

### c) Pilha de execução (*call stack*), *stack frames* e *stack overflow*

- **O que acontece na memória a cada chamada recursiva:**  
  Quando uma função é chamada em C, o sistema operacional/ambiente de execução aloca na região de memória chamada **pilha de execução (*call stack*)** um bloco denominado **registro de ativação** (*stack frame*). Esse *stack frame* armazena o endereço de retorno (para onde o programa deve voltar quando a função terminar), os parâmetros recebidos (uma nova cópia de `n` para cada chamada), as variáveis locais e valores temporários da expressão pendente (como o `(long)n` aguardando a multiplicação).  
  Na recursão, como uma chamada não termina antes de iniciar a próxima, um novo *stack frame* é empilhado sobre o anterior a cada nível de profundidade (`fatorial(4)` → `fatorial(3)` → ... → `fatorial(0)`). Apenas quando o caso base é alcançado os quadros começam a ser desempilhados e liberados, na ordem inversa (LIFO — *Last In, First Out*).

- **Por que a ausência de caso base causa *stack overflow*:**  
  A pilha de execução possui um **tamanho máximo finito** pré-alocado pelo sistema operacional para o processo. Em uma recursão sem caso base, novos *stack frames* são continuamente empilhados sem que nenhum seja desempilhado e liberado. Quando o espaço total da pilha é ultrapassado, ocorre o **estouro de pilha (*stack overflow*)** — uma violação de acesso à memória (como *Segmentation Fault* / *Stack Overflow Exception*) que faz o sistema operacional abortar a execução do programa.

---

## Questão 05 — Diretiva `#define`, Constantes e Macros com Argumentos

### a) Saída dos `printf` e uso de parênteses de proteção

- **Saída do primeiro `printf`:** `25`
- **Saída do segundo `printf`:** `8`

**Explicação do comportamento diferente:**  
As macros em C funcionam por **substituição textual literal** realizada pelo pré-processador antes da compilação, sem avaliar expressões previamente:

1. Em `SQR(2+3)`, a substituição gera:
   ```c
   ((2+3)*(2+3))
   ```
   Os parênteses protegem o parâmetro `x` contra problemas de precedência. Assim, primeiro somam-se `2+3` (`5`) em cada fator, resultando em `5 * 5 = 25`.

2. Em `DOBRO(2+3)`, como não há parênteses envolvendo `x` na definição `#define DOBRO(x) x*2`, a substituição literal gera:
   ```c
   2+3*2
   ```
   Pelas regras de **precedência de operadores** da linguagem C, a multiplicação (`*`) tem prioridade sobre a adição (`+`). Portanto, a expressão é avaliada como `2 + (3 * 2) = 2 + 6 = 8`, e não `(2 + 3) * 2 = 10`. Para evitar esse erro, a macro deveria ser escrita com parênteses de proteção ao redor do argumento e de toda a expressão: `#define DOBRO(x) ((x)*2)`.

---

### b) Ausência de ponto e vírgula no `#define` e convenção de maiúsculas

- **Por que `#define` não termina com ponto e vírgula:**  
  Porque `#define` é uma **diretiva do pré-processador**, e não uma instrução (*statement*) da linguagem C. Tudo o que for colocado após o nome da macro (exceto comentários) faz parte do texto de substituição. Se colocarmos um `;` ao final (ex.: `#define PI 3.14;`), o ponto e vírgula será copiado literalmente para o código onde a macro for utilizada, o que pode quebrar expressões válidas — por exemplo, `area = PI * r * r;` seria expandido para `area = 3.14; * r * r;`, gerando erro de sintaxe.

- **Por que usamos identificadores em maiúsculas por convenção:**  
  Usar letras maiúsculas (como `PI`, `SQR`, `DOBRO`) é uma convenção de boas práticas para **alertar o programador** de que aquele símbolo é uma macro ou constante simbólica do pré-processador, e não uma variável ou função comum. Isso ajuda a evitar armadilhas típicas de macros, como substituições textuais inesperadas, ausência de checagem de tipos e efeitos colaterais por múltipla avaliação de argumentos.

---

### c) Erro de espaço em `#define PRN (n)` e diferença entre macro e função

- **Por que `#define PRN (n) printf("%d", n)` está incorreto:**  
  Na sintaxe de macros com argumentos (*function-like macros*), **não pode haver nenhum espaço** entre o nome da macro e o parêntese de abertura `(`. Quando há espaço entre `PRN` e `(n)`, o pré-processador interpreta `PRN` como uma macro simples (sem parâmetros) cujo valor de substituição é `(n) printf("%d", n)`. Assim, uma chamada `PRN(10);` seria expandida para `(n) printf("%d", n)(10);`, provocando erro de compilação.
- **Forma correta:**
  ```c
  #define PRN(n) printf("%d", n)
  ```

- **Diferença entre macro com argumentos e função comum:**
  1. **Momento e mecanismo de atuação:** A macro é expandida textualmente pelo pré-processador *antes* da compilação (inserindo o código diretamente no local da chamada, sem *overhead* de salto e criação de *stack frame*); já a função é compilada uma única vez e invocada em tempo de execução por meio da pilha de chamadas.
  2. **Verificação de tipos e avaliação de argumentos:** Funções realizam **verificação estrita de tipos** dos argumentos e avaliam cada expressão passada **apenas uma vez** antes de entrar na função. Macros são **agnósticas a tipo** e substituem o argumento textualmente quantas vezes ele aparecer no corpo da macro — o que pode causar efeitos colaterais graves (por exemplo, `SQR(i++)` expande para `((i++)*(i++))`, incrementando `i` duas vezes em vez de uma).

---

## Questão 06 — Diretivas `#include`, `#undef` e Compilação Condicional

### a) Diferença entre `#include <stdio.h>` e `#include "areas.h"`

Ambas as diretivas inserem o conteúdo de outro arquivo no código-fonte durante o pré-processamento, mas diferem na **ordem e nos diretórios de busca**:

- **`#include <stdio.h>` (sinais de menor e maior `< >`):**  
  Instrui o pré-processador a procurar o arquivo apenas nos **diretórios padrão do sistema / do compilador** (e diretórios de inclusão explícitos configurados na compilação).  
  - *Quando usar:* Para cabeçalhos da **biblioteca padrão da linguagem C** (como `<stdio.h>`, `<stdlib.h>`, `<math.h>`) ou bibliotecas de terceiros instaladas globalmente no ambiente.

- **`#include "areas.h"` (aspas duplas `" "`):**  
  Instrui o pré-processador a procurar o arquivo **primeiro no diretório local** onde se encontra o arquivo-fonte atual (ou nos diretórios locais do projeto) e, somente se não encontrar, recorrer aos diretórios padrão do sistema.  
  - *Quando usar:* Para arquivos de cabeçalho **criados pelo próprio programador** ou pertencentes ao projeto específico que está sendo desenvolvido.

---

### b) Efeito de `#undef SOMA` e erro em `#undef SOMA(x,y)`

- **Efeito de `#undef SOMA`:**  
  Remove (cancela) a definição prévia da macro `SOMA`. A partir dessa linha, `SOMA` deixa de ser reconhecida como uma macro pelo pré-processador e volta a ser tratada como um identificador comum (podendo até ser redefinida com outro valor em seguida sem gerar aviso de redefinição).
- **Por que `#undef SOMA(x,y)` está incorreto:**  
  A diretiva `#undef` aceita **apenas o nome (identificador) da macro** a ser removida, sem parênteses e sem lista de parâmetros. Em C, macros não possuem sobrecarga por quantidade de parâmetros; o nome `SOMA` identifica unicamente a macro, portanto a forma correta é simplesmente `#undef SOMA`.

---

### c) Compilação condicional com `#ifdef DEBUG`

- **Mensagem impressa se `DEBUG` não foi definido:**  
  Será impressa a mensagem:
  ```text
  Modo normal
  ```
- **Em que momento essa decisão é tomada:**  
  A decisão é tomada na etapa de **pré-processamento** (em tempo de compilação, antes mesmo da geração do código objeto), e **não** em tempo de execução. Como `DEBUG` não foi definido por `#define DEBUG` (ou via flag do compilador como `-DDEBUG`), a diretiva `#ifdef DEBUG` resulta em falso; o pré-processador descarta o bloco `printf("Modo de depuracao\n");` e mantém apenas o bloco do `#else` (`printf("Modo normal\n");`).
- **Por que as diretivas não aparecem no executável final:**  
  As diretivas iniciadas por `#` (`#include`, `#define`, `#undef`, `#ifdef`, `#else`, `#endif`) pertencem à linguagem do **pré-processador C**, e não à linguagem C compilada diretamente em código de máquina. O pré-processador processa todas essas diretivas e entrega ao compilador um arquivo intermediário contendo apenas código C puro já expandido e filtrado (no caso, apenas `printf("Modo normal\n");`). Tanto as diretivas quanto as linhas pertencentes aos ramos condicionais descartados são completamente eliminadas antes da compilação e, portanto, nunca existem no executável binário final.
