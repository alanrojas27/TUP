/*Escriba un programa que leyendo el tipo de vehículo, tipo de horario de congestión alta o baja
y el número de pasajeros, calcule la tarifa que le debe cobrar a un vehículo. Validar que el tipo
de vehículo sea uno de los mencionados y que el número de pasajeros no sea mayor a 5.*/
#include <stdio.h>
#include <stdlib.h>

void main(){
    int tipoVehiculo = 0;
    char horario;
    int cantPasajeros = 0;
    int valorPeaje = 0;

    printf("Ingrese el tipo de horario de congestion.\n a-alta\n b-baja\n");
    scanf("%c", &horario);
    printf("Ingrese el tipo de vehiculo.\n 1-Automovil\n 2-Camion\n 3-Motocicleta\n");
    scanf("%d", &tipoVehiculo);


    if (horario == 'a' || horario == 'A'){
        printf("Cuantos pasajeros tiene el vehiculo?\n");
        scanf("%d", &cantPasajeros);
        if (cantPasajeros >= 3 && cantPasajeros <=5){
            switch (tipoVehiculo)
            
            {
            case 1: valorPeaje = 0;
                    printf("El valor del peaje es de $%i \n", valorPeaje);
                break;
            case 2: valorPeaje = 300;
                    printf("El valor del peaje es de $%i \n", valorPeaje);
                break;
            case 3: valorPeaje = 150;
                    printf("El valor del peaje es de $%i \n", valorPeaje);
            default: printf("Ingrese una opcion correcta\n");
                break;
            }
        }else{
            switch (tipoVehiculo)
            
            {
            case 1: valorPeaje = 250;
                    printf("El valor del peaje es de $%i \n", valorPeaje);
                break;
            case 2: valorPeaje = 300;
                    printf("El valor del peaje es de $%i \n", valorPeaje);
                break;
            case 3: valorPeaje = 150;
                    printf("El valor del peaje es de $%i \n", valorPeaje);
            default: printf("Ingrese una opcion correcta\n");
                break;
            }
        }
        }else if(horario == 'b' || horario == 'B'){
            switch (tipoVehiculo)
            
            {
            case 1: valorPeaje = 150;
                    printf("El valor del peaje es de $%i \n", valorPeaje);
                break;
            case 2: valorPeaje = 200;
                    printf("El valor del peaje es de $%i \n", valorPeaje);
                break;
            case 3: valorPeaje = 0;
                    printf("El valor del peaje es de $%i \n", valorPeaje);
            default: printf("Ingrese una opcion correcta\n");
                break;
            }
        }else{
            printf("Ingrese una opcion correcta\n");
        }
            system("pause");
}