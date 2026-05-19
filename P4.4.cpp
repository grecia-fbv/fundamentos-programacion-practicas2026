#include <iostream>
using namespace std;

int main() {
    int numero, original, invertido = 0;
    cout << "Ingrese un numero: ";
    cin >> numero;

    original = numero; // Guardamos el valor original

    while (numero > 0) {
        invertido = (invertido * 10) + (numero % 10);
        numero /= 10;
    }

    if (original == invertido) {
        cout << "El numero es capicua." << endl;
    } else {
        cout << "El numero no es capicua." << endl;
    }
    return 0;
}
