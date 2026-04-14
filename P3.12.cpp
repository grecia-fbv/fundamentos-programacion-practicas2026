#include <iostream>
using namespace std;

int main() {
    int a, b, originalA, originalB, r;
    cout << "A y B: "; cin >> a >> b;
    originalA = a; originalB = b;
    while(b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    int mcd = a;
    int mcm = (originalA * originalB) / mcd;
    cout << "MCM: " << mcm << endl;
    return 0;
}
