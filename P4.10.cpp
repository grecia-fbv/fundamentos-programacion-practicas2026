#include <iostream>
using namespace std;

int main() {
    int numero, digito, totalAcumulado = 0, transaccionesMayores5 = 0;
    cout << "Ingrese el numero de transacciones: ";
    cin >> numero;

    while (numero > 0) {
        digito = numero % 10;
        totalAcumulado += digito;
        if (digito > 5) {
            transaccionesMayores5++;
        }
        numero /= 10;
    }

    cout << "Total acumulado: " << totalAcumulado << endl;
    cout << "Transacciones mayores a 5: " << transaccionesMayores5 << endl;
    return 0;
}
