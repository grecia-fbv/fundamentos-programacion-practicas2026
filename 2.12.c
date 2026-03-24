# include <stdio.h>

int main() {

    int dia, mes, anio;

    printf("\n--------------------------------------------\n");
    printf("Ingrese el dia: ");
    scanf("%d", &dia);

    printf("Ingrese el mes: ");
    scanf("%d", &mes);

    printf("Ingrese el anio: ");
    scanf("%d", &anio);

    if (( mes == 12 && dia >= 21 ) || ( mes == 1 ) || ( mes == 2 ) || ( mes == 3 && dia < 21 )) {
        printf("La estacion es Verano\n");
    }
    else if (( mes == 3 && dia >= 21 ) || ( mes == 4) || ( mes == 5 ) || ( mes == 6 && dia < 21 )) {
        printf("La estacion es Otoño\n");
    }
    else if (( mes == 6 && dia >= 21 ) || ( mes == 7) || ( mes == 8 ) || ( mes == 9 && dia < 21 )) {
        printf("La estacion es Invierno\n");
    }
    else if (( mes == 9 && dia >= 21) || ( mes == 10) || ( mes == 11 ) || ( mes == 12 && dia < 21 )) {
        printf("La estacion es Primavera\n");
    }

    return 0;
}
