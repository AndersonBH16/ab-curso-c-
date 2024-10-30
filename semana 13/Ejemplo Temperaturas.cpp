#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <ctime>

using namespace std;

#define filas 12
#define columnas 30

int main() {

	int** matriz; // crea un puntero de tipo entero que se llama matriz
	
	int suma;

	srand(static_cast<unsigned>(time(0))); //	Random r;

	//asignacion de memoria
	matriz = new int* [filas];

	for (int i = 0; i < filas; i++)
		matriz[i] = new int[columnas];
		
	// Llenando la matriz		
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			matriz[i][j] = 10 + rand() % 31; //r.Next(10, 40);
		}
	}
		
	//impresion
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	
	//hallar el mayor valor
	int mayorvalor = matriz[0][0]; //40
	int posMes, posEstacion;
	
	posMes = posEstacion = 0;

	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){ // [0][0] (2)[0][1] 3. [0][2].... [1][0][1][1][1][2] .... [2][0][2][1][2]-.....
			if (mayorvalor < matriz[i][j]){
				mayorvalor = matriz[i][j];
				posMes = j; //mes 0 -> Enero
				posEstacion = i; //estación -> 6
			}			
		}		
	}

	cout << endl << "La mayor temperatura es: " << mayorvalor << " y se encuentra en la estacion: " << posMes << " y en el mes: " << posEstacion;
	

	//HALLAR LOS PROMEDIOS POR CADA ESTACION:

	cout << endl <<endl<< "PROMEDIO DE LAS TEMPERATURAS POR ESTACION: " << endl;
	// sumatoria de las 30 temperaturas x estacion / meses
	
	// en un bucle for() se suele asociar el contador i a las filas y el contador j a las columnas

	for (int j = 0; j < columnas; j++){ // 
		suma = 0; // 67
		for (int i = 0; i < filas; i++){ // i=0, 1, 2
			suma += matriz[i][j]; // suma = 55 + 12
		}
		cout << endl << "El promedio de la estacion " << j << " es: " << suma * 1.0 / filas << endl;
	}
	
	getch();
	return 0;
}
