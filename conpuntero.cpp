#include <iostream>

using namespace std;

void incrementar(int *puntero){
	(*puntero) ++;
	cout<<"numero 2: "<<*puntero;
}

int main(){
	int numero = 10;
	int *puntero;
	puntero = &numero; //0xabc09
	cout<<puntero;
	
	incrementar(puntero);
	cout<<"\n El numero es: "<<numero<<endl;
	cout<<"\n La posición de memoria es: "<<puntero<<endl;
}

//void incrementar(int* numero) {
//    (*numero)++;  // Modifica el valor original usando un puntero
//}
//
//int main() {
//    int num = 5;
//    incrementar(&num);
//    cout << "\n"<<"Numero: "<<num<<endl;  // Imprime 6
//}
