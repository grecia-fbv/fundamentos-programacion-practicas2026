#include <iostream>

using namespace std;

// Cambiado a tipo int: devuelve 1 (bisiesto) o 0 (no bisiesto)
int chequearBisiesto(int anio) {
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        return 1;
    }
    return 0;
}

// Cuenta cuántos días han pasado desde el año 1 d.C. hasta la fecha dada
long contarDiasDesdeOrigen(int d, int m, int a) {
    int diasMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    long totalDias = d;

    // Suma los días de los años pasados
    for (int i = 1; i < a; i++) {
        if (chequearBisiesto(i) == 1) { // Si devuelve 1, sumamos año bisiesto
            totalDias = totalDias + 366;
        } else {
            totalDias = totalDias + 365;
        }
    }

    // Suma los días de los meses pasados en el año actual
    for (int i = 1; i < m; i++) {
        if (i == 2 && chequearBisiesto(a) == 1) { // Si el año actual es bisiesto
            totalDias = totalDias + 29;
        } else {
            totalDias = totalDias + diasMes[i];
        }
    }

    return totalDias;
}

// Procedimiento principal que calcula la diferencia absoluta
void diasTranscurridos(int d1, int m1, int a1, int d2, int m2, int a2, long &resultado) {
    long total1 = contarDiasDesdeOrigen(d1, m1, a1);
    long total2 = contarDiasDesdeOrigen(d2, m2, a2);

    if (total2 > total1) {
        resultado = total2 - total1;
    } else {
        resultado = total1 - total2;
    }
}

int main() {
    int d1, m1, a1, d2, m2, a2;
    long diasFinales;

    cout << "--- Ejercicio 14: Dias Transcurridos (Usando int en vez de bool) ---\n";
    cout << "Ingrese la primera fecha (dia mes anio): ";
    cin >> d1 >> m1 >> a1;
    cout << "Ingrese la segunda fecha (dia mes anio): ";
    cin >> d2 >> m2 >> a2;

    diasTranscurridos(d1, m1, a1, d2, m2, a2, diasFinales);

    cout << "\nLos dias transcurridos entre ambas fechas son: " << diasFinales << " dias." << endl;
    return 0;
}
