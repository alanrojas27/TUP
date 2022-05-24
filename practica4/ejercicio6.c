//6. Leer por consola notas hasta que el usuario lo indique e informar su suma y promedio

#include <stdio.h>
#include <stdlib.h>

void main(){
    int notasIngresadas = 0;
    float acum = 0;
    int confirm = 0;
    float promedio = 0;
    do
    {
        printf("Ingrese su nota\n");
        scanf("%f", &acum);
        notasIngresadas++;
        printf("Ingrese 1 para dejar de agregar notas\n O ingrese cualquier numero para seguir agregando\n");
        scanf("%i", &confirm);
    } while (confirm <= 0 || confirm >= 2);

    promedio = acum / notasIngresadas;

    printf("El promedio total de las notas es %f\n", promedio); 
    system("pause");
}