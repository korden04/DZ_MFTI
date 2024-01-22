#include <stdio.h>
#include <locale.h>

int main()
{
  int a, b, c, d, e, max;
  setlocale(LC_ALL, "Rus");
  printf("¬ведите п€ть чисел через пробел\n");
  scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);
  max = (a > b) ? a : b;
  max = (max > c) ? max : c;
  max = (max > d) ? max : d;
  max = (max > e) ? max : e;
  printf("%d", max);
  return 0;
}
