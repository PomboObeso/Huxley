#include <stdio.h>

int valor_serie (int serie[], int quantidade ,int cont, int valor)
{
  if (cont == quantidade)
  {
    return valor;
  }
  else
  {
    if (serie[cont+1] == valor)
    {
      valor = 0;
    }
    valor_serie(serie,quantidade,cont+1,valor);
  }
}
void loop (int serie[], int quantidade, int qtd_pares, int qtd_impares, int cont,int soma_pares, int soma_impares)
{
  if (cont == quantidade)
  {
    printf("%d\n",qtd_pares);
    printf("%d\n",qtd_impares);

    if (soma_pares > soma_impares)
    {
      printf("%d\n",soma_pares);
    }
    else
    {
      printf("%d\n",soma_impares);
    }
  }
  else
  {
    if (serie[cont] % 2 == 0)
    {
      int valor =  valor_serie (serie,quantidade,cont,serie[cont]);
      soma_pares += valor;
      qtd_pares += 1;
      loop (serie,quantidade,qtd_pares,qtd_impares,cont+1,soma_pares,soma_impares);
    }
    else
    {
      int valor =  valor_serie (serie,quantidade,cont,serie[cont]);
      soma_impares += valor;
      qtd_impares += 1;
      loop (serie,quantidade,qtd_pares,qtd_impares,cont+1,soma_pares,soma_impares);
    }
  }
}
void repetidor (int quantidade, int serie[], int cont)
{
  if (cont == quantidade)
  {
    loop (serie,quantidade,0,0,0,0,0);
  }
  else
  {
    scanf("%d",&serie[cont]);
    repetidor (quantidade,serie,cont+1);
  }
}

int main ()
{
  int quantidade;
  scanf("%d",&quantidade);

  int serie [quantidade];

  repetidor (quantidade,serie,0);

  return 0;
}
