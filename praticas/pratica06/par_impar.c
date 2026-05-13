#include <stdio.h>
/*Ler um número inteiro e informar se ele é par ou impar;*/
int main() {
    int numero;
    printf("Numero inteiro:\n");
    scanf("%i", &numero);
    if ( numero % 2 == 0) {
        printf("o numero %i e um par.\n", numero);
    }
    else {
        printf("O numero %i e impar.\n", numero);
    }


 return 0;
}