#include <stdio.h>
#include <stdlib.h>
/*15. Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones.
Mostrar el promedio por alumno y el promedio general.*/

void main(){
    double calif = 0;
    double acum = 0;
    double promedioTotal = 0;
    int i;
    int j;
    for (i = 1; i <= 5; i++){
        printf("Alumno %i\n", i);

        for (j = 1; j <= 3; j++){
        printf("Ingrese la nota del alumno\n");
        scanf("%d",&calif);
        acum = acum + calif;
        }
        acum = acum / 3;
        printf("El promedio del alumno es %d\n", acum);
        promedioTotal = promedioTotal + acum;
    }
    promedioTotal = promedioTotal / 5;
    printf("El promedio total es es %d\n", promedioTotal);
    
    system("pause");

}