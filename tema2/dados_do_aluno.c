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

    //primeira mensagem que aparece ao iniciar o programa
    printf("----------------------------------------------------------\n");
    printf("Olá seja bem vindo ao portal do aluno!!!\n Precisamos de alguns dados para proceguir com seu atendimento!!\n");
    printf("-----------------------------------------------------------\n");


    printf("Digite seu primeiro nome:\n");
    scanf("%s", nome);

    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    printf("Digite o número do seu CPF:\n");
    scanf("%f", &cpf);

    printf("Digite o seu numero de telefone pessoal:\n");
    scanf("%f", &numero);
    //primeira etapa das perguntas

    printf("Digite o nome do seu curso:\n");
    scanf("%s", curso);

    printf("Digite em qual semestre está:\n");
    scanf("%s", semestre);

    printf("Digite em qual turno você faz as aulas:\n");
    scanf("%s", turno);

    printf("Digite o seu número de matrícula:\n");
    scanf ("%f", &matricula);
    //segunda parte das perguntas

    printf("-------------------------------------------------\n");

    printf("SUAS INFORMAÇÕES SÃO:\n");

    printf("NOME: %s\n", nome);
    printf("IDADE: %d\n", &idade);
    printf("CPF: %f\n", &cpf);
    printf("TELEFONE: %f\n", &numero);

    printf("CURSO: %s\n", curso);
    printf("MATRÍCULA: %f\n", &matricula);
    printf("SEMESTRE: %s\n", semestre);
    printf("TURNO: %s\n", turno);
    printf("----------------------------------------------\n");

    return 0;


}