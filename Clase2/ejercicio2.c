#include <stdio.h>
#include <stdlib.h>

void main(){
    int num1;
    int num2;
    printf("Ingrese el primer numero\n");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero\n");
    scanf("%d",&num2);
    if (num1 > num2){
        printf("El numero " "%i" " es mas grande que " "%i\n", num1, num2);
    }else if(num2 == num1){
        printf("Los numeros son iguales\n");
        
    }else{
    printf("El numero %i es mas grande que %i\n", num2, num1);
    }
    
    system("pause");
}