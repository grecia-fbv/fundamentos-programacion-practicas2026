#include <iostream>
#include <cmath>

using namespace std;

// Función que recibe el binario como un entero de dígitos 1 y 0
int binarioADecimal(long long binario) {
    int decimal = 0, i = 0, rem;
    while (binario != 0) {
        rem = binario % 10;
        binario /= 10;
        decimal += rem * pow(2, i);
        i++;
    }
    return decimal;
}

int main() {
    long long n;
    cout << "Ingrese un numero binario: ";
    cin >> n;
    cout << "El equivalente decimal es: " << binarioADecimal(n) << endl;
    return 0;
}
