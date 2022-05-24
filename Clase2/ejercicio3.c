/*3- Dado un número introducido por el usuario, indicar si este es positivo, negativo o nulo*/
#include <stdio.h>
#include <stdlib.h>

void main(){
    int num1;
    printf("Ingrese un numero\n");
    scanf("%d",&num1);
    if (num1 > 0){
        printf("El numero %i es positivo\n", num1);
    }else if(num1 == 0){
        printf("El numero %i es nulo\n", num1);
    }else{
        printf("El numero %i es negativo\n", num1);
    }
    
    system("pause");
}