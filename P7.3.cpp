#include <iostream>
#include <cmath>

using namespace std;

long long FAC(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

// Programa que halla la suma mediante funciones
double calcularSerie1(int x, int n) {
    double suma = 0.0;
    for (int i = 1; i <= n; i++) {
        suma += pow(x, i) / (double)FAC(i);
    }
    return suma;
}

int main() {
    int x, n;
    cout << "Ingrese X y N (enteros positivos): ";
    cin >> x >> n;

    if (x > 0 && n > 0) {
        cout << "La suma de la serie es: " << calcularSerie1(x, n) << endl;
    } else {
        cout << "Los datos deben ser positivos." << endl;
    }
    return 0;
}
