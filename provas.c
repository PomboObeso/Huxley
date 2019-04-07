#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int maior(int notas[], int i, int maior_v, int pos_maior)
{
  if(i == 11)
  {
    return pos_maior;
  }
  if(i == 0 || notas[i] > maior_v)
  {
    maior_v = notas[i];  
    pos_maior = i;      
  }
  return maior(notas, i + 1, maior_v, pos_maior);
}
void f_nota(int a[], int c)
{
  if(c == 11)
  {
    return;
  }
  else
  {
    a[c] = 0;
    f_nota(a, c+1);
  }
}

int comparador(char gabarito[], char aluno[], int cont, double n_total)
{
  if(cont == 10)
  {
    return n_total;
  }
  else
  {
    if(gabarito[cont] == aluno[cont])
    {
      n_total += 1;
    }
    comparador(gabarito, aluno, cont+1, n_total);
  }
}

void nota(char gabarito[], char aluno[], int count, int num, int media, int notas[])
{
  double p;
  scanf("%d", &num);

  if(num == 9999)
  {
    p = (media * 100.0) / count;
    printf("%.1lf%%\n", p);
    return;
  }
  else
  {
    scanf(" %s", aluno);
    double nota = comparador(gabarito, aluno, 0, 0);
    printf("%d %.1lf\n", num, nota);
    notas[(int)nota]++;
    if(nota >= 6)
    {
      media += 1;
    }
  }
  nota(gabarito, aluno, count+1, num, media, notas);
}

int main()
{
  char gabarito[11];
  char aluno[11];
  int notas[11];
  f_nota(notas, 0);
  scanf(" %s", gabarito);
  nota(gabarito, aluno, 0, 0, 0, notas);
  printf("%d.0\n", maior(notas, 0, 0, 0));
  return 0;
}
