#include <stdio.h>

int main (){
    int num_1 = 5;
    int *p1 = NULL;
    int *p2= NULL; //é necessário colocar NULL, pois pode gerar comportamentos inesperados
    printf("%p \n", p1);
    printf("%p \n", p2);

    p2= &num_1;
    printf(" o endereco de p1: %p \n", p1);
    //printf(" o valor de p1: %i \n", *p1); Não foi executado a partir daqui, pois como eu vou mostrar o valor de um ponteiro que não aponta para nada????? segmentin fould

    *p2 =num_1;
    printf(" o endereco de p2: %p \n", p2);
    printf(" o valor de p2: %i \n", *p2);

    p1 = p2;
    
    printf(" o endereco de p1: %p \n", p1);
    printf(" o valor de p1: %i \n", *p1);

    num_1 = 9;

    printf(" o endereco de p1: %p \n", p2);
    printf(" o valor de p1: %i \n", *p2);

    return 0 ;
}