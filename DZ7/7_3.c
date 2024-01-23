#include <stdio.h>
#include <locale.h>

int func(int a)
{
	int count = 0;
	if (a % 2 == 1) 
	{
		count = 1;
	}
	if (a > 1)
	{
		count += func(a / 2); 
	}
	return (count);
}

int main(void)
{
	int a;
	setlocale(LC_ALL, "Rus");
	printf("Введите число\n");
	scanf("%d", &a);
    printf("%d ",func(a));
    return 0;
}
