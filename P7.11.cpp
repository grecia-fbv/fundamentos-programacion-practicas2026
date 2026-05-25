#include <iostream>
#include <string>

using namespace std;

string unidades[] = {"", "un", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciseis", "diecisiete", "dieciocho", "diecinueve"};
string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

string convertirTresCifras(int n) {
    if (n == 100) return "cien";

    string texto = centenas[n / 100];
    int resto = n % 100;

    if (resto > 0) {
        if (texto != "") texto = texto + " ";
        if (resto >= 10 && resto <= 19) {
            texto = texto + especiales[resto - 10];
        } else {
            texto = texto + decenas[resto / 10];
            int uni = resto % 10;
            if (uni > 0) {
                if (decenas[resto / 10] != "") texto = texto + " y ";
                texto = texto + unidades[uni];
            }
        }
    }
    return texto;
}

string realALiteral(float R) {
    int parteEntera = (int)R;

    int centavos = (int)((R - parteEntera) * 100 + 0.5);

    string textoFinal = "";

    if (parteEntera == 0) {
        textoFinal = "cero";
    } else {
        int miles = parteEntera / 1000;
        int restoMiles = parteEntera % 1000;

        if (miles > 0) {
            if (miles == 1) textoFinal = "un mil";
            else textoFinal = unidades[miles] + " mil";
            if (restoMiles > 0) textoFinal = textoFinal + " ";
        }
        if (restoMiles > 0) {
            textoFinal = textoFinal + convertirTresCifras(restoMiles);
        }
    }

    return textoFinal + " " + to_string(centavos) + "/100 bolivianos";
}

int main() {
    float monto;
    cout << "Ingrese el monto de dinero (ej: 1560,50): ";
    cin >> monto;

    cout << "Resultado literal: " << realALiteral(monto) << endl;
    return 0;
}
