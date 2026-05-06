/*Ler a idade de uma pessoa e classificar como: criança (0-12 anos), 
adolescente (13-17 anos), adulto (18-64 anos) e idoso (65+ anos);*/
#include <stdio.h>
int main() {
     int idade = 0;
    printf("Entre com a sua idade:\n");
    scanf("%i", &idade);

    int eh_uma_criança >= 12;
    if (eh_uma_criança) {
        printf("com %i anos voce e uma criança.\n")/
    }

    int eh_um_adolescente_de_13_anos < 13;
    int eh_um_adolescente_de_18_anos > 18;
    int eh_adolescente_que_18_anos = !eh_adolescente_que_13_anos;
    if(eh_um_adolescente_de_13_anos && eh_um_adolescente_de_18_anos) {
        printf("Com %i anos voce e um adolescente\n")
    }

    int eh_um_adulto_de_18 <= 18;
    int eh_um_adulto_de_64 >= 63;
    if(eh_um_adulto_de && eh_um_adulto_de) {
        printf("Com %i anos voce e um adulto.\n");
    }

    int eh_um_idoso <= 64;
    if( eh_um_idoso) {
        printf("Com %i anos voce e um idoso\n");
    }



    return 0;
}