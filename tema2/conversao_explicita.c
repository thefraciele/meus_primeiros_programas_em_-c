#include <stdio.h>
int main() {
    int a = 10;
    int b = 3;
    float quociente = (float)a / b; // Conversão explícita de 'a' para float
    //se não colocar (float) a divisão será feita entre inteiros e o resultado será um inteiro, ou seja, 3, e não 3.33
    printf ("quociente: %.2f\n", quociente);

    return 0;
}