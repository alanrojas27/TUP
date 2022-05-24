#include <stdio.h>
#include <stdlib.h>

void main(){
    int i;
    int j;
    for (i = 1; i <= 5; i++){
        for (j = 1; j <= 1; j++){
            printf("@@\n");
        }
        
        printf("@\n");
    }
    system("pause");
}