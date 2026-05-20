#include <stdio.h>
int main(){
    //primeiro vou solicitar os dados do aluno:

    char nome[20];
    int idade;
    float cpf;
    float numero;

    //agora vou soliciatr os dados do curso
    char curso[30];
    char semestre[20];
    char turno[20];
    float matricula;

    printf("Olá seja bem vindo ao portal do aluno!!! Precisamos de alguns dados para proceguir com seu atendimento!!\n");
    //primeira mensagem que aparece ao iniciar o programa


    printf("Digite seu primeiro nome:\n");
    scanf("%s", nome);

    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    printf("Digite o número do seu CPF:\n");
    scanf("%f", &cpf);

    printf("Digite o seu numero de telefone pessoal:\n");
    scanf("%f", &numero);
    //primeira etapa das perguntas

    printf("Agora umas informações sobre o seu curso.\n");
    printf("Digite o nome do curso que você está estudando atualmente:\n");
    scanf("%s", curso);

    printf("Em qual semestre você está ?\n");
    scanf("%s", semestre);

    printf("Digite seu turno tarde ou noite: \n");
    scanf("%s", turno);

    printf("Digite o seu número de matrícula:\n");
    scanf ("%f", &matricula);
    //segunda parte das perguntas

    printf("SUAS INFORMAÇÕES SÃO:");

    printf("Seu nome é: %s\n", nome);
    printf("Idade: %d\n", &idade);
    printf("CPF: %f\n", &cpf);
    printf("Número de telefone: %f\n", &numero);

    printf("---------------------------\n");

    printf("AS INFORMAÇÕES DO SEU CURSO SÃO:\n");

    printf("Seu curso é: %s\n", curso);
    printf("Matrícula: %f", &matricula);
    printf("você está no: %s ", semestre);
    printf("turno: %s", turno);

    return 0;


}