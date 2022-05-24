#include <stdio.h>
#include <stdlib.h>

void main(){
    int numsIngresados = 0;
    float acum = 0;
    do
    {
        printf("Ingrese un numero. Ingrese 0 para dejar de agregar numeros\n");
        scanf("%f", &acum);
        numsIngresados++;
    } while (acum != 0);
}