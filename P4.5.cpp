#include <iostream>
using namespace std;

int main() {
    int numero, digito, complemento = 0, posicion = 1;
    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero > 0) {
        digito = 9 - (numero % 10);
        complemento += digito * posicion;
        posicion *= 10;
        numero /= 10;
    }

    cout << "Complemento a 9: " << complemento << endl;
    return 0;
}
