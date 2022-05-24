#include <stdio.h>
#include <stdlib.h>

void main(){
    int mes;
    printf("Ingrese un numero del 1 al 12 \n");
    scanf("%d", &mes);
    switch (mes){

    case 1 : printf("enero\n");
        break;
    case 2 : printf("febrero\n");
        break;
    case 3 : printf("marzo\n");
        break;
    case 4 : printf("abril\n");
        break;
    case 5 : printf("mayo\n");
        break;
    case 6 : printf("junio\n");
        break;
    case 7 : printf("julio\n");
        break;
    case 8 : printf("agosto\n");
        break;
    case 9 : printf("septiembre\n");
        break;
    case 10 : printf("octubre\n");
        break;
    case 11 : printf("noviembre\n");
        break;
    case 12 : printf("diciembre\n");
        break;
    
    default: printf("Ingrese un numero valido\n");
        break;
    }

    system("pause");
}