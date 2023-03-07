#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

int main(){

    int x = 10;
    int *ponteiro;
    ponteiro = &x;

    int y = 20;
    *ponteiro = y; 

    printf("%i, %i\n", x, y);

    return 0;
}