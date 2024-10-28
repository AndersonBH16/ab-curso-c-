#include <iostream>
using namespace std;

int costoCaracter(char c) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z' && c != 'ñ' && c != 'á' && c != 'é' && c != 'í' && c != 'ó' && c != 'ú')) {
        return 10;
    }
    else if (c >= '0' && c <= '9') {
        return 20;
    }
    else if (c == ' ') {
        return 0;
    }
    else {
        return 30;
    }
}

int calcularCostoMensaje(char *mensaje, int tamanio) {
    int costoTotal = 0;
    for (int i = 0; i < tamanio; ++i) {
        costoTotal += costoCaracter(mensaje[i]);
    }
    return costoTotal;
}

int main() {
    int tamanio;
    cout << "Ingrese el tamaño del mensaje: ";
    cin >> tamanio;

    char *mensaje = new char[tamanio];

    cout << "Ingrese el mensaje (carácter por carácter):" << endl;
    for (int i = 0; i < tamanio; ++i) {
        cout << "Carácter " << i + 1 << ": ";
        cin >> mensaje[i];
    }

    int costoTotal = calcularCostoMensaje(mensaje, tamanio);

    cout << "Valor del mensaje: " << costoTotal << endl;

    delete[] mensaje;

    return 0;
}
