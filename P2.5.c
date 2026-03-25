# include <stdio.h>
# include <math.h>

int main(){

float c, t, cuota_mensual, monto_total, interes_total, potencia;
int n;

printf("Escriba el monto de su capital: ");
scanf("%f", &c);

printf("Escriba la tasa de interes mensual: ");
scanf("%f", &t);

printf("Escriba el numero de cuotas: ");
scanf("%d", &n);

potencia = pow(1 + t, n);

cuota_mensual = c*(t*potencia)/(potencia-1);
monto_total = cuota_mensual*n;
interes_total = monto_total-c;

printf("\nSu cuota mensual es de Bs.%.2f", cuota_mensual);
printf("\nSu monto total es de Bs.%.2f", monto_total);
printf("\nSu interes es de %.2f", interes_total);

return 0;

}
