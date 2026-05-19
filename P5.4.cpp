#include <iostream>
using namespace std;

int main() {
    int h1, m1, s1;
    int h2, m2, s2;

    cout << "Primer horario (hh mm ss): ";
    cin >> h1 >> m1 >> s1;
    cout << "Segundo horario (hh mm ss): ";
    cin >> h2 >> m2 >> s2;

    // Convertir todo a segundos totales
    long t1 = (h1 * 3600) + (m1 * 60) + s1;
    long t2 = (h2 * 3600) + (m2 * 60) + s2;

    long diferencia = t2 - t1;

    // Reconvertir a formato hh:mm:ss
    int h_res = diferencia / 3600;
    int m_res = (diferencia % 3600) / 60;
    int s_res = diferencia % 60;

    cout << "Tiempo transcurrido: " << h_res << ":" << m_res << ":" << s_res << endl;

    return 0;
}
