#include <iostream>
using namespace std;

int main() {
    int numero, digito, suma = 0, pares = 0;
    int umbralSuma;

    cout << "Ingrese el codigo numerico: ";
    cin >> numero;
    cout << "Ingrese el valor de suma a superar: ";
    cin >> umbralSuma;

    while (numero > 0) {
        digito = numero % 10;
        suma += digito;
        if (digito % 2 == 0) {
            pares++;
        }
        numero /= 10;
    }

    if (pares >= 2 && suma > umbralSuma) {
        cout << "Codigo SEGURO." << endl;
    } else {
        cout << "Codigo INSEGURO." << endl;
    }
    return 0;
}
