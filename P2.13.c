# include <stdio.h>
# include <math.h>

int main() {

    float a, b, c, x1, x2, D;

    printf("//\nCALCULADORA DE ECUACIONES CUADRATICAS//\n");
    printf("Ingrese el valor de a: ");
    scanf("%f", &a);
    printf("Ingrese el valor de b: ");
    scanf("%f", &b);
    printf("Ingrese el valor de c: ");
    scanf("%f", &c);

    if (a == 0) {

        if (b == 0) {
            printf("Ecuacion degenerada (sin solucion o infinitas soluciones)\n");
        } else {
            float x = -c / b;
            printf("Ecuacion lineal\n");
            printf("La solucion es: x = %.2f\n", x);
        }

    } else {

        // Calculamos discriminante
        D = b*b - 4*a*c;

        if (D > 0) {
            x1 = (-b + sqrt(D)) / (2*a);
            x2 = (-b - sqrt(D)) / (2*a);

            printf("Dos raices reales distintas\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
        else if (D == 0) {
            x1 = -b / (2*a);

            printf("Raiz real doble\n");
            printf("x = %.2f\n", x1);
        }
        else {
            float real = -b / (2*a);
            float imag = sqrt(-D) / (2*a);

            printf("Raices complejas conjugadas\n");
            printf("x1 = %.2f + %.2fi\n", real, imag);
            printf("x2 = %.2f - %.2fi\n", real, imag);
        }
    }

    return 0;
}
