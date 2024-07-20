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