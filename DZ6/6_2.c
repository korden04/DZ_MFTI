#include <stdio.h>
#include <locale.h>
#include <math.h>

int comp(int a)
{   
    return pow(2, a - 1);
}   

int main()
{
  int a, rez;
  setlocale(LC_ALL, "Rus");
  printf("������� �����\n");
  scanf ("%d", &a);
  if(a < 1 || a > 64)
  {
      printf("������� ����� �� 1 �� 64");
      return 0;
  }
  rez = comp(a);
  printf("%d", rez);
  return 0;
}
