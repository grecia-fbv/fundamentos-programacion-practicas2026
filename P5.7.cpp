#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, e, f;
    cout << "Ecuacion 1 (a b c): "; cin >> a >> b >> c;
    cout << "Ecuacion 2 (d e f): "; cin >> d >> e >> f;

    double detPrincipal = (a * e) - (b * d);

    if (detPrincipal != 0) {
        double x = ((c * e) - (b * f)) / detPrincipal;
        double y = ((a * f) - (c * d)) / detPrincipal;
        cout << "Solucion unica: X = " << x << ", Y = " << y << endl;
    } else {
        double detX = (c * e) - (b * f);
        if (detX == 0) {
            cout << "El sistema tiene infinitas soluciones." << endl;
        } else {
            cout << "El sistema no tiene solucion." << endl;
        }
    }
    return 0;
}
