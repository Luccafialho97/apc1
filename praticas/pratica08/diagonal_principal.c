/*Ler uma matriz 3x3 e imprimir apenas os elementos da diagonal principal.*/

#include <stdio.h>

int main() {
    int matriz[3][3];

    // Leitura da matriz 3x3
    printf("Digite os elementos da matriz 3x3:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Impressão dos elementos da diagonal principal
    printf("\nElementos da diagonal principal:\n");
    for(int i = 0; i < 3; i++) {
        // Apenas o elemento correspondente à linha e coluna iguais
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    return 0;
}