#include <stdio.h>
#include <stdlib.h>
void main(){
    int i;
    int resultado;
    int acum = 0;
    for (i = 1; i <= 20; i++){
        resultado = i % 2;
        if (resultado == 1)
        {
            acum = acum + i;
                    printf("%i\n", acum);
        }
        
        
        }
    system("pause");
}