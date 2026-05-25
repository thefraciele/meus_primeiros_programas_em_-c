// esses exemplos a seguir são exemplos de iniciações de variaveis iniciar uma variavel significa adicionar um valor que eu saiba e que eu tenho controle sobre ela, quando não se inicializa uma variavel nela vai  conter um valor qualquer chamado de lixo que causara problemas futuros
#include <stdio.h>

int main () {
    int idade = 25;
    int IDADE; // fazer uma variavel com mesmo o mesmo nome só que com a letra maiuscula cria uma nova variavel 
    int quantidade = 1;
    float altura = 1.75; //Casas Decimais	Aproximadamente 6 a 7 dígitos

    double peso = 54.3; //Aproximadamente 15 a 17 dígitos de decimais

    char letra = 'a';
    char nome[20]; // se eu quiser escrever um nome preciso fazer esse tipo de declaração com um valor dentro do colchete
    int _teste;
    int teste_2; // na hora de nomear a variaveis elas não podemos começar (primeiro caracter) com números, mas os números podem ser escritos no final da palavra assim como nesse exemplo, errado seria ex: 5teste

    quantidade = 10; //aqui eu não estou inicializando a variavel eu estou agregando um  novo valor a ela, anteriormente (linha 7) eu iniciei com o valor 1
}