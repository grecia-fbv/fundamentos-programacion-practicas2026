#include <iostream>
using namespace std;

int main() {
    int numero;
    bool esValido = true;
    cout << "Ingrese un numero en base 8: ";
    cin >> numero;

    while (numero > 0) {
        int digito = numero % 10;
        if (digito < 0 || digito > 7) {
            esValido = false;
            break;
        }
        numero /= 10;
    }

    if (esValido) {
        cout << "El numero es valido en base 8." << endl;
    } else {
        cout << "El numero es invalido en base 8." << endl;
    }
    return 0;
}
