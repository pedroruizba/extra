#include <iostream>

using namespace std;
/*
Crear la funci�n buscaPalabrasXTam que recibe una cadena y un numero, 
esta funci�n buscar� cuantas palabras que tenga como tama�o el n�mero 
recibido existen.
*/
int buscaPalabrasXTam(char cad[],int num);
int main()
{
	char cad[200];
	int n;
	cout<<"Escribe la cadena: "<<endl;
	cin.getline(cad,200,'\n');
	cout<<endl<<"Dame un numero: ";
	cin>>n;
	cout<<endl<<"Hay "<<buscaPalabrasXTam(cad,n)<<" palabras con el tama�o de "<<n;
}
int buscaPalabrasXTam(char cad[],int num)
{
	int desp=32,contador=0,cuentaL=0;
	for(int i=0;cad[i];i++)
	{
		cuentaL++;
		if(cad[i]==desp)
		{
			if(cuentaL-1==num)
			{
				contador++;	
			}
				cuentaL=0;
		}
	}
	if(cuentaL==num)
	{
		contador++;	
	}
return contador;
}

