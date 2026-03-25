# include <stdio.h>
# include <math.h>

int main (){

float c, t, n, m, g;

printf("Escriba el capital incial: ");
scanf("%f", &c);

printf("Escriba la tasa de interes anual en tanto por uno, ej: 0.05 para 5%%: ");
scanf("%f", &t);

printf("Escriba el plazo del capital: ");
scanf("%f", &n);

m = c * pow((1+t/12/100),n*12);
g = m - c;

printf("\nEl monto acumulado de su inversion es de Bs.%.2f\n", m);

printf("\nSu ganancia neta es de Bs.%.2f\n", g);

return 0;

}
