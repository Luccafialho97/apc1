// Definir a constante PI (3.14159265) utilizando #define e o número de Euler (2.71828182) utilizando const. 
//Em seguida, imprimir os valores dessas constantes. Tente alterar o valor da constante declarada com const 
//para observar o erro gerado pelo compilador;
#include <stdio.h>

// Definindo a constante PI com #define
#define PI 3.14159265

int main() {
    // Definindo o número de Euler com const
    const double EULER = 2.71828182;

    // Imprimindo os valores
    printf("Constante PI (#define): %.8f\n", PI);
    printf("Constante de Euler (const): %.8f\n", EULER);

    // Se você tentar descomentar a linha abaixo, o compilador gerará um erro:
    // EULER = 3.0; 

    return 0;
}