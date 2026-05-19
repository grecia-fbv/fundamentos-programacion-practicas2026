#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0;
    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero > 0) {
        suma += numero % 10;
        numero /= 10;
    }

    cout << "La suma de los digitos es: " << suma << endl;
    return 0;
}
