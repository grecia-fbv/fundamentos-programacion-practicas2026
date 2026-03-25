#include <stdio.h>

int main() {

    float kWh, monto = 0, cargo_fijo = 8.00;

    printf("\n------------------------------------------------\n");
    printf("Consumo kWh: ");
    scanf("%f", &kWh);

    if (kWh <= 0) {
        printf("SIN CONSUMO REGISTRADO\n");
    }
    else {
        if (kWh <= 100)       { monto = kWh * 0.30;
        printf("Categoria: BASICA\n");
        }
        else if (kWh <= 300)  { monto = kWh * 0.50;
        printf("Categoria: MEDIA\n");
        }
        else if (kWh <= 600)  { monto = kWh * 0.75;
        printf("Categoria: ALTA\n");
        }
        else                  { monto = kWh * 1.10;
        printf("Categoria: INDUSTRIAL\n");
        }

        monto += cargo_fijo;

        printf("\n------------------------------------------------\n");
        printf("Consumo:                    %.2f kWh\n", kWh);
        printf("Cargo Fijo por servicio: Bs %.2f\n", cargo_fijo);
        printf("Monto total a pagar:     Bs %.2f\n", monto);
    };

    return 0;
}
