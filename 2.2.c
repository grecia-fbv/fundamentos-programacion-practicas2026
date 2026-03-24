# include <stdio.h>
# include <math.h>

int main(){

float area_lateral, area_total, volumen, r, h;

const float PI=3.1416;

printf("Escriba la altura del cilindro: ");
scanf("%f", &h);

printf("Escriba el radio del cilindro: ");
scanf("%f", &r);

area_lateral = 2*PI*r*h;
area_total = 2*PI*r*(r+h);
volumen = PI*pow(r,2)*h;

printf("\nVolumen y area de la superficio de un cilindro\n");

printf("\n---------------------------------------------\n");

printf("\nEl area lateral del cilindro es %.2f\n", area_lateral);
printf("\nEl area total del cilindro es %.2f\n", area_total);
printf("\nEl volumen del cilindro es %.2f\n", volumen);
printf("\n---------------------------------------------\n");

return 0;

}
