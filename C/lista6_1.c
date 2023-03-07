#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

 

typedef struct{
    int dia;
    int mes;
    int ano;
}data;

void inicio(data *pdata, int dia, int mes, int ano){
    pdata->dia = dia;
    pdata->mes = mes;
    pdata->ano = ano;

    return;
};

int valida(data pdata){
    int verif;
    
    if (pdata.dia > 31 || pdata.dia < 1 || pdata.mes > 12 || pdata.mes < 1 || pdata.ano < 1){
        verif = 1;
    } else if (pdata.dia == 29 && pdata.mes == 2 && pdata.ano %4 == 0) {
        verif = 0;
    } else if (pdata.dia >= 29 && pdata.mes == 2){
        verif = 1;
    } else if (pdata.dia > 30 && (pdata.mes == 4 || pdata.mes == 6 || pdata.mes == 9 || pdata.mes == 11)){
        verif = 1;
    } else {
        verif = 0;
    }

    return verif; 
};

    void imprimir(data pdata){
        printf("%i/%i/%i\n", pdata.dia, pdata.mes, pdata.ano);
        return;
};

int main(){

    int verif;

    data pdata;
    int dia, mes, ano;

    printf("Dia:\n");
    scanf("%i", &dia);
    printf("Mês:\n");
    scanf("%i", &mes);
    printf("Ano:\n");
    scanf("%i", &ano);

    inicio(&pdata, dia, mes, ano);

    verif = valida(pdata);
    if (verif == 1){
        printf("Data inválida\n");
    } else{
        imprimir(pdata);
    }
    
    
    system("pause");
    return 0;
}