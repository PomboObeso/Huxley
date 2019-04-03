#include <stdio.h>

void ler(int i, int aux)
{
	if(i == 0)
	{
		printf("%d\n", aux);
		return;
	}
	else
	{
		if(i > aux)
		{
			aux = i;
		}
		scanf("%d",&i);

		ler(i,aux);
	}
}

int main()
{
	int i = 0;
	scanf("%d", &i);
	ler(i,0);
	return 0;
}
