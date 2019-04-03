#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int valor(long int n, int ciclos)
{
    if(n!=1)
    {
        if(n%2==0)
        {
            n = n/2;
        }
        else
        {
            n = (3*n)+1;
        }
        valor(n, ciclos+1);
    }
    else
    {
        return ciclos;
    }
}

long int total(int i, int j, long int cont_max)
{
    long int max;

    if(i <= j)
    {
        max = valor(i, 1);
        if(max>cont_max)
        {
            total(i+1, j, max);
        }
        else
        {
            total(i+1, j, cont_max);
        }
    }
    else
    {
        return cont_max;
    }
}

void printador()
{
  int a, b;

  if(scanf("%d %d", &a, &b) == EOF)
  {
    return;
  }
  else
  {

    if(a<=b)
    {
      printf("%d %d %ld\n", a, b, total(a, b, 0));
      printador();
    }
    else
    {
      printf("%d %d %ld\n", a, b, total(b, a, 0));
      printador();
    }
  }
}

int main()
{
    printador();

    return 0;
}
