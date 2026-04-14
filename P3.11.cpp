#include <iostream>
using namespace std;

int main() {
    int a, b, r;
    cout << "A y B: "; cin >> a >> b;
    while(b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    cout << "MCD: " << a << endl;
    return 0;
}
