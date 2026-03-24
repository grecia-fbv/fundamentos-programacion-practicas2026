# include <stdio.h>

int main(){

int num;

printf("Escriba el numero entero: ");
scanf("%d", &num);

if (num % 2 == 0){
    printf("\nEl numero %d es par\n", num);
}
else {
    printf("\nEl numero %d es impar\n", num);
}

return 0;

}
