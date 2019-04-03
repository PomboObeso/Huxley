#include <stdio.h>

void ler(double n, double total, int cont)
{
    scanf("%lf",&n);
	double aux = 0;

	if(n == 999)
	{
		printf("%.2lf\n%d\n",total,cont);
		return;
	}
	else
	{

		if(n > 2)
		{
		    n = n - 2;
			aux = n * 12.89;
			cont += 1;
		}

		ler(n,total + aux, cont);
	}
}

int main()
{
	ler(0,0,0);
	return 0;
}
