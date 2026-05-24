#include <stdio.h>
    /*
    incremento (++)
    pré-incremento ++a (a ganha 1 e vira outro numero e y recebe o valor de a )
    pós-incremento a++
    decremento (--)
    pré-decremento --a
    pós-decremento a--
    */
int main() {
    int a = 5;
    int b = 5;
 
    //pre-incremento ++B
    printf("PRE-INCREMENTO( a = ++b)\n");
    printf("vamos iniciar A: %d  e  B: %d\n", a,b );
    a = ++b;
    printf("no pre incremento o valor de b somara (b+1) , VALOR de B SERA =%d \n E A recebera o valor da soma de (B+1) e o valor de  A SERA = %d\n",b,a);

    printf("ezecução\n");
    printf("a: %d\n",a);
    printf("b: %d\n",b);
     printf("---------------\n");

    //pos-incremento ++B
    printf("Pos-INCREMENTO( a = b++)\n");
    printf("vamos iniciar A: %d  e  B: %d\n", a,b );
    a = b++;
    printf("no pos incremento o valor de b atribui a A (A=B) O valor de A SERA=%d  \n E o valor de B somara 1 (B+1) e valor de B SERA = %d\n",a,b);
   
    printf("ezecução\n");
    printf("a: %d\n",a);
    printf("b: %d\n",b);
    printf("---------------\n");
     //pre-Decremento --B
    printf("PRE-DECREMENTO ( a = --b)\n");
    printf("vamos iniciar A: %d  e  B: %d\n", a,b );
    a = --b;
    printf("no pre incremento o valor de b subtrai 1 (b-1), o valor de B valera=%d \n E A recebera o valor da subtração (A = subtração de B) e o valor de A = %d\n",b,a);
   
    printf("ezecução\n");
    printf("a: %d\n",a);
    printf("b: %d\n",b);
    printf("---------------\n");
    //pos-decremento --B
    printf("Pos-DECREMETN( a= b--)\n");
    printf("vamos iniciar A: %d  e  B: %d\n", a,b );
    a = b--;
    printf("no POS-ECREMETNOo A RECEBE O VALOR DE B (A=B) O valor de A SERA =%d LOGO EM SEGUIDA \n  O valor de B SUBTRAIRA  -1 e valor de b (B-1) PASSARA A VALER B= %d\n",a,b);

    printf("ezecução\n");
    printf("a: %d\n",a);
    printf("b: %d\n",b);
    printf("---------------\n");


    
    return 0;
}