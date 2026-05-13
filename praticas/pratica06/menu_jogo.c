/*Exibir um menu de jogo com as opções: 1 - Novo jogo, 2 - Continuar jogo, 3 - Ver pontuação e
 4 - Sair. Ler a opção escolhida e exibir a mensagem correspondente. Caso a opção seja inválida, informar o usuário.*/
#include <stdio.h> 
int main() {
    int opcao;
    printf("  ================\n");
    printf("   MENU DO JOGO:\n");
    printf("  ================\n");
    printf("---------------------\n");
    printf("[ 1 - Novo jogo ]\n");
    printf("---------------------\n");
    printf("[ 2 - Continuar jogo ]\n");
    printf("---------------------\n");
    printf("[ 3 - ver pontuacao ]\n");
    printf("---------------------\n");
    printf("     [ 4 - Sair ]   \n");
    printf("---------------------\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1 :
    printf("Iniciando um novo jogo...\n");
    case 2:
    printf("Continuando o jogo anterior...\n");
    case 3:
    printf("Sua pontuacao atual e: ****\n");
    case 4:
    printf("Saindo do jogo...\n");
        /* code */
        break;
    
    default:
    printf("Opcao invalida! Por favor tente novamente\n");
        break;
    }




    return 0;
}