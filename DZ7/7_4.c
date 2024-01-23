#include <stdio.h>
#include <locale.h>

void func(int a)
{
	if (a % 2 != 0 && a != 0)
	{
		printf("%d ", a);
	}
	scanf("%d", &a);
	if (a != 0) 
	{
		func(a);
	}
}

int main(void)
{
	setlocale(LC_ALL, "Rus");
	printf("Введите последовательность чисел\n");
	func(0);
	return 0;
}
