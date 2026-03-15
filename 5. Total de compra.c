# include <stdio.h>

int main(){

int cantidad, total_pago;

printf("Ingrese la cantidad de cuadernos que desea comprar: ");
scanf("%d", &cantidad);

total_pago = cantidad*12;

printf("\nEl total a pagar es de Bs.%d\n", total_pago);

}
