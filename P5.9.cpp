#include <iostream>
using namespace std;

int main() {
    int opcion;
    cout << "MENU DE AREAS" << endl;
    cout << "1. Cuadrado" << endl;
    cout << "2. Circulo" << endl;
    cout << "3. Triangulo" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1: {
            double lado;
            cout << "Ingrese el lado: "; cin >> lado;
            cout << "Area del Cuadrado: " << lado * lado << endl;
            break;
        }
        case 2: {
            double radio;
            cout << "Ingrese el radio: "; cin >> radio;
            cout << "Area del Circulo: " << 3.141592 * radio * radio << endl;
            break;
        }
        case 3: {
            double base, altura;
            cout << "Ingrese base y altura: "; cin >> base >> altura;
            cout << "Area del Triangulo: " << (base * altura) / 2.0 << endl;
            break;
        }
        default:
            cout << "Opcion no valida." << endl;
    }
    return 0;
}
