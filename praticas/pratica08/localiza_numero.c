/*Ler 10 números inteiros e armazená-los em um vetor. Em seguida, 
ler um número adicional e localizar sua posição no vetor. Caso o número não seja encontrado, informar que ele não está no vetor;*/

#include <stdio.h>

int main() {
    int vetor[10];
    int numero_busca;
    int encontrado = 0; // Variável flag (falsa por padrão)

    // Leitura dos 10 números inteiros
    printf("Digite 10 numeros inteiros:\n");
    for(int i = 0; i < 10; i++) {
        printf("Posicao [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    // Leitura do número adicional para busca
    printf("\nDigite um numero para localizar no vetor: ");
    scanf("%d", &numero_busca);

    // Varredura para localizar a posição
    for(int i = 0; i < 10; i++) {
        if(vetor[i] == numero_busca) {
            printf("O numero %d foi encontrado na posicao (indice): %d\n", numero_busca, i);
            encontrado = 1; // Marca como encontrado
        }
    }

    // Se a flag continuar em 0, significa que percorreu tudo e não achou
    if(!encontrado) {
        printf("O numero %d nao esta no vetor.\n", numero_busca);
    }

    return 0;
}