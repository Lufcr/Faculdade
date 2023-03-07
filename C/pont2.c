#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

int main(){

    int x = 10;
    double y = 20.5;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    double soma = *pX + *pY;

    printf("X - Endereço: %i - Valor: %i\n", pX, *pX);
    printf("Y - Endereço: %i - Valor: %f\n", pY, *pY);
    printf("Z - Endereço: %i - Valor: %c\n", pZ, *pZ);
    printf("%f", soma);


    return 0;
}