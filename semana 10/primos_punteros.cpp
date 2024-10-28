#include <iostream>
#include <conio.h> // para usar el getch();

using namespace std;

int main()
{
    cout << "\nPUNTEROS" <<endl;

    /* Determinar si un numero es primo o no con punteros */

    int numero, *pos_memoria;
    bool esPrimo = true;
    
    cout << "Ingrese numero: ";
    cin >> numero;
    pos_memoria = &numero;

    if (*pos_memoria <= 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i <= *pos_memoria / 2; i++) {
            if (*pos_memoria % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }
    
    if (esPrimo) {
        cout << "\nEl numero " << *pos_memoria << " es primo.\n";
    } else {
        cout << "\nEl numero " << *pos_memoria << " no es primo.\n";
    }

    cout << "El numero esta almacenado en la direccion de memoria: " << pos_memoria << endl;

    // getch(); // Pausa el programa cuando finaliza
    return 0;
}