/*Ingresar el tiempo trabajado por un contador y considerando que el valor de la hora es
de 800 pesos, calcular su sueldo e imprimirlo*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    const int valorHora = 800;
    int cantHoras;
    int sueldo;
    printf("Ingresar cantidad de horas trabajadas\n");
    scanf("%d",&cantHoras);
    sueldo = valorHora * cantHoras;
    printf("El sueldo es de :%d\n", sueldo);
    system("pause");
    return 0;
}