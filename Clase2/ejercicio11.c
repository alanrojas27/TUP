#include <stdio.h>
#include <stdlib.h>

void main(){
    int num1;
    int num2;
    int opcion;
    printf("Ingrese el primer numero \n");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero \n");
    scanf("%d", &num2);
    int suma = num1 + num2;
    int resta = num1 - num2;
    int multi = num1 * num2;
    int divi = num1 / num2;
    printf("Elija una opcion\n1. Informar su suma\n2. Informar su resta\n3. Informar su multiplicacion\n4. Informar su división\n5. Salir\n");
    scanf("%d",&opcion);
    switch (opcion){
    case 1 : printf("La suma es %d\n", suma);
        break;
    case 2 : printf("La resta es %d\n", resta);
        break;
    case 3 : printf("La multiplicacion es %d\n", multi);
        break;
    case 4 : printf("La division es %d\n", divi);
        break;
    case 5 : printf("Gracias, vuelva pontossss\n");
        break;
    default: printf("Ingrese un numero valido\n");
        break;
    }

    system("pause");
}