#include <stdio.h> 
int main () {
    int idade; //aqui eu defino o tipo da minha variavel que é um número inteiro
    float altura;
    char nome[20];
    char letra;

    printf("Digite sua idade:\n"); 
    // aqui não apenas mostramos algo na tela (eu não preciso colocar um especificador de formato aqui porque ele funciona como um placeholder)

    scanf("%d", &idade);
    // pegue o que foi digitado na tela e salve na memória 
      
    printf("Sua idade é: %d\n", idade);
    //printf("%d", idade); o %d significa (pegue o número da memoria e mostre na tela)

    printf("digite sua altura:\n");
    scanf("%f", &altura);
    printf("Sua altura é: %.2f\n", altura);

    printf("Digite apenas seu primeiro nome:\n");
    scanf("%s", nome);
    printf("Seu nome é: %s\n", nome);
    //a linguagem #C indentifica o espaço como uma finalização assim como enter então dessa forma não da pra fazer um nome composto

    printf("Digite sua letra favorita:");
    scanf(" %c", &letra);
    printf("Sua letra favorita é:%c\n", letra);



    return 0;
}