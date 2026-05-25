#include <iostream>

using namespace std;

// Función que devuelve 1 si el año es bisiesto o 0 si no lo es
int esBisiesto(int anio) {
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        return 1; // 1 equivale a Verdadero (Sí es bisiesto)
    }
    return 0; // 0 equivale a Falso (No es bisiesto)
}

// Función que devuelve 1 si la fecha es válida o 0 si es falsa/incorrecta
int validarFecha(int dia, int mes, int anio) {
    if (anio < 0 || mes < 1 || mes > 12 || dia < 1) {
        return 0; // Fecha inválida automáticamente
    }

    int diasMaximos[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Si es febrero y la función esBisiesto nos devuelve 1 (verdadero)
    if (mes == 2 && esBisiesto(anio) == 1) {
        diasMaximos[2] = 29; // Febrero tiene 29 días
    }

    if (dia <= diasMaximos[mes]) {
        return 1; // 1 significa que la fecha es VALIDA
    }
    return 0; // 0 significa que la fecha es INVALIDA
}

int main() {
    int d, m, a;
    cout << "---Validar Fecha---\n";
    cout << "Ingrese dia, mes y anio: ";
    cin >> d >> m >> a;

    // El "if" interpreta el 1 como verdadero y el 0 como falso
    if (validarFecha(d, m, a) == 1) {
        cout << "La fecha es VALIDA." << endl;
    } else {
        cout << "La fecha NO es valida." << endl;
    }
    return 0;
}
