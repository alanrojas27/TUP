#include <stdio.h>
#include <stdlib.h>

void main(){
    int i;
    int j;
    for (i = 1; i <= 10; i++){
        
        for (j = 10; j >= i; j--){
            printf("@");
            
        }
        printf("\n");
        

    }
    system("pause");
}
