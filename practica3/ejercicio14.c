#include <stdio.h>
#include <stdlib.h>

void main(){
    int numUser;
    int i;
    int j;
    printf("Ingrese un numero\n");
    scanf("%i", &numUser);
    for (i = 1; i <= numUser; i){
        for (j = 1; j <= numUser; j++){
            printf("%i", j);
        }
        numUser--;
        printf("\n");
            
        

    }
    system("pause");
}
