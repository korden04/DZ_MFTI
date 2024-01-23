#include <stdio.h>
#include <locale.h>

int main()
{
  int x_1, y_1, x_2, y_2;
  float k, b;
  setlocale(LC_ALL, "Rus");
  printf("¬ведите четыре числа через пробел\n");
  scanf ("%d%d%d%d", &x_1, &y_1, &x_2, &y_2);
  k = (float)(y_2 - y_1) / (x_2 - x_1);
  b = (float)(x_2 * y_1 - y_2 * x_1) / (x_2 - x_1);
  printf("%.2f %.2f", k, b);
  return 0;
}
