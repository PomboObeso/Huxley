#include <stdio.h>

void conta(int a, int b, int cont, int cont2)
{
	if(cont == 50)
	{
		printf("%d\n", cont2);
		return;
	}
	else
	{
		if(cont % a == 0 && cont % b == 0)
		{
			cont2 += 1;
		}
		/*if(b % cont == 0)
		{
			cont2 += 1;
		}*/

		conta(a,b,cont + 1, cont2);
	}
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	conta(a,b,1,0);
	return 0;
}
