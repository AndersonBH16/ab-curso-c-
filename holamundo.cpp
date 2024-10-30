#include <iostream>

using namespace std;

int main(){
	int arrayNumeros[] = {8,11,30,41,50, 66, 87, 99, 134};
	int tamanio;
	
	tamanio = sizeof(arrayNumeros) / sizeof(arrayNumeros[0]); //permite obtener el tamaño del array filas
	cout<<"el tamanio del arreglo es: "<<tamanio<<endl;
	
	cout<<"Leyendo el array: "<<endl;
	
	for(int i=0; i<tamanio; i++){
		cout<<"La posición: "<<i<<endl;
		cout<<"El valor de la posición: "<<arrayNumeros[i]<<endl;
	}
	
	return 0;
}
