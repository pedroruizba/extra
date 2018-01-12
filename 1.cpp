#include <iostream>
/*
1. Crear una función que reciba una frase y un vector de enteros, 
en el vector pondra en cada posición de 0 en adelante la cantidad 
de palabras de tamaño igual al indice + 1, es decir, en la pos 0 
dira cuantas palabras de tamaño 1 , en la 1 del vector cuantas palabras 
de tamaño 2 y así hasta palabras de tamaño 15.
*/
using namespace std;
void sumapalabras(char frase[],int v[]);
int main()
{
	char frase[200];
	int v[15]={0};
	cout<<"Escribe una frase:";
	cin.getline(frase,200,'\n');
	sumapalabras(frase,v);
}
void sumapalabras(char frase[],int v[])
{
	int desp=32,cuentaL=0;
	for(int i=0;frase[i];i++)
	{
		cuentaL++;
		if(frase[i]==desp)
		{
			cuentaL-=2;
			v[cuentaL]++;
			cuentaL=0;	
		}
	}
	v[cuentaL-1]++;
	for(int i=0;i<15;i++)
	{
		cout<<"Tamaño "<<i+1<<"--->"<<v[i]<<endl;
	}
}

