#include <stdio.h>

void ler(int n, int c, int s, int e, int aux, int cont, int cont2)
{
	if(n == cont)
	{
		if(cont2 >= 1)
		{
			printf("S\n");
		}
		if(cont2 == 0)
		{
			printf("N\n");
		}
		return;
	}
	else
	{
		scanf("%d %d", &s, &e);

        aux = aux + e - s;

		if(aux > c)
		{
			cont2 +=1;
		}

		ler(n,c,s,e,aux,cont + 1,cont2);
	}
}

int main()
{
	int n,c;
	
	scanf("%d %d", &n,&c);

	ler(n,c,0,0,0,0,0);
	return 0;
}
