#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, suma = 0;
    int n;
    cout << "X: ";
    cin >> x;
    cout << "N: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        suma += pow(x, i);
    }
    cout << "Suma: " << suma << endl;
    return 0;
}
