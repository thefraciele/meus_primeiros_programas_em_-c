#include <stdio.h>
int main() {
    int x = 5;
    float y = 5.0;
    char z = 'a';

    printf("x >= y: %d\n", x >= y);
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    printf("x >= z: %d\n", x >= z);
    printf("o valor ASCII de %c é: %d\n", z, z);// %c sigifica que queremos imprimir o caractere, e %d significa que queremos imprimir o valor inteiro correspondente ao caractere (o valor ASCII).


    return 0;
}