#include <stdio.h>
#include <locale.h>

int main()
{
  int a, b;
  setlocale(LC_ALL, "Rus");
  printf("¬ведите число\n");
  scanf ("%d", &a);
  for(b = 0; a > 0; b++) 
  {
     if(a % 2 != 0)
     {
         printf("NO");
         return 0;
     }
     a /= 10; 
  }
  printf("YES");
  return 0;
}
