#include <stdio.h>
#include <locale.h>

int main()
{
  int a, b, c, max;
  setlocale(LC_ALL, "Rus");
  printf("¬ведите три числа через пробел\n");
  scanf ("%d%d%d", &a, &b, &c);
  max = (a > b && a > c) ? a : (b > c) ? b : c;
  printf("%d", max);
  return 0;
}
