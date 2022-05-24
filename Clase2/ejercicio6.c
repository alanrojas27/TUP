/*Leer una nota de un alumno por consola e informar la condición del mismo. (menor
que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). Validar
que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar “Nota
inválida”.*/
#include <stdio.h>
#include <stdlib.h>

void main(){
    int notaAlumno;
    printf("Ingrese un numero\n");
    scanf("%d",&notaAlumno);
    if (notaAlumno < 4 && notaAlumno >= 1){
        printf("El alumno esta Reprobado\n");
    }else if (notaAlumno < 6 && notaAlumno > 3){
        printf("El alumno es Regular\n");
    }else if (notaAlumno >= 6 && notaAlumno <= 10) {
        printf("El alumno esta Promocionado\n");
    }else if (notaAlumno >= 11) {
            printf("Ingrese un valor correcto\n");
    }else{
            printf("Ingrese un valor correcto\n");
    }
    
    system("pause");
}