# include <stdio.h>

int main (){

int parcial_1, parcial_2, examen_final, proyecto_integrador, nota_final;

printf("\nIngrese la nota del primer parcial: ");
scanf("%d", &parcial_1);

printf("\nIngrese la nota del segundo parcial: ");
scanf("%d", &parcial_2);

printf("\nIngrese la nota del examen final: ");
scanf("%d", &examen_final);

printf("\nIngrese la nota del proyecto integrador: ");
scanf("%d", &proyecto_integrador);

nota_final = parcial_1*0.25 + parcial_2*0.25 + examen_final*0.30 + proyecto_integrador*0.20;

if (nota_final>=51){
      printf("\nAprobado con %d\n", nota_final);
}
else {
    printf("\nReprobado con %d\n", nota_final);
}

return 0;

}
