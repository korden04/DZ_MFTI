#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int a, max;
    setlocale(LC_ALL, "Rus");
    printf("¬ведите число\n");
    scanf("%d", &a);
    for ( max = 0; a; a /= 10 )
        max = (a%10 > max) ? a%10 : max;
    printf("%d\n", max);
    return 0;
}
