//Declarar variáveis para armazenar o número de países (195), o número de idiomas (7100), a população mundial (8274065924) 
//e a proporção áurea (1.61803398874989484820) e, em seguida, imprimir esses valores utilizando os especificadores de formato corretos.
#include <stdio.h>

int main() {
    // Escolha de tipos baseada na magnitude e precisão dos dados
    int numero_paises = 195;
    short int numero_idiomas = 7100;
    long long int populacao_mundial = 8274065924LL;
    long double proporcao_aurea = 1.61803398874989484820L;

    // Impressão utilizando os especificadores de formato adequados
    printf("Numero de paises: %d\n", numero_paises);
    printf("Numero de idiomas: %d\n", numero_idiomas);
    printf("Populacao mundial: %lld\n", populacao_mundial);
    
    // %.20Lf exibe até 20 casas decimais para o tipo long double
    printf("Proporcao aurea: %.20Lf\n", proporcao_aurea); 

    return 0;
}