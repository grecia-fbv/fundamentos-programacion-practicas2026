#include <iostream>
using namespace std;

int main() {
    int pin, digito, anterior = -1, conteoDigitos = 0;
    bool esValido = true;

    cout << "Ingrese el PIN: ";
    cin >> pin;

    int temp = pin;
    while (temp > 0) {
        conteoDigitos++;
        temp /= 10;
    }

    if (conteoDigitos != 4) {
        esValido = false;
    } else {
        while (pin > 0) {
            digito = pin % 10;
            if (digito == anterior) {
                esValido = false;
                break;
            }
            anterior = digito;
            pin /= 10;
        }
    }

    if (esValido) {
        cout << "PIN valido." << endl;
    } else {
        cout << "PIN invalido." << endl;
    }
    return 0;
}
