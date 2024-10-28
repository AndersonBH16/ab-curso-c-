#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Función para generar números aleatorios entre 1 y 100
void generarVector(int *vector, int n) {
    for (int i = 0; i < n; ++i) {
        vector[i] = rand() % 100 + 1;
    }
}

// Función para imprimir las secuencias ascendentes en el vector
void imprimirSecuenciasAscendentes(int *vector, int n) {
    for (int i = 0; i < n; ) {
        cout << vector[i];
        int j = i + 1;
        
        // Imprimir secuencia ascendente
        while (j < n && vector[j] > vector[j - 1]) {
            cout << " " << vector[j];
            ++j;
        }
        
        cout << endl;
        i = j; // Avanzar al siguiente elemento que no es parte de la secuencia ascendente
    }
}

int main() {
    srand(time(0));
    
    int n;
    cout << "Ingrese el número de elementos (no mayor a 50): ";
    cin >> n;
    
    // Validar el tamaño del vector
    if (n <= 0 || n > 50) {
        cout << "Número de elementos inválido." << endl;
        return 1;
    }
    
    int vector[n];
    
    // Generar los elementos aleatorios
    generarVector(vector, n);
    
    // Imprimir el vector generado
    cout << "Vector: ";
    for (int i = 0; i < n; ++i) {
        cout << vector[i] << " ";
    }
    cout << endl;
    
    // Imprimir las secuencias ascendentes
    cout << "Secuencias ascendentes:" << endl;
    imprimirSecuenciasAscendentes(vector, n);
    
    return 0;
}
