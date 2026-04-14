#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese N: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        suma += (i * i);
    }
    cout << "Suma de cuadrados: " << suma << endl;
    return 0;
}
