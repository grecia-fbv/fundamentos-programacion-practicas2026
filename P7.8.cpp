#include <iostream>
#include <cmath>

using namespace std;

void resolverCuadratica(double a, double b, double c) {
    if (a == 0) {
        cout << "No es una ecuacion cuadratica (a = 0)." << endl;
        return;
    }

    double discriminante = (b * b) - (4 * a * c);

    if (discriminante > 0) {
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Dos raices reales y diferentes:" << endl;
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;
    } else if (discriminante == 0) {
        double x = -b / (2 * a);
        cout << "Una raiz doble (real):" << endl;
        cout << "X1 = X2 = " << x << endl;
    } else {
        double parteReal = -b / (2 * a);
        double parteImaginaria = sqrt(-discriminante) / (2 * a);
        cout << "Dos raices complejas conjugadas:" << endl;
        cout << "X1 = " << parteReal << " + " << parteImaginaria << "i" << endl;
        cout << "X2 = " << parteReal << " - " << parteImaginaria << "i" << endl;
    }
}

int main() {
    double a, b, c;
    cout << "Ingrese los coeficientes a, b y c: ";
    cin >> a >> b >> c;
    resolverCuadratica(a, b, c);
    return 0;
}
