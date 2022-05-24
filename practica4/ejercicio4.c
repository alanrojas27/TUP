#include <stdio.h>
#include <stdlib.h>
void main(){
    float promedioTotal = 0;
    int cantAlumnos = 0;
    int cantParciales = 0;
    int notaAlumno = 0;
    int notaAlumnoTotal = 0;
    float promedioAlumno = 0;
    float promedioAcum = 0;

    printf("Ingrese la cantidad de alumnos\n");
    scanf("%i", &cantAlumnos);
    printf("Ingrese la cantidad de parciales\n");
    scanf("%i", &cantParciales);

    for (int i = 1; i <= cantAlumnos; i++){
        printf("Alumno %i\n", i);
        for (int j = 1; j <= cantParciales; j++){
            printf("Ingrese la nota %i del alumno\n", j);
            scanf("%i", &notaAlumno);
            do{
                if (notaAlumno < 1 || notaAlumno > 10){
                    printf("Ingrese una nota entre 1 y 10\n");
                    scanf("%i", &notaAlumno);
                }else{
                    notaAlumnoTotal = notaAlumnoTotal + notaAlumno;
                }
            } while (notaAlumno < 1 || notaAlumno > 10);
        }
        promedioAlumno = notaAlumnoTotal / cantParciales;
        printf("El promedio total del alumno es %f\n", promedioAlumno);
        promedioAcum = promedioAcum + promedioAlumno;
        notaAlumnoTotal = 0;
    }
    promedioTotal = promedioAcum / cantAlumnos;
    printf("El promedio general del curso es %f\n", promedioTotal);

    system("pause");
}