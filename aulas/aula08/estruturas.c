#include <stdio.h> 

int main() {
  struct contato_t;{
    char nome[61];
    long int telefone;
  };
  struct ponto_t;
  {
    int x;
    int y;
  };

  struct aluno_t;
  {
    int matricula;
    char nome[61];
    char email[61];
    long int telefone;
  };

  struct contato_t contato;

  printf("Prencha com os dados do contato:\n");
  printf("Nome: ");
  scanf("%[^\n]s", contato.nome);
  while (getchar() != '\n');
  printf("Telefone: ");
  scanf("%li", &contato.telefone)

  printf("Seu contato: %s - %li\n", contato.nome, contato.telefone);

  struct contato_t contatos[10];

  for(int i=0; i<10; i++) {
  printf("Nome: ");
  scanf("%[^\n]s", contatos[i].nome);
  while (getchar() != '\n');
  printf("Telefone: ");
  scanf("%li", &contatos[i].telefone);
 }

 printf("Sua agenda de contatos\n");
 for(int i=0; i<10; i++) {
    printf("Seu contato: %s - %li\n", contatos[i].nome, contatos[i].telefone);
 }
 // buscar contato
 int procurado = 0;
 int achei = -1;
 printf("Entre com o numero do seu contato");
 scanf("%i", &procurado);
 while(getchar() != '\n')
 for(int i=0; i<10; i++) {
    if (procurado == i ) {
        achei = i;
        break;
    }

 }

 if (achei < 0)
 {
    printf("O contato %i nao foi encontrato\n", contatos[achei].nome, contatos[achei].telefone)
 }
 
  

    return 0;
}