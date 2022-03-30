/*- Ingresar el valor de la hora y el tiempo trabajado por un comerciante, calcular su
sueldo e imprimirlo*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int valorHora;
    int horaPorDia;
    int sueldo;
    printf("Ingresar el valor de la hora\n");
    scanf("%d",&valorHora);
    printf("Ingrese la cantidad de horas trabajadas en el dia\n");
    scanf("%d",&horaPorDia);
    sueldo = valorHora * horaPorDia;
    printf("El sueldo diario es de :%d\n", sueldo);
    system("pause");
    return 0;
}