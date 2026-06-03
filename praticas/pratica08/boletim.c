/*Ler as notas de uma turma de 10 alunos, sendo 2 notas por aluno. Calcular a média de cada aluno e exibir o boletim de notas;*/

#include <stdio.h>

int main() {
    // Matriz de 10 alunos por 2 notas
    float notas[10][2];
    float medias[10];

    // Entrada de dados
    for(int i = 0; i < 10; i++) {
        printf("--- Aluno %d ---\n", i + 1);
        printf("Digite a Nota 1: ");
        scanf("%f", &notas[i][0]);
        printf("Digite a Nota 2: ");
        scanf("%f", &notas[i][1]);

        // Calcula a média do aluno atual
        medias[i] = (notas[i][0] + notas[i][1]) / 2.0f;
    }

    // Exibição do boletim de notas
    printf("\n================ BOLETIM DE NOTAS ================\n");
    printf("%-12s | %-7s | %-7s | %-7s\n", "Aluno", "Nota 1", "Nota 2", "Media");
    printf("--------------------------------------------------\n");
    for(int i = 0; i < 10; i++) {
        printf("Aluno %-6d | %-7.1f | %-7.1f | %-7.1f\n", i + 1, notas[i][0], notas[i][1], medias[i]);
    }
    printf("==================================================\n");

    return 0;
}