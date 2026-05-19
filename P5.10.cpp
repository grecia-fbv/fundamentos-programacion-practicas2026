#include <iostream>
using namespace std;

int main() {
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        double p1, p2, practico, examenFinal, notaFinal;
        int faltas;

        cout << "\n--- REGISTRO DE ALUMNO ---" << endl;
        cout << "Primer parcial (sobre 100): "; cin >> p1;
        cout << "Segundo parcial (sobre 100): "; cin >> p2;
        cout << "Examen practico (sobre 100): "; cin >> practico;
        cout << "Examen final (sobre 100): "; cin >> examenFinal;
        cout << "Numero de faltas (de 48 clases): "; cin >> faltas;

        // Validacion de faltas (20% de 48 es 9.6; mas de 9 faltas invalida el final)
        if (faltas > 9) {
            cout << "[ALERTA] Examen final anulado por exceso de faltas (Inasistencia > 20%)." << endl;
            examenFinal = 0;
        }

        // Calculo de promedio ponderado
        double promedioParciales = (p1 + p2) / 2.0;
        notaFinal = (promedioParciales * 0.40) + (practico * 0.20) + (examenFinal * 0.40);

        cout << "Nota Final: " << notaFinal << endl;

        if (notaFinal >= 51) {
            cout << "Estado: APROBADO" << endl;
        } else {
            cout << "Estado: REPROBADO" << endl;
        }

        cout << "\n¿Desea calcular la nota de otro alumno? (s/n): ";
        cin >> continuar;
    }

    cout << "Programa finalizado." << endl;
    return 0;
}
