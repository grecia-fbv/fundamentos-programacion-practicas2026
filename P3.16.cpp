#include <iostream>
using namespace std;

int main() {
    int n, div = 0;
    cout << "Ingrese N: "; cin >> n;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) div++;
    }
    if(div == 2) cout << "Es primo" << endl;
    else cout << "No es primo" << endl;
    return 0;
}
