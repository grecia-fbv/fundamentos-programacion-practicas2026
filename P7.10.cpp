#include <iostream>
#include <string>

using namespace std;

void convertirARomanos(int n, string &resultado) {
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string letras[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    resultado = "";

    for (int i = 0; i < 13; i++) {
        while (n >= valores[i]) {
            resultado = resultado + letras[i];
            n = n - valores[i];
        }
    }
}

int main() {
    int numero;
    string romano;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    convertirARomanos(numero, romano);
    cout << "Equivalente en romano: " << romano << endl;

    return 0;
}
