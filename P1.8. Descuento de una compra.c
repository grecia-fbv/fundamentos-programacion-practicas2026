#include <stdio.h>

int main() {

 float compra, descuento;

 printf("Escribir el monto de la compra, Bs.: ");
 scanf("%f", &compra);

 descuento = (compra*0.9);

 if (compra > 100){
    printf("\nDescuento del 0.10, el monto total a pagar es de Bs.%.2f\n", descuento);
 }

 else if (compra <= 100){
    printf("\nEl monto total a pagar es de Bs.%.2f\n", compra);
 }

return 0;

}
