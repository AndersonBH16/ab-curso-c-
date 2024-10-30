#include <iostream>
#include <conio.h>

#define filas 2
#define columnas 3

using namespace std;

int main()
{
    int **Matriz; // crean un puntero que se llama Matriz    
    Matriz = new int* [filas]; // reservas la memoria 
    
    for(int i= 0; i<filas; i++){
		Matriz[i] = new  int[columnas]; //reserva en memoria las columnas    	
	}
            
    for(int i=0; i<filas; i++){
    	for(int j=0; j<columnas; j++){
			Matriz[i][j] = 3 * i * 10  + (j + 1) * 10; //almacenando valores	
		}
	}
	
	// Mostrando elementos de la matriz           
    for(int i=0; i<filas; i++){
	    for(int j=0; j<columnas; j++){
	      	cout<<Matriz[ i ][ j ]; 
		}	
      	cout<<"\n";
    }
    _getch();
    return 0;
}

