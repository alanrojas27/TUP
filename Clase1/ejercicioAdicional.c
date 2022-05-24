#include <stdio.h>
#include <stdlib.h>

int main(){
    const int valorHora = 800;
    int cantHoras;
    int sueldo;
    int sueldoConPorcentaje;
    printf("Ingresar cantidad de horas trabajadas\n");
    scanf("%d",&cantHoras);
    sueldo = valorHora * cantHoras;
    if (cantHoras > 30) {
            sueldoConPorcentaje = sueldo * 10 /100;
            sueldoConPorcentaje = sueldoConPorcentaje + sueldo;
            printf("El sueldo es de :%d\n", sueldoConPorcentaje);
    }else{
            printf("El sueldo es de :%d\n", sueldo);
    }
    system("pause");
    return 0;
}