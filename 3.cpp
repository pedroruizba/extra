#include <iostream>
/*
3.- Crear la función buscar que recibe un vector de tamaño t 
con números y una matriz de n renglones por 2 columnas, en 
la primer columna esta un numero que será buscado en el vector, 
si se encuentra se pondrá en la segunda columna la posición en 
que está en el vector, en caso contrario se pone -1 en esa segunda columna.
*/
using namespace std;
int buscar(int v[],int m[][2],int renglones,int Nvector);
int main()
{	int renglones=10;
	int NPrueba[]={30,90,20,30,56,3,56,1,23,10};
	int Nvector=12;
	
	int mat[renglones][2]={{0}};
	int vec[]={10,90,23,34,56,3,56,22,45,30,100,400};
	for(int r=0;r<renglones;r++)
	{
		mat[r][0]=NPrueba[r];
	}
	buscar(vec,mat,renglones,Nvector);
}

int buscar(int v[],int m[][2],int renglones,int Nvector)
{
	bool encontro;
	for(int r=0;r<renglones;r++)
	{ 
		encontro=false;
		for(int Rvector=0;Rvector<Nvector;Rvector++)
		{
			if(m[r][0]==v[Rvector])
			{
				m[r][1]=Rvector;
				encontro=true;
			}	
		}
		if(encontro==false)
			m[r][1]=-1;
	}
	for(int r=0;r<renglones;r++)
	{
		for(int c=0;c<2;c++)
		cout<<m[r][c]<<" ";
		cout<<endl;
	}
}


