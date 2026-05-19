#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Ingrese a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) cout << "Solucion infinita (0 = 0)." << endl;
            else cout << "Incongruencia (No hay solucion)." << endl;
        } else {
            cout << "Ecuacion lineal. x = " << -c / b << endl;
        }
    } else {
        double disc = (b * b) - (4 * a * c);
        if (disc > 0) {
            cout << "Dos raices reales distintas:" << endl;
            cout << "x1 = " << (-b + sqrt(disc)) / (2 * a) << endl;
            cout << "x2 = " << (-b - sqrt(disc)) / (2 * a) << endl;
        } else if (disc == 0) {
            cout << "Una raiz real unica:" << endl;
            cout << "x = " << -b / (2 * a) << endl;
        } else {
            cout << "Raices complejas conjugadas:" << endl;
            double real = -b / (2 * a);
            double imag = sqrt(-disc) / (2 * a);
            cout << "x1 = " << real << " + " << imag << "i" << endl;
            cout << "x2 = " << real << " - " << imag << "i" << endl;
        }
    }
    return 0;
}
