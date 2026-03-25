#include <stdio.h>
#include <math.h>

int main(){
    float celsius, fahrenheit, kelvin, rankine;

    printf("Ingrese los grados celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273.15;
    rankine = (celsius + 273.15) * 9 / 5;

    printf("\nLos grados celsius %.2f son equivalentes a %.2f grados fahrenheit\n", celsius, fahrenheit);
    printf("\nLos grados celsius %.2f son equivalentes a %.2f grados kelvin\n", celsius, kelvin);
    printf("\nLos grados celsius %.2f son equivalentes a %.2f grados rankine\n", celsius, rankine);

    return 0;
}
