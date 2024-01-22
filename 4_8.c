#include <stdio.h>
#include <locale.h>

int main()
{
  int a, b, c, d, e, min;
  setlocale(LC_ALL, "Rus");
  printf("¬ведите п€ть чисел через пробел\n");
  scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);
  min = (a < b) ? a : b;
  min = (min < c) ? min : c;
  min = (min < d) ? min : d;
  min = (min < e) ? min : e; 
  printf("%d", min);
  return 0;
}
