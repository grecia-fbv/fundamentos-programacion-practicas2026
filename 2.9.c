# include <stdio.h>

int main() {

    int minutos_totales, dias, horas, minutos;

    printf("----------------------------------------------");
    printf("//CONVERSION DE MINUTOS A DIAS/HORAS/MINUTOS//\n");
    printf("Ingrese la cantidad de minutos: ");
    scanf("%d", &minutos_totales);

    if (minutos_totales < 0) {
        printf("\nError: No se pueden ingresar minutos negativos.\n");
        return 1;
    }

    //Calculos
    dias = minutos_totales / (24 * 60);   //1440 minutos = dia
    int resto_dias = minutos_totales % (24 * 60);

    horas = resto_dias / 60;
    minutos = resto_dias % 60;

    printf("\n--------------------------------------------\n");
    printf("Resultado:\n");

    if (dias > 0) {
        printf("%d dia%s, ", dias, (dias == 1) ? " " : "s");
    }

    if (horas > 0 || dias > 0 || minutos > 0) { //Para no mostrar 0 horas si no hay nada
        printf("%d hora%s, ", horas, (horas == 1) ? " " : "s");
    }

    printf("%d minuto%s\n", minutos, (minutos == 1) ? " " : "s");

    printf("\n------------------------------------------------------------\n");

    return 0;
}
