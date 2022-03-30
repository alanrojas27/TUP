#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int lado1;
    int lado2;
    int diagonal;
    int perimetro;
    int superficie;
    printf("Ingrese el tama%co del primer lado del rectangulo\n", 164);
    scanf("%d",&lado1);
    printf("Ingrese el tama%co del segundo lado del rectangulo\n", 164);
    scanf("%d",&lado2);
    lado1 = lado1 * 2;
    lado2 = lado2 * 2;
    diagonal = lado1 + lado2;
    diagonal = sqrt(diagonal);
    printf("La diagonal es:%d\n", diagonal);
    perimetro = lado1 + lado2;
    printf("El per%cmetro es:%d\n", 161, perimetro);
    superficie = lado1 * lado2;
    printf("La superficie es:%d\n", superficie);
    system("pause");
    return 0;
}


/*5- El usuario debe poder ingresar los lados de un rectángulo y el programa calcula con
esos datos la diagonal principal del rectángulo, superficie y perímetro. Mostrar al
usuario los resultado*/