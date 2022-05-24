#include <stdio.h>
#include <stdlib.h>
void main(){
    float num = 0;
    float acum = 0;

    for (int i = 1; i <= 10; i++){
        do{
            printf("Ingrese el numero %i\n", i);
            scanf("%f", &num);
            if (num < 1){
                printf("Ingrese un numero mayor que 0\n");
            }else{
                acum = acum + num;
            }
        } while (num < 1);
    
    }
    
    printf("La suma de todos los numeros ingresados es de %f\n", acum);

    system("pause");
}