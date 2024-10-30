#define filas 2
#define columnas 3

#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;

int main()
{  int **Matriz;
   Random f;
   int i,j;
   Matriz = new  int* [filas];
   for(i= 0; i<filas; i++)
           Matriz[i] = new  int[columnas];

    
   for(i=0; i<filas; i++)
       for(j=0; j<columnas; j++)
           Matriz[ i ][ j ]  = f.Next(0,30);
	
   /* mostramos los datos ingresados */
   for(i=0; i<filas; i++)
         {
              for(j=0; j<columnas; j++)
	cout<<Matriz[ i ][ j ];
              cout<<"\n";
         }
    _getch();
    return 0;
}
