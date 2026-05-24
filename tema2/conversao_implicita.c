#include <stdio.h>
int main (){
    int A = 10;
    float B = 3.5;
    float resultado = A + B; // "A" é convertido implicitamente para float (a conversão implicita pode tere algus problemas como perca de dados, se fosse ao contrario, ou seja indo de um número flutuante para um inteiro)

    //conversão explicita é o que chamamos de casting formar a conversão de um dado para outro tipo de dado

    printf ("resultado : %.2f\n", resultado);

    return 0:
}