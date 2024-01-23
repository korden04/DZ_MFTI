#include <stdio.h>
#include <locale.h>

void reverse(int a)
{
	printf("%d ", a % 10);
	if (a >= 10)
	{ 
		reverse(a / 10);
	}	
}
int main(void)
{
	int a;
	setlocale(LC_ALL, "Rus");
	printf("Введите число\n");
	scanf("%d", &a);
	reverse(a);
	return 0;
}

