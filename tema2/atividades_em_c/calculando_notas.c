#include <stdio.h>
int main(){
    float nota1, nota2, nota3;
    float media;
    printf("*********** PROGRAMA PARA CALCULAR A MÉDIA DE 3 NOTAS ***********\n");
    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota:\n");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    printf("A média das notas é: %.2f\n", media);
    //eu uso casting para garantir que a divisão seja feita com números de ponto flutuante, mesmo que as notas sejam inteiras. Assim, o resultado da média será mais preciso, incluindo casas decimais, em vez de truncar para um número inteiro. ou eu poderia declarar as variáveis nota1, nota2 e nota3 como float desde o início, o que também garantiria que a divisão seja feita com números de ponto flutuante. Dessa forma, não seria necessário usar casting na hora de calcular a média.
    return 0;
}