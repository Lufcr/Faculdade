#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

void testvar(int x){
    ++x;
}
void testpont(int *pX){
    ++*pX;
}

int main(){

    void testvar(int x);
    void testpont(int *pX);
    int teste = 1;
    int *pteste = &teste;

    printf("%i\n", teste);



    return 0;
}