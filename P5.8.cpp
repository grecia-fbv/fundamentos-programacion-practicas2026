#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int c1, c2, c3, c4;
    cout << "Cantidad de Hamburguesas (3 Bs): "; cin >> c1;
    cout << "Cantidad de Hamburguesas con queso (5 Bs): "; cin >> c2;
    cout << "Cantidad de Papas fritas (2 Bs): "; cin >> c3;
    cout << "Cantidad de Soda (2.5 Bs): "; cin >> c4;

    double p1 = c1 * 3.0;
    double p2 = c2 * 5.0;
    double p3 = c3 * 2.0;
    double p4 = c4 * 2.5;
    double total = p1 + p2 + p3 + p4;

    cout << "\n--- RESUMEN DE COMPRA ---" << endl;
    cout << "Hamburguesas: \t\t" << c1 << "\tBs. " << p1 << endl;
    cout << "Hamb. c/queso: \t\t" << c2 << "\tBs. " << p2 << endl;
    cout << "Papas fritas: \t\t" << c3 << "\tBs. " << p3 << endl;
    cout << "Soda: \t\t\t" << c4 << "\tBs. " << p4 << endl;
    cout << "---------------------------------------" << endl;
    cout << "TOTAL: \t\t\t" << (c1+c2+c3+c4) << "\tBs. " << total << endl;

    return 0;
}
