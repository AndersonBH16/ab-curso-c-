#include <iostream>
#include <conio.h>
#include <ctime>
#include <Windows.h>
#include <algorithm>

using namespace std;

void generarArreglo(int *arreglo, int tamanio){
	for(int i=0; i<tamanio; i++){
		arreglo[i] = 1 + rand() % 50; //r.Next(10, 50);
	}
}

void imprimirArreglo(int *arreglo, int tamanio){
	cout<<endl<<"Imprimiendo el arreglo generado: "<<endl;
	for(int i=0; i<tamanio; i++){
		cout<<"Indice: "<<i<<" valor: "<<arreglo[i]<<endl;
	}
}

void ordenarArreglo(int *arreglo, int tamanio){
	//	sort(arreglo, arreglo + tamanio);
	for(int i=0; i<tamanio - 1; i++){
		for(int j= 0; j<tamanio - i - 1; j++){
			if(arreglo[j] > arreglo[j + 1]){
				int temporal = arreglo[j]; // capturamos el elemento de la posición actual
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = temporal;
			}
		}		
	}
}

int leerNumeroR(){
	int R;
	do{
		cout<<endl<<"Ingrese numero entre 2 y 5"<<endl;
		cin>>R;		
	}while(R<2 || R>5);
	
	return R;
}

void modificarArregloSegunR(int *&arreglo, int &tamanio, int R){
	int* nuevoArreglo = new int[tamanio * R]; // Crear arreglo temporal de mayor tamaño posible
    int newIndex = 0;

    for (int i = 0; i < tamanio;) {
        int valorActual = arreglo[i];
        int contador = 0;

        // Contar la cantidad de veces que el valor actual se repite en el arreglo original
        while (i < tamanio && arreglo[i] == valorActual) {
            if (contador < R) { // Solo agregar hasta la cantidad de repeticiones R
                nuevoArreglo[newIndex++] = valorActual;
                contador++;
            }
            i++;
        }

        // Agregar más repeticiones si el conteo es menor a R
        while (contador < R) {
            nuevoArreglo[newIndex++] = valorActual;
            contador++;
        }
    }

    delete[] arreglo; // Liberar la memoria del arreglo original
    arreglo = nuevoArreglo; // Apuntar al nuevo arreglo
    tamanio = newIndex; // Actualizar el tamaño del arreglo
}

int main(){
	cout<<"***** EJERCICIO 5 - SEMANA 11 *****"<<endl;
		
	int N;
	srand(static_cast<unsigned>(time(0))); //	Random r;
	
	do{
		cout<<"Ingrese numero entre 10 y 30"<<endl;
		cin>>N;		
	}while(N<10 || N>30);
	
	cout<<endl<<"El numero ingresado es: "<<N<<endl;
	
	//ITEM A. Generar arreglo de numeros enteros de tamanio N cuyos valores entre 1 y 50
	int tamanio = N;
	int* arreglo = new int[tamanio];
	generarArreglo(arreglo, tamanio);
	
	//ITEM B. Imprimir los valores del arreglo mostrando el índice y el valor de cada entero. 
	imprimirArreglo(arreglo, tamanio);
	
	//ITEM C. Ordenar el arreglo de menor a mayor.	
	ordenarArreglo(arreglo, tamanio);
	
	//ITEM D. Imprimir los valores del arreglo mostrando el índice y el valor de cada entero. 
	imprimirArreglo(arreglo, tamanio);
	
	//ITEM E. Leer un número entero R positivo con valores entre 2 y 5 inclusive.
	int R = leerNumeroR();
	
	cout <<"El valor de R es: "<<R<<endl;
	
	//ITEM F. Modificar el arreglo de modo que los valores ordenados se repitan solamente R veces. 
	modificarArregloSegunR(arreglo, tamanio, R);
	imprimirArreglo(arreglo, tamanio);
	
	delete[] arreglo;
	return 0;
}

