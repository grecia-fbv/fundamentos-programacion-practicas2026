# include <stdio.h>

int main(){

float b, h, area;

printf("Ingrese la base del triangulo: ");
scanf("%f", &b);

printf("Ingrese la altura del triangulo: ");
scanf("%f", &h);

area = (b*h)/2;

printf("\nEl area del triangulo es %.2f:\n", area);

return 0;

}
