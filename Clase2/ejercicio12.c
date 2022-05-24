/*12- Realizar un programa que permita registrar los datos para una venta de $4600. Para
ello, se le pedirá al usuario que ingrese su DNI, validar que dicho número no sea menor
que 1000000 ni mayor que 99999999. Luego, requerir al usuario que seleccione el
medio de pago: 1-Efectivo, 2-Tarjeta de crédito, si selecciona tarjeta, pedir que ingrese
una opción de las siguientes: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal.
Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 12). El interés por
pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas y 8% para
6 y 12 cuotas. Validar que todos los datos ingresados por el usuario sean correctos, en
caso contrario informar la situación y finalizar programa. Por último, presentar un
resumen de la operación, por ejemplo:*/

#include <stdio.h>
#include <stdlib.h>


void main(){
    int venta = 4600;
    int dni = 0;
    int metodoPago = 0;
    int tipoTarjeta = 0;
    int cantidadDeCuotas = 0;
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

        system("pause");
}