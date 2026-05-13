/*Ler a idade de uma pessoa e classificar como: criança (0-12 anos), 
adolescente (13-17 anos), adulto (18-64 anos) e idoso (65+ anos);*/
#include <stdio.h>
int main() {
     int idade;
    printf("Entre com a sua idade:\n");
    scanf("%i", &idade);

    if (idade <= 12) {
        printf("com %i anos voce e uma criança.\n", idade);
    }
    else if (idade >= 13 && idade <= 17) {
        printf("Com %i anos voce e um adolescente.\n", idade);
    }
    else if (idade >= 18 && idade <= 64) {
        printf("Com %i anos voce e um adulto.\n", idade);
    }
    else {
        printf("com %i anos voce e um idoso.\n", idade);
    }



    return 0;
}