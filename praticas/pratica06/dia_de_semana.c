/* Ler um número correspondente ao dia da semana (1 a 7) e informar se é: dia útil ou final de semana;*/
#include <stdio.h>
int main() {
    int dia;
    printf("Qual o dia de hoje:\n");
    scanf("%i", &dia);
    if (dia == 1) {
    printf("segunda-feira (dia util)\n");
  } 
   else if(dia == 2) {
    printf("terca-feira (dia util)\n");
  } 
   else if (dia == 3) {
    printf("Quarta-feira (dia util)\n");
  } 
   else if(dia == 4 ) {
    printf("Qinta-feira (dia util)\n");
  } 
   else if (dia == 5) {
    printf("Sexta-feira (dia util)\n");
  } 
   else if (dia == 6) {
    printf("Sabado (fim de semana)\n");
  } 
   else if (dia == 7) {
    printf("domingo (fim de semana)\n");
  }    

    return 0;
}