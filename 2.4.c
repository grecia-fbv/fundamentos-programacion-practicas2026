# include <stdio.h>

int main(){

char nombre[50];
float salario_mensual, aguinaldo;
int meses_trabajados;

printf("\nIngrese su nombre: ");
scanf("%s", nombre);

printf("\nIngrese su salario mensual: ");
scanf("%f", &salario_mensual);

printf("\nIngrese los meses trabajados en el año: ");
scanf("%d", &meses_trabajados);

aguinaldo = salario_mensual*meses_trabajados/12;

printf("\n------DATOS DEL TRABAJADOR-------\n");
printf("\nNombre: %s", nombre);
printf("\nSalario mensual: Bs.%.2f", salario_mensual);
printf("\nAguinaldo: Bs.%.2f", aguinaldo);
printf("\n-------------------------------------\n");

return 0;

}
