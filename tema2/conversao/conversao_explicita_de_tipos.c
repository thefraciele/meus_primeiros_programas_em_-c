#include <stdio.h>
int main() {  
    float numero1 = 10.2;
    int numero2 = 10;
    // Conversão explícita de tipos

    printf("numero1 > numero2: %d\n", (int)numero1 > numero2); // Convertendo numero1 para int antes da comparação quando adiciona (int) antes da variável, isso é chamado de "casting" e indica que queremos tratar a variável como um tipo diferente para a operação específica.
    
    printf("numero1 == numero2: %d\n", (int)   numero1 == numero2); // Convertendo numero1 para int antes da comparação

    return 0;

}