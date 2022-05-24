/*8- Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo
sea mayor o igual que el importe a retirar.
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int saldoUsuario = 50000;
    int importeRetirado;

    printf("Ingrese el monto a retirar. Recuerde que usted dispone de  %d\n", saldoUsuario);
    scanf("%d",&importeRetirado);
    if (importeRetirado >= saldoUsuario) {
        printf("Usted esta solicitando retirar mas del monto disponible en su cuenta\n");
    }else{
        saldoUsuario = saldoUsuario - importeRetirado;
        printf("Su saldo actual es de %d\n", saldoUsuario);
    }
    system("pause");

}