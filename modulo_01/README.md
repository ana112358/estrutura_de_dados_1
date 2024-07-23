## Variáveis e memória RAM

Quando declaramaos uma variável em C,ela possui uma identidade, entre elas:

- Nome "a
- Valor "10"
- Tipo "int"
- Endereço "&a"

    O valor que o programa nos mostra quando printamos o endereço é o valor inicial do endereço de memória alocado.
Para cada tipo é necessário uma determinada quantidade de espaço alocado,  como por exemplo um inteiro que necessita de 4 bytes.

## Introdução a ponteiros

Uma variável que armazena o endereço de memória de outra variável.

Todo endereço de memória(ponteiro) ocupa 8bytes de memória.

```c
    #include <stdio.h>

    int main(){
        int *p1 = NULL;
        return 0;
    }
```
O NULL significa dizer que não está apontando para lugar nenhum.


## Tipos abstratos de dados

### O que são?

Especificação + implementação

- Especificação (arquivo de cabeçalho .h)
    Sintaxe () - Assinatura 
    Semântica 

- Implementação (arquivo .c)
    Representação (Estrutura de dados, int , float ou outra estrutura)
    Agoritmo (Como vai ser implementado?)

Os programas ou outras TADs que utilizam seu TAD devem incluir sua especificação : #include "seu_tad.h"

Quando colocamos a estpecificação ` #include <stdio.h>` estamos incluindo uma especificação que foi incluida quando baixamo o C no computador


### Vantagens do TAD

1 - Abstração de detalhes da implementação

2 - Facilidade de manutenção:
    Mudanças na implementaçãodo TAD não aferam o código fonte dos programas que o utilizam (ocultamento de informações)
    > Imagine sembre que for utilizar um programa em C ter que implementa o algorítmo por traz do pintf().

3 - Corretude:
    Códigos testados em diferentes contextos.

Ele é definido como um modelo matemático por meio dee um par (valores , operações ):

- valores: Tipor os números reais
- operações : {+,-,x,/,=, ...}


### A definição de uma TAD permite:

- Separação entre conceito(definição do tipo) e implementação das operações.

- Limitar a visibilidade da estrutura interna do TAD.

- Controlar a visibilidade das operações pegante o usuário que passa a ser cliente do TAD.

### Algumas diretrizes para projetar um TAD eficiente são:

- Escolher as operações adequadas, definindo claramente o comportamento de cada uma delas

- Projetar operações flexíveis e suficientemente abrangentes para os diversos conteextos de uso do TAD

- Implementar eficientemente cada operação definida

- Reutilizar operações básicas para eaborar outras mais complexas

### Implementação 

A definição de uma TAD é conceitual, não há imposição quanto a implementação.

Cada linguagem de programação possui seus próprios padrões de como implementar uma TAD.

 - Sabe-se que um TAD:
    - A definição dos tipos abstratos de dados e de suas operações (ou sua repesentação ) são contidas em uma única unidade sintática;
    - A representação deve ocultar detalhes da implementação, exibindo apenas as operações que estão disponíveis para manipular aquele tipo de dado.

- Para criar um TAD na linguagem C, convenciona-se preparar dois 
arquivos distintos:

 - tad.h
 - tad.c
