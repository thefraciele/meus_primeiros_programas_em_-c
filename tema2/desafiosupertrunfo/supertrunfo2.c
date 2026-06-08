#include <stdio.h>
int main(){

    //variaveis DA PRIMEIRA CARTA
    char letra1;
    char codigo1[20];
    char cidade1[20];
    float area1;
    float pib1;
    int turismo1;
    unsigned long int populacao1; // Adicionado: tipo ideal para grandes populações
    float densidade1; // Adicionado para o cálculo
    float pibpercapita1; // Adicionado para o cálculo

    //variaveis DA SEGUNDA CARTA
    char letra2;
    char codigo2[20];
    char cidade2[20];
    float area2;
    float pib2;
    int turismo2;
    unsigned long int populacao2; // Adicionado: tipo ideal para grandes populações
    float densidade2; // Adicionado para o cálculo
    float pibpercapita2; // Adicionado para o cálculo

    //pedindo os dados da primeira carta
    printf("====================================\n");
    printf("CADASTRO DA PRIMEIRA CARTA\n");
    printf ("====================================\n");

    printf("Digite a letra da primeira carta: ");
    scanf("%c", &letra1);

    printf("Digite o codigo da primeira carta use uma letra e dois números: ");
    scanf("%s", codigo1);

    printf("Digite a cidade da primeira carta: ");
    scanf("%s", cidade1);

    printf("Digite a area da primeira carta: ");
    scanf("%f", &area1);

    printf("Digite o pib da primeira carta: ");
    scanf("%f", &pib1);

    printf("Digite a populacao da primeira carta: ");
    scanf("%lu", &populacao1);

    printf("Digite a quantidade de pontos turisticos da primeira carta: ");
    scanf("%d", &turismo1);

    // CÁLCULOS DA PRIMEIRA CARTA
    densidade1 = (float)populacao1 / area1;
    pibpercapita1 = pib1 / (float)populacao1;


    //pedindo os dados da segunda carta
    printf("====================================\n");
    printf("CADASTRO DA SEGUNDA CARTA\n");
    printf ("====================================\n");

    printf("Digite a letra da segunda carta: ");
    scanf(" %c", &letra2);

    printf("Digite o codigo da segunda carta use uma letra e dois números: ");
    scanf("%s", codigo2);

    printf("Digite a cidade da segunda carta: ");
    scanf("%s", cidade2);

    printf("Digite a area da segunda carta: ");
    scanf("%f", &area2);

    printf("Digite o pib da segunda carta: ");
    scanf("%f", &pib2);

    printf("Digite a populacao da segunda carta: ");
    scanf("%lu", &populacao2);

    printf("Digite a quantidade de pontos turisticos da segunda carta: ");
    scanf("%d", &turismo2);

    // CÁLCULOS DA SEGUNDA CARTA
    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = pib2 / (float)populacao2;


    //exibindo os dados da primeira carta
    printf("====================================\n");
    printf("DADOS DA PRIMEIRA CARTA\n");
    printf ("====================================\n");
    printf("Letra: %c\n", letra1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", turismo1);
    printf("Densidade Demográfica: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);

    //exibindo os dados da segunda carta
    printf("====================================\n");
    printf("DADOS DA SEGUNDA CARTA\n");
    printf ("====================================\n");
    printf("Letra: %c\n", letra2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", turismo2);
    printf("Densidade Demográfica: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);

    return 0;
}