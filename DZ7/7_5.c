#include <stdio.h>
#include <locale.h>

int acounter(void)
{
	int count = 0;
	char c;
	if ((c = getchar()) != '.'){
		if (c == 'a'){
			count += 1;
		}
		count += acounter();
		return(count);
	}
	return (count);
}
int main(void)
{
	setlocale(LC_ALL, "Rus");
	printf("Введите последовательность символов\n");
	printf("%d", acounter());
	return 0;
}
