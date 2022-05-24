#include <stdio.h>
#include <stdlib.h>

void main(){
    int i;
    int resultado;
    int n1 = 0;
    printf("Ingrese un numero para ver su tabla\n");
    scanf("%i",&n1);

    for (i = 1; i <= 10; i++){
        resultado = i * n1;
        printf("%i x %i = %i\n", n1, i, resultado);
    }
    system("pause");
}