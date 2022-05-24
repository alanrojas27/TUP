/*Se tiene el dni de un alumno y una nota correspondiente a su parcial. Requerir al
usuario ingresar el dni del alumno. Evaluar si el dni ingresado es igual al que se tiene
almacenado. Permitir ingresar un dni incorrecto hasta 3 veces como máximo. Si el
usuario ingresa el dni de manera correcta, mostrar en la consola la nota del alumno.*/

#include <stdio.h>
#include <stdlib.h>
void main(){

    int dni = 38632584;
    float nota = 7;

    int dniIngresado = 0;
    int intentos = 1;
    int ingresaCorrectamente = 0;

    printf("Ingrese su dni\n");
    scanf("%i",&dniIngresado);

    if (dniIngresado == dni)
    {
        ingresaCorrectamente = 1;
        printf("Su nota es: %i\n", nota);
    }else{
        while (intentos <= 3 || ingresaCorrectamente != 1)
        {
            
        }
    }
    
    
    
    
    
    
    

}