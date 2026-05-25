#include <stdio.h>
int main() {
 char produtoA[30] = "Produto A";
 char produtoB[30] = "Produto B";

 unsigned int estoqueA = 1000;

 unsigned int estoqueB = 2000;

 float valorA = 10.50;
 float valorB = 20.40;

 unsigned int estoqueminimoA = 500;
    unsigned int estoqueminimoB = 2500; 

    double valortotalA;
    double valortotalB;

    int resultadoA;
    int resultadoB;

    printf ("produto %s tem estoque de %u unidades e valor unitário de R$ %.2f\n", produtoA, estoqueA, valorA);
    printf ("produto %s tem estoque de %u unidades e valor unitário de R$ %.2f\n", produtoB, estoqueB, valorB);

    //Tenho duas possiblidades posso fazer a comparação e armazenar o resoltado dessa comparação e depois imprimir ou posso fazer a comparação diretamente dentro do printf.

    // comparação valor minimo de estoque
    resultadoA = estoqueA > estoqueminimoA; // comparação do estoque do produto A com o estoque mínimo

    resultadoB = estoqueB > estoqueminimoB; // comparação do estoque do produto B com o estoque mínimo

    printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA); 
    printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);

    //comparação dos valores totais dos produtos
    printf("o valor do %s (R$%.2f) é maior que o valor do %s (R$%.2f)? %d\n", produtoA, valorA, produtoB, valorB, valorA > valorB);


    return 0;



}
