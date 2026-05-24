#include <stdio.h>
int main (){
    /*
    incremento (++)
    pré-incremento ++a (a ganha 1 e vira outro numero e y recebe o valor de a )
    pós-incremento a++ ( depois que a vareavel passar seu valor, ela incrementa 1)
    decremento (--)
    pré-decremento --a(vou diminuir da segunda vriavel primeiro e depois atribuir o resultado na primeira variavel)
    pós-decremento a--(vou diminuir da segunda variavel só depois)

    são usados para aumentar ou diminuir o valor de uma variavel em uma unidade 

    pré e pós incremento: a diferença é na ordem em que o computador lê o código.

    O pós-incremento: funciona como se o ++ estivesse em uma linha de código separada, lá na frente.
    
    O sinal de igual (=) joga fora o valor antigo de y e coloca o novo resultado no lugar. É uma substituição.

    */
    int numero1 = 1, resultado;

printf("Antes O NUMERO1 VALE: %d\n", numero1);
//numero1 = numero1 + 1;
//numero1 += 1;

//Pos incremento:
//resultado = numero1;
//numero1++;
resultado = numero1++;
printf(" resultado = numero1++;\n");
printf(" - Resultado : %d - numero1: %d\n", resultado,numero1);

printf("Antes O NUMERO1 VALE: %d\n", numero1);
resultado = ++numero1;
printf(" resultado = ++numero1;\n");
printf(" - Resultado : %d - numero1: %d\n", resultado,numero1);

printf("Antes O NUMERO1 VALE: %d\n", numero1);
resultado = --numero1;
printf(" resultado = --numero1;\n");
printf(" - Resultado : %d - numero1: %d\n", resultado,numero1);
    
printf("Antes O NUMERO1 VALE: %d\n", numero1);
resultado = numero1--;
printf(" resultado = numero1--;\n");
printf(" - Resultado : %d - numero1: %d\n", resultado,numero1);



     
    


    return 0;
}