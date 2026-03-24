# include <stdio.h>

int main() {

    int dia1, dia2, mes1, mes2, dias_totales, meses, dias;

    printf("-----------------------------------------------------------\n");
    printf("          DIFERENCIA ENTRE DOS FECHAS (mismo año)\n");
    printf("-----------------------------------------------------------\n");

    printf("Fecha inicial: \n");
    printf("   Dia (1-30): ");
    scanf("%d", &dia1);
    printf("   Mes (1-12): ");
    scanf("%d", &mes1);

    printf("\nFecha final:\n");
    printf("   Dia (1-30): ");
    scanf("%d", &dia2);
    printf("   Mes (1-12): ");
    scanf("%d", &mes2);
    printf("-----------------------------------------------------------\n");

    int dias_inicio = (mes1 - 1) * 30 + dia1;
    int dias_final = (mes2 - 1) * 30 + dia2;

    dias_totales = dias_final - dias_inicio;

    meses = dias_totales / 30;
    dias = dias_totales % 30;

    printf("\nDiferencia: %d meses y %d dias\n", meses, dias);

    return 0;
}
