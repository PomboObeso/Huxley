#include <stdio.h>
void visitar(int n,int visitados[],int buracos[])
{
	visitados[n]=1;
	int prox=buracos[n];
	if(!visitados[prox])
	{
		visitar(prox,visitados,buracos);
	}
}
int main()
{
	int n,i;
	scanf("%d", &n);
	int buracos[n],visitados[n],tocas=0;
	for(i=0;i<n;i++)
	{
		scanf("%d", &buracos[i]);
		visitados[i]=0;
	}
	for(i=0;i<n;i++)
	{
		if(visitados[i]==0)
		{
			visitar(i,visitados,buracos);
			tocas++;
		}
	}
	printf("%d\n", tocas);

}
