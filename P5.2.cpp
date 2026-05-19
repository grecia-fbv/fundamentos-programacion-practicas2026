#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Ingrese los coeficientes a, b y c: ";
    cin >> a >> b >> c;

    double discriminante = (b * b) - (4 * a * c);

    if (discriminante >= 0) {
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else {
        cout << "La ecuacion no tiene soluciones reales." << endl;
    }

    return 0;
}
