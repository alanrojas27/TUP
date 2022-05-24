/*- Ingresar por teclado tres números, determinar cuál es el mayor y visualizarlo en
pantalla.*/
#include <stdio.h>
#include <stdlib.h>

void main(){
    int num1;
    int num2;
    int num3;
    printf("Ingrese el primer numero\n");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero\n");
    scanf("%d",&num2);
    printf("Ingrese el tercer numero\n");
    scanf("%d",&num3);
    if(num1 > num2 && num1 > num3){
            printf("El numero %i es mayor que %i y %i\n", num1, num2, num3);
    }else if(num2 > num1 && num2 > num3){
            printf("El numero %i es mayor que %i y %i\n", num2, num1, num3);
    }else{
            printf("El numero %i es mayor que %i y %i\n", num3, num2, num1);
    }

    system("pause");

}