#include <stdio.h>
#include <locale.h>

int is_two_same(int size, int a[])
{
	int flag = 0;
	for(int i = 0; i < size; i++)
	{
		for(int j = i + 1; j <= size; j++)
		{
			if (a[j] == a[i])
			{
				flag = 1;
				break;
			}
		}
	}
	return flag;
}

int main(int argc, char **argv)
{
	int n;
	int count;
	setlocale(LC_ALL, "Rus");
	printf("¬ведите количество чисел\n");
		scanf("%d", &n);
	int nums[n];
		printf("¬ведите последовательность чисел\n");
	for (int i = 0; i < n; i++)
	{ 
		scanf("%d", &nums[i]);
		count = i;
	}	
	printf("%d", is_two_same(count, nums));
	return 0;
}
