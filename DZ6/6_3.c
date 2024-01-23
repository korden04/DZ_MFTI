#include <stdio.h>
#include <locale.h>
#include <math.h>

int nod(int a, int b)
{   
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}   

int main()
{
  int a, b, rez;
  setlocale(LC_ALL, "Rus");
  printf("¬ведите два числа\n");
  scanf ("%d%d", &a, &b);
  rez = nod(a, b);
  printf("%d", rez);
  return 0;
}
