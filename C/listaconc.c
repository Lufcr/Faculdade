#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

struct lista{
    int valor;
    struct lista *prox;
};

struct lista *proc(struct lista *plista, int valor){

    while(plista != (struct lista *) 0){
       if(plista->valor == valor){
            return(plista);
       } else{
            plista = plista->prox;
       }
    }
    return (struct lista *) 0;
};

int main(){

    struct lista *proc(struct lista *plista, int valor);
    struct lista m1, m2, m3;
    struct lista *resultado, *gancho = &m1;
    int x;

    m1.valor=5;
    m2.valor=10;
    m3.valor=15;

    m1.prox=&m2;
    m2.prox=&m3;
    m3.prox=0; 

    printf("DIGITE O VALOR DA PESQUISA: \n");
    scanf("%i", &x);

    resultado = proc(gancho, x);

    if (resultado == (struct lista *) 0){
        printf("Valor n encontrado.\n");
        
    } else {
        printf("Valor %i encontado\n", resultado->valor);
    }

    return 0;
}