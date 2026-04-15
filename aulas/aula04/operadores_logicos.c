#include <stdio.h>
int main() {
    int idade;

    printf("Entre com a sua idade:");
    scanf("%i", &idade);
    while(getchar() != '\n');

    // && => 0 Falso e qualquer coisa = Sempre Falso
    printf("voce eh uma crinca? %i", idade >= 0 && idade <= 12);

    // || => 1 Verdadeira OU qualquer coisa = Sempre Verdadeiro
    printf("Voce tem prioridade para vacinar? %i\n", idade<= 6 || idade >= 60);

    // ! => NAO Verdadeiro = Falso, NAO Falso = verdadeiro
    printf("Voce naum pode votar? %i\n", !(idade >= 16));


    return 0;
}