// Declarar variáveis para armazenar a idade, o sexo (M ou F), a altura (ex.: 1.75f) e o peso (ex.: 72.845) de uma pessoa e,
// em seguida, imprimir todos esses valores utilizando os especificadores de formato corretos;
#include <stdio.h>
int main{
    int idade = 25;
    char sexo = M; 
    float altura = 1.75f;
    double peso = 72.845;
    printf("dados da pessoa:\n");
    printf("Idade: %d anos\n ",  idade);
    printf("sexo: %c\n", sexo);
    printf("altura: %.2f m\n ", altura);
    printf("peso: %.3f kg\n", peso);


    return 0;
}