/*Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y
un 10% si es menor. Validar que la venta sea mayor que 0, caso contrario informar
dicha situación.*/
#include <stdio.h>
#include <stdlib.h>

void main(){
    int venta;
    float descuento;
    float result;
    printf("Ingrese el valor de la venta\n");
    scanf("%d",&venta);
    if (venta >= 100000){
        descuento = (venta * 15) / 100;
        result = venta - descuento;
        printf("El precio total es %f con un 15 porciento de descuento\n", result);
    }else if(venta > 1 && venta < 100000){
        descuento = (venta * 10) / 100;
        result = venta - descuento;
        printf("El precio total es %f con un 10 porciento de descuento\n", result);
    }else{
        printf("Ingrese un valor correcto\n");
    }
    
    system("pause");
}