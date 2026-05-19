#include <iostream>
using namespace std;

int main() {
    int numero, invertido = 0;
    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero > 0) {
        invertido = (invertido * 10) + (numero % 10);
        numero /= 10;
    }

    cout << "Numero invertido: " << invertido << endl;
    return 0;
}
