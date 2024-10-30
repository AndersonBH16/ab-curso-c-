#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;
void CrearVector(char *v) {
	for (int i = 0; i < 10; i++)
	{
		v[i] = rand() % 26 + 65;
		Sleep(50);
		cout<<v[i];
	}
}

int main() {
	char* letras = new char[10];
	for (int j = 0; j < 10; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			letras[i] = rand() % 26 + 65;
			cout << letras[i] << " ";
			Sleep(20);
		}
		cout << endl;
	}
	
	Sleep(300);
	cout<<endl<<endl;
	CrearVector(letras);
		
	getch();
	return 0;
}


