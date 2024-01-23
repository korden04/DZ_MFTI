#include <stdio.h>
#include <locale.h>

int main()
{
  int a, b;
  setlocale(LC_ALL, "Rus");
  printf("¬ведите число\n");
  scanf ("%d", &a);
  for(b = 0; a > 0; b++) a /= 10;
  if(b == 3)
  {
      printf("YES");
  }
  else
  {
      printf("NO");
  }
  return 0;
}
