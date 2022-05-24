#include <stdio.h>
#include <stdlib.h>
/*1. Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la
forma: “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante.*/

void main(){
    int num[5] = {5, 84, 3, 854, 30};
    int x;
    int y;

    for (x = 0; x < 5; x++)
    {
        y = num[x];
        printf("Índice: %i, Valor: %i\n", x, y);
    }
    
    system("pause");
}