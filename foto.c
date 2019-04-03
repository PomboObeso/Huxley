#include <stdio.h>

int main()
{
	int i,j;
	double aux,fot[4];
	for(i = 0; i < 4; i++)
	{
		scanf("%lf", &fot[i]);
	}
	for(i = 0; i < 3; i++)
	{
		for(j = i+1; j < 4; j++)
		{
			if(fot[i] > fot[j])
			{
				aux = fot[i];
				fot[i] = fot[j];
				fot[j] = aux;
			}
		}
	}
	printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n",fot[0],fot[2],fot[3],fot[1]);
	return 0;
}
