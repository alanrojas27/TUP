/*4. Dado el vector {10, 20, 5, 15, 30, 20}
- Informar el vector de la forma: "Indice: X, Valor: Y".
- Totalizar el vector e informar el total.
- Informar el contenido de las posiciones impares.
- Informar las posiciones que contienen números impares.
- Informar el mayor número.
- Informar cuántas veces aparece el número 20.*/
#include <stdio.h>
#include <stdlib.h>

void main(){
    int nums[] = {10, 20, 5, 15, 30, 20};
    int x = 0;
    int y = 0;
    int acum = 0;
    int impar = 0;
    int numMayor = 0;
    int acumVeinte = 0;
    //muestra indices y valor
    for (x = 0; x < 5; x++)
    {
        y = nums[x];
        printf("Índice: %i, Valor: %i\n", x, y);
    }
    //totalizacion
    for (x = 0; x < 5; x++)
    {
        acum = acum + nums[x];
    }
    printf("La suma de los numeros del array es %i\n", acum);

    //nums impares y posicion

    for (x = 0; x < 5; x++)
    {
        impar = nums[x] % 2;
        if (impar == 1)
        {
            printf("El numero impar es %i\n Y su indice es %i\n", nums[x], x);
        }
        
    }
    
    //num mayor

    for (x = 0; x < 5; x++){
        if (nums[x] > numMayor)
        {
            numMayor = nums[x];
        }
        
    }
    printf("El numero mayor es %i\n", numMayor);
    //num 20

    for (x = 0; x <= 5; x++){
        if (nums[x] == 20)
        {
            acumVeinte = acumVeinte + 1;
        }
        
    }
    printf("El numero 20 se repite %i veces\n", acumVeinte);

    system("pause");
}