// Utilizar o operador sizeof() para imprimir o tamanho (em bytes) dos seguintes tipos: 
//char, short int, int, long int, long long int, float, double e long double;
#include <stdio.h>

int main() {
    printf("Tamanho dos tipos de dados (em bytes):\n");
    printf("char: %zu byte(s)\n", sizeof(char));
    printf("short int: %zu byte(s)\n", sizeof(short int));
    printf("int: %zu byte(s)\n", sizeof(int));
    printf("long int: %zu byte(s)\n", sizeof(long int));
    printf("long long int: %zu byte(s)\n", sizeof(long long int));
    printf("float: %zu byte(s)\n", sizeof(float));
    printf("double: %zu byte(s)\n", sizeof(double));
    printf("long double: %zu byte(s)\n", sizeof(long double));

    return 0;
}