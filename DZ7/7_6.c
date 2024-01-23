#include <stdio.h>
#include <locale.h>

int recurs_power(int n, int p)
{
	if (p == 0)
        return 1;
    return n * recurs_power(n, p - 1);
}

int main(void)
{
	int a, b;
	setlocale(LC_ALL, "Rus");
	printf("Введите два числа\n");
	scanf("%d %d", &a, &b);
	printf("%d ", recurs_power(a, b)); 
	return 0;
}
