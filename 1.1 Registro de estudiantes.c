# include <stdio.h>

int main(){
char nombre[50], carrera[50];
int edad, semestre;

printf("Registro del estudiante\n");
printf("Tomar en cuenta:\n");
printf("Usar guiones bajos como separacion, ejemplo: Maria_Rojas, Ingenieria_Industrial\n\n");

printf("Ingrese su nombre completo: ");
scanf("%s", nombre);

printf("Ingrese su edad: ");
scanf("%d", &edad);

printf("Ingrese su carrera: ");
scanf("%s", carrera);

printf("Ingrese el semestre que esta cursando: ");
scanf("%d", &semestre);

printf("\n\n----------Datos del estudiante----------\n\n");
printf("Nombre completo: %s\n", nombre);
printf("Edad: %d\n", edad);
printf("Carrera: %s\n", carrera);
printf("Semestre: %d\n", semestre);

return 0;

}
