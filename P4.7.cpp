#include <iostream>
using namespace std;

int main() {
    int numero, digito;
    double suma = 0, promedio, totalApps = 0, appsSuperan5 = 0;

    cout << "Ingrese el numero de uso: ";
    cin >> numero;

    while (numero > 0) {
        digito = numero % 10;
        suma += digito;
        totalApps++;

        if (digito > 5) {
            appsSuperan5++;
        }
        numero /= 10;
    }

    promedio = (totalApps > 0) ? (suma / totalApps) : 0;

    cout << "Total horas: " << suma << endl;
    cout << "Apps que superan 5 horas: " << appsSuperan5 << endl;
    cout << "Promedio de horas: " << promedio << endl;
    return 0;
}
