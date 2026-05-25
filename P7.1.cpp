#include <iostream>
#include <cmath>

using namespace std;

double POTEN(double x, double y) {
    return pow(x, y);
}

int main() {
    double base, exponente;
    cout << "Ingrese la base (x): ";
    cin >> base;
    cout << "Ingrese el exponente (y): ";
    cin >> exponente;

    cout << base << "^" << exponente << " = " << POTEN(base, exponente) << endl;
    return 0;
}
