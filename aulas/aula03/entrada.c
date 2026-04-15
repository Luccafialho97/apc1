#include <stdio.h>

int main() {
    /* entrada de dados*/
    
    char tecla_pressinada;
    
    printf("pressione uma tecla:");
    scanf("%c", &tecla_pressinada);
    while(getchar() !='\n'); // limpar o buffer

    printf("voce pressionou a tecla %c\n", tecla_pressinada);


    int idade;
    printf("Informe a sua idade: ");
    scanf("%i", &idade);
    while(getchar() !='\n'); // limpar o buffer


    printf("voce tem %i anos\n", idade);

    float preco;
    printf("informe o preco da passagem:");
    scanf("%f", &preco);
    while(getchar()!='\n'); // limpar o buffer

    printf("O preco da passagem eh %.2f\n", preco);
    

    return 0;
}