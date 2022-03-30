#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int cateto1;
    int cateto2;
    int hipotenusa;
    int perimetro;
    int superficie;
    printf("Ingrese el tama%co del primer cateto\n", 164);
    scanf("%d",&cateto1);
    printf("Ingrese el tama%co del segundo cateto\n", 164);
    scanf("%d",&cateto2);
    cateto1 = cateto1 * 2;
    cateto2 = cateto2 * 2;
    hipotenusa = cateto1 + cateto2;
    hipotenusa = sqrt(hipotenusa);
    printf("La hipotenusa es:%d\n", hipotenusa);
    perimetro = cateto1 + cateto2 + hipotenusa;
    printf("El per%cmetro es:%d\n", 161, perimetro);
    superficie = cateto1 * cateto2 / 2;
    printf("La superficie es:%d\n", superficie);
    system("pause");
    return 0;
}