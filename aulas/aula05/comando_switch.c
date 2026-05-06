#include <stdio.h>
int main() [
  int nota =0;
  printf("Entre uma nota de 1 a 5:\n")  
  scanf("%i", &nota)
  if (nota == 1) {
    printf("ganhou uma estrela  *\n");
  } else if(nota == 2) {
    printf("ganhou duas estrela  **\n");
  } else if (nota == 3) {
    printf("ganhou tres estrela  ***\n");
  } else if(nota == 4 ) {
    printf("ganhou quatro estrela  ****\n");
  } else if (nota == 5) {
    printf("ganhou cinco estrela  *****\n");
  } else if (nota == 6) {
    printf("ganhou seis estrela  ******\n");
  }

  switch (nota)
  {
  case 1: printf("ganhou uma estrela *\n");break;
  case 2: printf("ganhou duas estrela **\n");break;
  case 3: printf("ganhou tres estrela  ***\n");break;
  case 4: printf("ganhou quatro estrela  ****\n");break;
  case 5: printf("ganhou cinco estrela  *****\n");break;

  
  default:printf("nota invalida! Tente novamente.\n");
    
  }




    return 0;
]