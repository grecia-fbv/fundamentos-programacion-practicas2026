#include <stdio.h>

int main() {

    // Precios
    float p_pollo = 3.50;
    float p_carne = 4.00;
    float p_queso = 3.00;
    float p_refresco = 5.00;
    float p_agua = 3.00;

    // Cantidades
    int c_pollo, c_carne, c_queso, c_refresco, c_agua;

    // Subtotales
    float s_pollo, s_carne, s_queso, s_refresco, s_agua;

    float total;

    printf("---- SALTEÑERIA ----\n");

    printf("Cantidad de saltena de pollo: ");
    scanf("%d", &c_pollo);

    printf("Cantidad de saltena de carne: ");
    scanf("%d", &c_carne);

    printf("Cantidad de empanada de queso: ");
    scanf("%d", &c_queso);

    printf("Cantidad de refresco (500ml): ");
    scanf("%d", &c_refresco);

    printf("Cantidad de agua mineral: ");
    scanf("%d", &c_agua);

    // Calculos
    s_pollo = p_pollo * c_pollo;
    s_carne = p_carne * c_carne;
    s_queso = p_queso * c_queso;
    s_refresco = p_refresco * c_refresco;
    s_agua = p_agua * c_agua;

    total = s_pollo + s_carne + s_queso + s_refresco + s_agua;

    // Salida tipo tabla
    printf("\n--- FACTURA ---\n");

    printf("Saltena de pollo   %d   %.2f\n", c_pollo, s_pollo);
    printf("Saltena de carne   %d   %.2f\n", c_carne, s_carne);
    printf("Empanada de queso  %d   %.2f\n", c_queso, s_queso);
    printf("Refresco (500ml)   %d   %.2f\n", c_refresco, s_refresco);
    printf("Agua mineral       %d   %.2f\n", c_agua, s_agua);

    printf("\nTOTAL A PAGAR: %.2f Bs\n", total);

    return 0;
}
