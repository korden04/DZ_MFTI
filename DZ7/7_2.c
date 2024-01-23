#include <stdio.h>
#include <locale.h>

void func(int a, int b)
{
	printf("%d ", a);
	if (a > b) 
	{
		func(a - 1, b);
	}
	else if (a < b)
	{
		func(a + 1, b);
	}
}

int main(void)
{
	int a, b;
	setlocale(LC_ALL, "Rus");
	printf("Введите два числа\n");
	scanf("%d %d", &a, &b);
	func(a, b);
	return 0;
}

