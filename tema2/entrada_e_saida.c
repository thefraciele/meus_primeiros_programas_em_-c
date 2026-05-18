#include <stdio.h>
int main() {
    int idade =22;
    float altura =1.70;
    char opcao = 'S';
    char nome[20] =  "franciele";

    printf("A idade da %s é: %d\n", nome,  idade);
    printf("a altura é: %.2f\n", altura);
    printf("a opcao é: %c\n", opcao);
    /*os especificadores (%) servem para especificar como a informação deve aparecer na tela no terminal do usuario 
    %d:imprime um inteiro no formato padrão
    %i: equivalente a %d
    %f:imprime um número de ponto flutuante no formato padrão
    %e: imprime um número um número de ponto flutuante na notação cientifica
    %c:imprime um único caractere.
    %s: imprime uma cadeia de (string) de caracteres.

    */
     
    return 0;
}
