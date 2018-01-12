#include <iostream>
/*La función evalúa simetria, recibe un vector de n elementos y 
devuelve 1 si el vector es simetrico por la mitad y 0 cuando no.
1,2,3,4,5,4,3,2,1 es simetrico
1,2,3,4,5,4,3,2,6 no es simetrico
*/
using namespace std;

int simetria(int c[],int ini, int fin);
int main()
{
		int n[9]={1,2,3,4,5,4,3,2,1};//es simetrico
		//int n[9]={1,2,3,4,5,4,3,2,6};//no es simetrico
		int fin=9;
		if(simetria(n,0,fin-1)==0)
			cout<<"No es simetrico";
		else
			cout<<"Es simetrico";
}
int simetria(int c[],int ini, int fin)
{	
	if (ini<=fin)
	{
		if (c[ini]!=c[fin])
			return 0;
		else
		{
			ini++;
			fin--;
			return simetria(c,ini,fin);
		}
	}
	else
		return 1;
	
}
