#include <stdio.h>
#include <locale.h>

int main()
{
  int a, b;
  char out;
  setlocale(LC_ALL, "Rus");
  printf("¬ведите два числа через пробел\n");
  scanf ("%d%d", &a, &b);
  if(a == b)
  {
    printf("Equal");
  }
  else if(a > b)
  {
    printf("Above");
  }
  else
  {
    printf("Less");
  }
  return 0;
}
