#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    cout << "\nPUNTEROS" <<endl;

    int numero, *pos_memoria;

    numero = 20;
    pos_memoria = &numero;

    if(*pos_memoria % 2 == 0){
        cout<<"El numero: "<<*pos_memoria<<" es par\n";
        cout<<"Posición de memoria: "<<pos_memoria<<endl;
    }else{
        cout<<"El numero"<<numero<<"es inpar";
    }

    getch();
    return 0;
}
