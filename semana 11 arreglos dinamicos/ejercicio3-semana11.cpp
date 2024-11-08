#include <iostream>
#include <conio.h>
#include <ctime>
#include <Windows.h>
#include <algorithm>

using namespace std;

int main()
{
	srand(static_cast<unsigned>(time(0))); //	Random r;
	
	int tamanio = 30;
	int menor;

	// reservar memoria
	int* arreglo = new int[tamanio]; 

	// llenar arreglo
	for (int i = 0; i < tamanio; i++){
		arreglo[i] = rand() % 100 + 1; //arreglo[i] = r.Next(1, 100);
	}
	
	cout<<endl<<"MATRIZ NORMAL GENERADA"<<endl;
	//imprimir arreglo
	for (int i = 0; i < tamanio; i++)
	{
		cout << "Mostrar posicion [" << i << "] con valor: " << arreglo[i] << endl;
	}
	
	cout << endl<< endl;	
	
//	sort(arreglo, arreglo + tamanio); // ASCENDENTE
//	sort(arreglo, arreglo + tamanio, greater<int>()); // DESCENDENTE
	
	cout<<endl<<"MATRIZ ORDENADA"<<endl;
	//imprimir arreglo
	for (int i = 0; i < tamanio; i++){
		cout << "Mostrar posicion [" << i << "] con valor: " << arreglo[i] << endl;
	}
	
	delete[] arreglo;


	_getch();
	return 0;
}
