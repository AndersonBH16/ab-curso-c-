#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Ingrese tamanio del arreglo: ";
	cin>>n;
	
	int *arreglo = new int[n]; // reservar el tamanio del arreglo en memoria
	
	cout<<"Ingresa "<<n<<" cantidad de numeros: "<<endl;
	for(int i=0; i<n; i++){
		cin>>arreglo[i];
	}
	
	cout<<"\n Mostrando el arreglo: "<<endl;
	for(int i=0; i<n; i++){
		cout<<*(arreglo + i)<<" "<<endl; // arreglo[i]
	}
	cout<<endl;
	
	delete[] arreglo;
	
	return 0;
}
