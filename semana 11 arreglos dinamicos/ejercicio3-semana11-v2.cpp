#include <iostream>
#include <conio.h>
#include <ctime>
#include <Windows.h>
#include <algorithm>

using namespace std;

int main()
{
	srand(static_cast<unsigned>(time(0))); //	Random r;
	
	int tamanio = 100;
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
	
	// ALGORITMO DE ORDENAMIENTO
	for(int i=0; i<tamanio - 1; i++){
		for(int j= 0; j<tamanio - i - 1; j++){
			if(arreglo[j] > arreglo[j + 1]){
				int temporal = arreglo[j]; // capturamos el elemento de la posición actual
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = temporal;
			}
		}		
	}
	
	cout<<"\n\nMOSTRAR MATRIZ ORDENADA"<<endl;
	for(int i= 0; i<tamanio; i++){
		cout<<"valor: "<<arreglo[i]<<" "<<endl;		
	}
	
	cout<<"\n\nMOSTRAR MATRIZ CON REPETICIONES"<<endl;
	int contador = 1;
	
	for(int i=0; i<tamanio; i++){
		if(arreglo[i] == arreglo[i + 1]){
			contador ++;
		}else{
			cout<<arreglo[i]<<" se repite "<<contador<<(contador > 1 ? " veces" : " vez")<<endl;
			contador = 1;
		}
	}
	
	cout<<"\n\nMOSTRAR MATRIZ SIN ELEMENTOS REPETIDOS"<<endl;
	for(int i=0; i<tamanio; i++){
		if(arreglo[i] != arreglo[i+1]){
			cout<<arreglo[i]<<" "<<endl;
		}
	}
	
	cout << endl<< endl;
	delete[] arreglo;
	_getch();
	return 0;
}
