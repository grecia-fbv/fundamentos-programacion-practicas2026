#include <iostream>

using namespace std;

// Procedimiento con paso por referencia para las salidas X e Y
void SISTEMA(double A, double B, double C, double D, double E, double F, double &X, double &Y) {
    // Las ecuaciones de la forma Ax + By + C = 0 se expresan como: Ax + By = -C
    // Las ecuaciones de la forma Dx + Ey + F = 0 se expresan como: Dx + Ey = -F
    double c_ind1 = -C;
    double c_ind2 = -F;

    // Se calcula el determinante del sistema
    double det = (A * E) - (B * D);

    if (det != 0) {
        // Se aplica la Regla de Cramer para hallar las variables de salida
        X = (c_ind1 * E - B * c_ind2) / det;
        Y = (A * c_ind2 - c_ind1 * D) / det;
    } else {
        cout << "\nEl sistema no tiene solucion unica (Determinante = 0)." << endl;
        X = 0;
        Y = 0;
    }
}

int main() {
    // Variables para los 6 coeficientes de entrada
    double A, B, C, D, E, F;
    // Variables para almacenar los resultados de salida
    double X, Y;

    // Lectura de los coeficientes de la primera ecuación
    cout << "--- Primera Ecuacion (Ax + By + C = 0) ---" << endl;
    cout << "Ingrese el coeficiente A: ";
    cin >> A;
    cout << "Ingrese el coeficiente B: ";
    cin >> B;
    cout << "Ingrese el coeficiente C: ";
    cin >> C;

    // Lectura de los coeficientes de la segunda ecuación
    cout << "\n--- Segunda Ecuacion (Dx + Ey + F = 0) ---" << endl;
    cout << "Ingrese el coeficiente D: ";
    cin >> D;
    cout << "Ingrese el coeficiente E: ";
    cin >> E;
    cout << "Ingrese el coeficiente F: ";
    cin >> F;

    // Llamada al procedimiento pasando las variables correspondientes
    SISTEMA(A, B, C, D, E, F, X, Y);

    // Se verifica si el determinante no fue cero para mostrar la solución válida
    if ((A * E) - (B * D) != 0) {
        cout << "\nSolucion del sistema:" << endl;
        cout << "X = " << X << endl;
        cout << "Y = " << Y << endl;
    }

    return 0;
}
