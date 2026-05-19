#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero entero positivo menor que 10000: ";
    cin >> n;

    if (n > 0 && n < 10000) {
        int m = n / 1000;       // Unidades de mil
        int c = (n / 100) % 10; // Centenas
        int d = (n / 10) % 10;  // Decenas
        int u = n % 10;         // Unidades

        cout << "Unidades de mil (m): " << m << endl;
        cout << "Centenas (c): " << c << endl;
        cout << "Decenas (d): " << d << endl;
        cout << "Unidades (u): " << u << endl;
    } else {
        cout << "Numero fuera de rango." << endl;
    }

    return 0;
}
