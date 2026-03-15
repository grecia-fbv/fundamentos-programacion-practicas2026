#include <stdio.h>

int main() {

    int nota_final;

    printf("\nIngrese la nota final: ");
    scanf("%d", &nota_final);

    if (nota_final < 51) {
        printf("\nReprobado con %d\n", nota_final);
    }
    else {
        printf("\nAprobado con %d\n", nota_final);
    }

    return 0;
}
