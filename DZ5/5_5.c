#include <stdio.h>
#include <locale.h>

int main()
{
  int a, sum;
  int comp = 1;
  setlocale(LC_ALL, "Rus");
  printf("¬ведите число больше 10\n");
  scanf ("%d", &a);
  if(a <= 10)
  {
      printf("%d меньше 10", a);
      return 0;
  }
  for(int b = 10; b <= a; b++)
  {
    for (int i = b; i != 0; i /= 10)
    {
        comp *= i % 10;
        sum += i % 10;
    }
    if(sum == comp)
    {
        printf("%d ", b);
    }
    sum = 0;
    comp = 1;
  }
  return 0;
}
