#include <iostream>

/*
6.- Leer un numero de 5 digitos y mostrar cada uno de 
sus correspondientes numero en letra separados por coma. Ej.-
45638 resultado CUATRO, CINCO, SEIS, TRES, OCHO
*/
using namespace std;
void numletra(char numeros[]);
int main()
{
	char numeros[5];
	cout<<"Dame un numero de 5 digitos: ";
	cin.getline(numeros,6,'\n');
	numletra(numeros);
}
void numletra(char numeros[])
{
	for(int contador=0;numeros[contador];contador++)
	{
		if(numeros[contador]==48)
		{
			cout<<"CERO";	
		}
		else
		{
			if(numeros[contador]==49)
			{
				cout<<"UNO";	
			}
			else
			{
				if(numeros[contador]==50)
				{
					cout<<"DOS";	
				}
				else
				{
					if(numeros[contador]==51)
					{
						cout<<"TRES";	
					}
					else
					{
						if(numeros[contador]==52)
						{
							cout<<"CUATRO";	
						}
						else
						{
							if(numeros[contador]==53)
							{
								cout<<"CINCO";	
							}
							else
							{
								if(numeros[contador]==54)
								{
									cout<<"SEIS";	
								}
								else
								{
									if(numeros[contador]==55)
									{
										cout<<"SIETE";	
									}
									else
									{
										if(numeros[contador]==56)
										{
											cout<<"OCHO";	
										}
										else
										{
											if(numeros[contador]==57)
											{
												cout<<"NUEVE";	
											}
										}
									}
								}
							}
						}
					}
				}
			}	
		}	
		cout<<",";
	}
}
