#include <iostream>
using namespace std;

int main() {
    // Tres ciclos anidados para horas, minutos y segundos [cite: 3, 31]
    for (int h = 0; h < 24; h++) {
        for (int m = 0; m < 60; m++) {
            for (int s = 0; s < 60; s++) {

                // Imprimir Hora
                if (h < 10) cout << "0";
                cout << h << ":";

                // Imprimir Minutos
                if (m < 10) cout << "0";
                cout << m << ":";

                // Imprimir Segundos
                if (s < 10) cout << "0";
                cout << s << endl;

                // Nota: En un reloj real se usaría una pausa,
                // pero para fines de este ejercicio de ciclos,
                // se deja que corra a la velocidad del procesador.
            }
        }
    }
    return 0;
}
