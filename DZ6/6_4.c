#include <stdio.h>
#include <locale.h>
#include <math.h>

int is_happy_number(int n)
{   
    int sum = 0;
    int comp = 1;
    for (int i = n; i != 0; i /= 10)
    {
        comp *= i % 10;
        sum += i % 10;
    }
    return sum == comp;
}   

int main()
{
  int a;
  setlocale(LC_ALL, "Rus");
  printf("¬ведите два числа\n");
  scanf ("%d", &a);
  is_happy_number(a) ? printf("YES") : printf("NO"); 
  return 0;
}
