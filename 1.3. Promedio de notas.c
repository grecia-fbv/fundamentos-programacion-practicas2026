# include <stdio.h>

int main(){

float nota_1, nota_2, nota_3, nota_final;

printf("Ingrese la primera calificacion:");
scanf("%f", &nota_1);

printf("Ingrese la segunda calificacion:");
scanf("%f", &nota_2);

printf("Ingrese la tercera calificacion:");
scanf("%f", &nota_3);

nota_final = (nota_1+nota_2+nota_3)/3;

printf("\nLa nota final es %.2f\n", nota_final);

return 0;

}
