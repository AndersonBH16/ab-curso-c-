#include <iostream>
using namespace std;

void incrementar(int numero) {
    numero++;  // Modifica una copia, el valor original no cambia
}

int main() {
    int num = 5;
    incrementar(num);
    cout << num;  // Imprime 5
}
