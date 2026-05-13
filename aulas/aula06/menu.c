#include <stdio.h>
int main() {
    printf(" MENU PRINCIPAL\n");
    printf("1- Consultor saldo\n");
    printf("2- Recarregar\n");
    printf("3- Ver mensagens\n");
    printf("4- ver ligacoes\n");
    printf("5- Sair\n");
    printf("Escolha uma opcao > ");

    int opcao = 0;
    scanf("%i", &opcao);
    while (getchar() != '\n');

    switch (opcao)
    {
    case 1:printf("Seu saldo eh R$ 10,00.\n");
    case 2:printf("Escolha entre 10, 20 e 50\n")
    case 3:printf("voce nao tem mensagens.\n")
    case 4:printf("Ultimas ligacoes: 9999-9999\n")
    case 5:printf("Obrigado pelo contato! ate logo.\n");
    default:printf("Opicao invalida! Tente novamente.\n")
    
    }
  while (opcao != 5);
  {}
  
    

    return 0;
}