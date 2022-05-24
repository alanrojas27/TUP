#include <stdio.h>
#include <stdlib.h>
void main(){
    int i;
    int result = 0;
    int acum = 0;
    for (i = 1; i <= 10; i++){
        result = i * 3;
        acum = acum + result;
        printf("%i\n", acum);
    }

    system("pause");
}