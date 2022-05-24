#include <stdio.h>
#include <stdlib.h>


void main(){
    double venta = 0;
    int dni = 0;
    int metodoPago = 0;
    int tipoTarjeta = 0;
    int cantidadDeCuotas = 0;
    int cantDeVentas = 0;
    int i;
    double acum = 0;

    printf("Ingrese la cantidad de ventas\n");
    scanf("%i", &cantDeVentas);
    for (i = 1; i <= cantDeVentas; i++){
        printf("Ingrese el monto de la venta\n");
        scanf("%d", &venta);
        printf("Ingrese su DNI\n");
        scanf("%d", &dni);
        if (dni < 99999999 && dni > 1000000){
            printf("Elegir metodo de pago.\n1-Efectivo\n2-Tarjeta de credito\n");
            scanf("%d", &metodoPago);
            if(metodoPago == 1){
                printf("Usted abona en efectivo y no tiene recargo\n");
            }
            else if(metodoPago == 2) {
                printf("Seleccione su tarjeta de credito\n1-Visa\n2-American Express\n3-Mercado Pago\n4-Cabal\n");
                scanf("%d", &tipoTarjeta);
                printf("Seleccione la cantidad de cuotas. Recuerde que pueden ser 1, 3, 6 o 12\n");
                scanf("%d", &cantidadDeCuotas);
                if (cantidadDeCuotas == 1){
                    printf("Usted selecciono 1 cuota y no tiene recargo\n");
                }else if(cantidadDeCuotas == 3){
                    printf("Usted selecciono 3 cuotas y tiene recargo de 4%%\n");
                    venta = venta + (venta * 0.4);
                }else if(cantidadDeCuotas == 6){
                    printf("Usted selecciono 6 cuotas y tiene recargo de 8%%\n");
                    venta = venta + (venta * 0.8);
                }else if(cantidadDeCuotas == 12){
                    printf("Usted selecciono 12 cuotas y tiene recargo de 8%%\n");
                    venta = venta + (venta * 0.8);
                }else{
                    printf("Ingrese un valor correcto\n");
                }
            
            }else{
                printf("Ingrese una opcion valida\n");
            }
            
            /*datos de la compra*/
            printf("DNI: %d\n", dni); //dni
            switch (metodoPago){                        //metodo de pago
            case 1:
                printf("Pago en efectivo. Total %d\n", venta);
                break;
            case 2:
                printf("Pago con tarjeta\n");
            }
            switch (tipoTarjeta){           //tarjeta con la que paga el usuario
            case 1:
                printf("Visa\n");
                break;
            case 2:
                printf("American Express\n");
                break;
            case 3:
                printf("Mercado Pago\n");
                break;
            case 4:
                printf("Cabal\n");
                break;
            }
            
            switch (cantidadDeCuotas){
            case 1:
                printf("Usted abona en una sola cuota y su total es de %d\n", venta);
                break;
            case 3:
                printf("Usted abona en 3 cuotas y su total es de %d\n", venta);
                break;
            case 6:
                printf("Usted abona en 6 cuotas y su total es de %d\n", venta);
                break;
            case 12:
                printf("Usted abona en 12 cuotas y su total es de %d\n", venta);
                break;
            }
        

        }else{
            printf("Ingrese un DNI valido\n");
        }
        acum = acum + venta;
    }
        
        printf("El total de las ventas es %d\n", acum);
    
        system("pause");
}