#include <stdio.h>
#include <locale.h>

int main()
{
  int a, b, c;
  setlocale(LC_ALL, "Rus");
  printf("¬ведите три числа через пробел\n");
  scanf ("%d%d%d", &a, &b, &c);
  if(a < b && b < c)
  {
      printf("YES");
  }
  else
  {
      printf("NO");
  }
  return 0;
}
