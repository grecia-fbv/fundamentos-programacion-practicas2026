#include <iostream>
using namespace std;

int main() {
    int n, f0 = 1, f1 = 1, fi = 1;
    cout << "N: "; cin >> n;
    for(int i = 2; i <= n; i++) {
        fi = f1 + f0;
        f0 = f1;
        f1 = fi;
    }
    cout << "Fibonacci: " << fi << endl;
    return 0;
}
