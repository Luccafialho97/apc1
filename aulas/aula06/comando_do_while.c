#include <stdio.h>
int main() {
    int numero = 0;
    do
    {
        printf("Entre com numero entre 1 e 10: ");
        scanf("%i", &numero)
    } while (getchar() != '\n');
    
    

    return 0;
}