#include <iostream>
#include <cmath>

using namespace std;

long long FAC(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

double calcularSerie(int x, int n) {
    double suma = 0.0;
    int signo = 1;
    for (int i = 1; i <= n; i += 2) {
        suma += signo * (pow(x, i) / (double)FAC(i));
        signo *= -1; // Alterna el signo
    }
    return suma;
}

int main() {
    int x, n;
    cout << "Ingrese X y N (N limite impar de la serie): ";
    cin >> x >> n;

    cout << "La suma de la serie alternada es: " << calcularSerie(x, n) << endl;
    return 0;
}
