#include <stdio.h>
#include <locale.h>

int main()
{
  int a, b, rez;
  setlocale(LC_ALL, "Rus");
  printf("¬ведите число\n");
  scanf ("%d", &a);
  for(b = 0; a > 0; b++) 
  {
    rez = rez * 10 + a % 10;
    a /= 10;
  }
  printf("%d", rez);
  return 0;
}
