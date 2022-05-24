#include <stdio.h>
#include <stdlib.h>

void main()
{
    int dni = 38632584;
    float nota = 7;

    int dniIngresado = 0;
    int intentos = 1;
    int ingresaCorrectamente = 0;

    do
    {
        printf("Ingrese su DNI: \n");
        scanf("%i", &dniIngresado);

        if (dniIngresado != dni)
        {
            ingresaCorrectamente = 1;
            intentos = intentos + 1;
            printf("DNI Invalido, recuerde que tiene 3 intentos\n");
        }

    } while (intentos <= 3 && ingresaCorrectamente == 1);

    do
    {
        if (dniIngresado == dni)
        {
            ingresaCorrectamente = 0;
            printf("Su nota es: %f\n", nota);
        }
        else
        {
            printf("Se han acabado sus intentos\n");
        }

    } while (intentos <= 3 && ingresaCorrectamente == 1);

    system("pause");
}
