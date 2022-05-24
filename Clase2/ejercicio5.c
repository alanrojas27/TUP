/*Escriba un programa que pida ingresar un número y a continuación escriba en la
consola si el mismo es par o impar.*/
#include <stdio.h>
#include <stdlib.h>

void main(){
    int num1;
    int resultado;
    printf("Ingrese un numero\n");
    scanf("%d",&num1);
    resultado = num1 % 2;
    if (resultado == 0){
        printf("El numero %i es par\n", num1);
    }else{
        printf("El numero %i es impar\n", num1);
    }
    
    system("pause");
}