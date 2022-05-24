/*3. Declarar un array de tipo entero de 5 componentes, asignarles un valor por consola,
mostrar cuántas veces se repite el número 5.*/
#include <stdio.h>
#include <stdlib.h>

void main(){
    int nums[5];
    int x = 0;
    int y = 0;
    int contador = 0;

    for (x = 0; x < 5; x++)
    {
        printf("Ingrese un numero\n");
        scanf("%i",&y);
        nums[x] = y;
    }
    
    for (x = 0; x < 5; x++)
    {
        if (nums[x] == 5)
        {
            contador++;
        }
        
    }
    
    printf("El numero 5 se repite %i veces\n", contador);
    system("pause");
    
}
