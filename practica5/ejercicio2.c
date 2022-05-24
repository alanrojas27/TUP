#include <stdio.h>
#include <stdlib.h>
/*2. Declarar un array de tipo entero de 5 componentes, asignarles un valor, mostrar la
suma de sus componentes y el promedio.*/
void main(){
    int nums[5] = {1, 7, 9, 4, 2};
    int x = 0;
    int acum = 0;
    float promedio = 0;

    for (x = 0; x < 5; x++)
    {
        acum = acum + nums[x];
    }
    printf("La suma de los numeros del array es %i\n", acum);

    promedio = acum / 5;
    printf("El promedio del array es %f\n", promedio);
    system("pause");
}