#include <iostream>

using namespace std;

// algoritmo para leer arreglo con punteros
//	for(int i=0; i<nroClientes; i++){
//		cout<<*(pesos + i)<<endl;
		//peso
//	}


// peso promedio es suma de los pesos / cantidad de pesos
float calcularPromedioPesos(float *pesos, int nroClientes){
	float suma = 0;
	float promedio = 0;
	
	for(int i=0; i<nroClientes; i++){
		suma += *(pesos + i);
	}
	
	promedio = suma/nroClientes;
	
	return promedio;
}

float calcularPersonaMasPesada(float *pesos, int nroClientes){
	float pesoMaximo = pesos[0];
	
	for(int i=0; i<nroClientes; i++){
		if(*(pesos + i) > pesoMaximo){
			pesoMaximo = *(pesos + i);
		}
	}
	
	return pesoMaximo;
}

void filtrarContexturaPersonas(float *pesos, int nroClientes, int &cantidadPersonasDelgadas, int &cantidadPersonasMedianas, int &cantidadPersonasGruesas){
	cantidadPersonasDelgadas = 0;
	cantidadPersonasMedianas = 0;
	cantidadPersonasGruesas = 0;
	
	for(int i=0; i<nroClientes; i++){
		float peso = *(pesos + i);
		
		if(peso < 53){
			cantidadPersonasDelgadas ++;
		}else if(peso <= 60){
			cantidadPersonasMedianas ++;
		}else{
			cantidadPersonasGruesas ++;
		}
	}
}

int main(){
	int nroClientes;
	
	cout<<"\nIngrese cantidad de clientes: ";
	cin>>nroClientes;
	
	float *pesos = new float[nroClientes]; // reservando memoria
	
	cout<<"\nLlenando pesos para cada cliente: \n"<<endl;
	for(int i=0; i<nroClientes; i++){
		cout<<"Peso del ["<<i+1<<"] cliente: ";
		cin>>pesos[i]; // llenando el array
	}
	
	float pesoPromedio = calcularPromedioPesos(pesos, nroClientes);
	float personaMasPesada = calcularPersonaMasPesada(pesos, nroClientes);
	
	int cantidadPersonasDelgadas, cantidadPersonasMedianas, cantidadPersonasGruesas;
	filtrarContexturaPersonas(pesos, nroClientes, cantidadPersonasDelgadas, cantidadPersonasMedianas, cantidadPersonasGruesas);
	
	cout<<"\nPeso promedio de los clientes: "<<pesoPromedio<<endl;
	cout<<"\nPersona que pesa mas: "<<personaMasPesada<<endl;
	cout<<"\nCantidad de personas delgadas (<53 Kg): "<<cantidadPersonasDelgadas<<endl;
	cout<<"\nCantidad de personas medianas (entre 53 y 60 Kg): "<<cantidadPersonasMedianas<<endl;
	cout<<"\nCantidad de personas gruesa (> 60 Kg): "<<cantidadPersonasGruesas<<endl;
	
	delete[] pesos;
	
	return 0;
}
