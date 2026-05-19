#include <iostream>
using namespace std;

int main() {
    double peso;
    cout << "Ingrese el peso de la carta en gramos: ";
    cin >> peso;

    if (peso <= 0) {
        cout << "Peso invalido." << endl;
    } else if (peso < 50) {
        cout << "Costo: Bs. 1.50" << endl;
    } else if (peso <= 100) {
        cout << "Costo: Bs. 4.00" << endl;
    } else if (peso <= 200) {
        cout << "Costo: Bs. 6.00" << endl;
    } else if (peso <= 350) {
        cout << "Costo: Bs. 10.50" << endl;
    } else if (peso <= 500) {
        cout << "Costo: Bs. 15.00" << endl;
    } else {
        cout << "NO PUEDE ENVIAR COMO CARTA" << endl;
    }

    return 0;
}
