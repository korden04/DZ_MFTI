#include <stdio.h>
#include <locale.h>

int main()
{
  int a, b, rez;
  setlocale(LC_ALL, "Rus");
  printf("������� ����� a � b\n");
  scanf ("%d%d", &a, &b);
  if(a > b)
  {
      printf("%d ������ ����� %d", b, a);
      return 0;
  }
  for(; a <= b; a++)
  {
      rez += a * a;
  }
  printf("%d", rez);
  return 0;
}
