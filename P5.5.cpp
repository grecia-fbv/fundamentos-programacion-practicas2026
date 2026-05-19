#include <iostream>
using namespace std;

int main() {
    int dia, mes, anio;
    cout << "Ingrese fecha (dia mes anio): ";
    cin >> dia >> mes >> anio;

    if ((mes == 9 && dia >= 21) || mes == 10 || mes == 11 || (mes == 12 && dia < 21)) {
        cout << "Primavera" << endl;
    } else if ((mes == 12 && dia >= 21) || mes == 1 || mes == 2 || (mes == 3 && dia < 21)) {
        cout << "Verano" << endl;
    } else if ((mes == 3 && dia >= 21) || mes == 4 || mes == 5 || (mes == 6 && dia < 21)) {
        cout << "Otono" << endl;
    } else {
        cout << "Invierno" << endl;
    }

    return 0;
}
