#include <stdio.h> 
int main () {
    int idade; //aqui eu defino o tipo da minha variavel que é um número inteiro

    printf("Digite sua idade:\n"); 
    // aqui não apenas mostramos algo na tela (eu não preciso colocar um especificador de formato aqui porque ele funciona como um placeholder)

    scanf("%d", &idade);
    // pegue o que foi digitado na tela e salve na memória 
      

    printf("Sua idade é: %d", idade);
    //printf("%d", idade); o %d significa (pegue o número da memoria e mostre na tela)

    return 0;
}