#include <iostream>
using namespace std;

/*Asignarle memoria dinámica a un puntero a un dato del int de 100 posiciones*/

int main() {
    int *Arreglo;
    Arreglo= new int[100];
    for (int i=0;i<100;i++){
        Arreglo[i]=i;
    }        

    for (int i=0;i<100;i++){
        cout<< Arreglo[i]<<endl;
        cout<<&Arreglo[i]<<endl;
    }
} 

