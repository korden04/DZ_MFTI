#include <stdio.h>
#include <locale.h>

int main()
{
  int a, b, c, rez;
  setlocale(LC_ALL, "Rus");
  printf("¬ведите номер мес€ца\n");
  scanf ("%d%d%d", &a, &b, &c);
  rez = ((a + b) > c && (a + c) > b && (b + c) > a) ? 1 : 2;
  switch(rez)
    {
      case 1:
        printf("YES");
        break;
      case 2:
        printf("NO");
        break;
      default:
        break;
    }
  return 0;
}
