#include <stdio.h>
#include <locale.h>

int main()
{
  int a, num;
  setlocale(LC_ALL, "Rus");
  printf("¬ведите номер мес€ца\n");
  scanf ("%d", &a);
  num = (a >= 1 && a <= 2 || a == 12) ? 1 : (a >= 3 && a <= 5) ? 2 : (a >= 6 && a <= 8) ? 3 : 4;
  switch (num)
  {
      case 1:
        printf("Winter");
        break;
      case 2:
        printf("Spring");
        break;
      case 3:
        printf("Summer");
        break;
      case 4:
        printf("Autumn ");
        break;
      default:
        printf("Ќе тот мес€ц");
  }
  return 0;
}
