#include <stdio.h>
#include <locale.h>

int sum(int a)
{   
    int sum_out = 0;
    for(int i = 1; i <= a; ++i)
        {
            sum_out += i;
        }
    return sum_out;
}   

int main()
{
  int a, rez;
  setlocale(LC_ALL, "Rus");
  printf("¬ведите число\n");
  scanf ("%d", &a);
  rez = sum(a);
  printf("%d", rez);
  return 0;
}
