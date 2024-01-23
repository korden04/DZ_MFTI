#include <stdio.h>
#include <locale.h>

int main()
{
  int a, b;
  setlocale(LC_ALL, "Rus");
  printf("¬ведите два числа через пробел\n");
  scanf ("%d%d", &a, &b);
  if(a > b)
  {
      printf("%d %d\n", a, b);
  }
  else
  {
      printf("%d %d\n", b, a);
  }
  return 0;
}
