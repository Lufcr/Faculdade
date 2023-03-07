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

    struct horario agora;

        agora.horas = 13;
        agora.minutos = 20;
        agora.segundos = 45;

    struct horario depois;

        depois.horas = agora.horas + 7;
        depois.minutos = agora.minutos + 10;
        depois.segundos = agora.segundos - 20;

    printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);

    printf("%i:%i:%i", depois.horas, depois.minutos, depois.segundos);


    return 0;
}