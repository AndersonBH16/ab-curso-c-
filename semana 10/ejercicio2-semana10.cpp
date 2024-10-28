#include <iostream>
using namespace std;

// Función para leer los pesos de los clientes
void leerPesos(float* pesos, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Peso del cliente " << i + 1 << ": ";
        cin >> pesos[i];
    }
}

// Función para calcular el peso promedio
float calcularPromedio(float* pesos, int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += *(pesos + i);
    }
    return suma / n;
}

// Función para encontrar el peso máximo
float encontrarPesoMaximo(float* pesos, int n) {
    float maximo = pesos[0];
    for (int i = 1; i < n; i++) {
        if (*(pesos + i) > maximo) {
            maximo = *(pesos + i);
        }
    }
    return maximo;
}

// Función para contar contexturas (delgada, mediana, gruesa)
void contarContexturas(float* pesos, int n, int &delgados, int &medianos, int &gruesos) {
    delgados = 0;
    medianos = 0;
    gruesos = 0;
    
    for (int i = 0; i < n; i++) {
        float peso = *(pesos + i);
        if (peso < 53) {
            delgados++;
        } else if (peso <= 60) {
            medianos++;
        } else {
            gruesos++;
        }
    }
}

int main() {
    int n;
    cout << "Ingresa la cantidad de clientes: ";
    cin >> n;

    // Reservar memoria dinámica para el arreglo de pesos
    float* pesos = new float[n];

    // Llamada a la función para leer los pesos
    leerPesos(pesos, n);

    // Variables para almacenar los resultados de las funciones
    float pesoPromedio = calcularPromedio(pesos, n);
    float pesoMaximo = encontrarPesoMaximo(pesos, n);
    int delgados, medianos, gruesos;

    // Llamada a la función para contar las contexturas
    contarContexturas(pesos, n, delgados, medianos, gruesos);

    // Mostrar resultados
    cout << "\nResultados estadísticos:\n";
    cout << "Peso promedio: " << pesoPromedio << " kg" << endl;
    cout << "Peso máximo: " << pesoMaximo << " kg" << endl;
    cout << "Número de personas delgadas (menos de 53 kg): " << delgados << endl;
    cout << "Número de personas medianas (53 a 60 kg): " << medianos << endl;
    cout << "Número de personas gruesas (más de 60 kg): " << gruesos << endl;

    // Liberar la memoria dinámica
    delete[] pesos;

    return 0;
}
