#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>



int main(){

    struct horario
    {
        int horas;
        int minutos;
        int segundos;   

    };

    struct horario agora, *depois;
    depois = &agora;

    depois->horas = 20;
    depois->minutos = 50;
    depois->segundos = 30;

    printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);
    printf("%i:%i:%i", depois->horas, depois->minutos, depois->segundos);



    return 0;
}