#include <stdio.h>
#include <locale.h>
#include <math.h>


int main()
{
  int a;
  int rez = 0;
  setlocale(LC_ALL, "Rus");
  printf("¬ведите строку\n");
  do
  {
      a = getchar();
      if (a == "(") 
      {
        rez++;
      }
      else if(a == ")") 
      {
        rez--;
      }
      else 
      {
          rez = -1;
      }
      
  } while (a != '.' || rez > 0);
  
  if (rez == 0)
  {
      printf("YES");
  }
  else
  {
      printf("NO");
  }
  return 0;
}
