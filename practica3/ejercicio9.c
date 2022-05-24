#include <stdio.h>
#include <stdlib.h>

void main(){
    int i;
    int resultado;
    int j;

    for (i = 1; i <= 10; i++){
        for (j = 1; j <= 10; j++){
            resultado = i * j;
                    printf("%i x %i = %i\n",i, j, resultado);
        }
        printf("\n");
    }
    system("pause");
}