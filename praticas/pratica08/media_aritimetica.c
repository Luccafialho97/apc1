/*Ler n números inteiros e armazená-los em um vetor. Calcular e exibir a média aritmética dos números;*/

#include <stdio.h>

int main() {
    int n;

    printf("Digite a quantidade de numeros (n): ");
    scanf("%d", &n);

    // Validação simples para evitar vetores de tamanho inválido
    if (n <= 0) {
        printf("Quantidade invalida.\n");
        return 0;
    }

    int numeros[n];
    int soma = 0;

    // Leitura dos n números
    for(int i = 0; i < n; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    // Cálculo da média aritmética (com cast para float para não perder as casas decimais)
    float media = (float)soma / n;

    printf("\nA media aritmetica dos numeros e: %.2f\n", media);

    return 0;
}