#include <iostream>
using namespace std;

int main() {
    int n;
    long long producto = 1;
    cout << "Ingrese N: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        producto *= i;
    }
    cout << "Producto: " << producto << endl;
    return 0;
}
