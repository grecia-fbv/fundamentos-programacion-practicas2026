#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, suma = 0, fact = 1;
    int n, signo = 1;
    cout << "X: "; cin >> x;
    cout << "N (impar): "; cin >> n;
    for(int i = 1; i <= n; i++) {
        fact *= i;
        if(i % 2 != 0) {
            suma += signo * (pow(x, i) / fact);
            signo *= -1;
        }
    }
    cout << "Resultado: " << suma << endl;
    return 0;
}
