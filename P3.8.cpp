#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, suma = 0, fact = 1;
    int n;
    cout << "X: ";
    cin >> x;
    cout << "N: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        fact *= i;
        suma += pow(x, i) / fact;
    }
    cout << "Resultado: " << suma << endl;
    return 0;
}
