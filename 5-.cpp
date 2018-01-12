#include <iostream>

/*
5.- Crear una funcion que reciba dos cadenas cad1 y cad2 y lo que hará 
sera poner cad2 despues de cad1, es decir las va a concatenar, 
la funcion tiene que ser creada por el usuario (no usar strcat).
*/
void ConcatenarCad(char c1[],char c2[]);
using namespace std;
int main()
{
	char cad1[100], cad2[100];
	cout<<"Escribe cadena: "<<endl;
	cin.getline(cad1,100,'\n');
	cout<<"Escribe cadena: "<<endl;
	cin.getline(cad2,100,'\n');
	ConcatenarCad(cad1,cad2);
	
}
void ConcatenarCad(char c1[],char c2[])
{ 
	int contador=0,desp=32;
	char concatenado[200]=" ";
	for(contador=0;c1[contador];contador++)
		concatenado[contador]=c1[contador];
	concatenado[contador]=desp;
	contador+=1;
	for(int i=0;c2[i];i++)
	{
		concatenado[contador+i]=c2[i];
	}
    cout<<endl<<concatenado;
}
