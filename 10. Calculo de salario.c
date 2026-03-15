# include <stdio.h>

int main(){

float horas_trabajadas, pago_por_hora, salario, bono;

printf("Escriba el total de horas trabajadas: ");
scanf("%f", &horas_trabajadas);

printf("Escriba el pago por hora: ");
scanf("%f", &pago_por_hora);

salario  = (horas_trabajadas*pago_por_hora);

bono = salario*(1+0.1);

if (horas_trabajadas>40){
    printf("\nBono del diez por ciento, su salario es de Bs.%.2f\n", bono);
}
else {
    printf("\nSu salario es de Bs.%.2f\n", salario);
}

return 0;

}
