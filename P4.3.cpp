#include <iostream>
using namespace std;

int main() {
    int numero, digito, contador = 0;
    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero > 0) {
        digito = numero % 10;
        if (digito % 2 == 0) {
            contador++;
        }
        numero /= 10;
    }

    cout << "Cantidad de digitos pares: " << contador << endl;
    return 0;
}
