# include <stdio.h>
# include <math.h>

int main() {

    double A, B, C, D, E, F;
    double X, Y, det, k;
    double epsilon = 1e-9; //Tolerancia para números flotantes

    printf("------------------------------------------------------\n");
    printf("// SOLUCION DE SISTEMA DE 2 ECUACIONES CON 2 VARIABLES //\n");
    printf("------------------------------------------------------\n");

    printf("Ingrese el coeficiente A: ");
    scanf("%lf", &A);
    printf("Ingrese el coeficiente B: ");
    scanf("%lf", &B);
    printf("Ingrese el coeficiente C: ");
    scanf("%lf", &C);
    printf("Ingrese el coeficiente D: ");
    scanf("%lf", &D);
    printf("Ingrese el coeficiente E: ");
    scanf("%lf", &E);
    printf("Ingrese el coeficiente F: ");
    scanf("%lf", &F);

    printf("------------------------------------------------------\n");

    det = A * E - B * D;

    if (fabs(det) > epsilon) {
        //Solución única
        X = (C * E - B * F) / det;
        Y = (A * F - C * D) / det;

        printf("El sistema tiene UNA SOLUCION UNICA:\n");
        printf("X = %.6f\n", X);
        printf("Y = %.6f\n", Y);
    }
    else {
        //Determinante = 0 -> casos especiales (infinitas o ninguna)
        if (fabs(A) < epsilon && fabs(B) < epsilon) {
            //Primera ecuacion es 0x + 0y = C
            if (fabs(C) > epsilon) {
                printf("El sistema NO tiene solucion (0 = %.2f, contradiccion).\n", C);
            }
            else {
                //Primera ecuacion es 0=0 (siempre verdadera)
                if (fabs(D) < epsilon && fabs(E) < epsilon) {
                    if (fabs(F) < epsilon) {
                        printf("El sistema tiene INFINITAS soluciones (0=0 y 0=0).\n");
                    }
                    else {
                        printf("El sistema NO tiene solucion (0 = %.2f, contradiccion).\n", F);
                    }
                }
                else {
                    printf("El sistema tiene INFINITAS soluciones (la segunda ecuacion define la recta).\n");
                }
            }
        }
        else {
            //Primera ecuacion no es trivial -> calculamos factor de proporcionalidad
            if (fabs(A) > epsilon) {
                k = D / A;
            }
            else {
                k = E / B;
            }
            if (fabs(F - k * C) < epsilon) {
                printf("El sistema tiene INFINITAS soluciones (las ecuaciones son dependientes).\n");
            }
            else {
                printf("El sistema NO tiene solucion (las rectas son paralelas).\n");
            }
        }
    }

    printf("----------------------------------------------------------------------\n");

    return 0;
}
