#include <stdio.h>
#include <locale.h>

int find_max_array(int size, int a[])
{
	int max = 0;
	for(int i = 0; i <= size; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
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
	printf("%d", find_max_array(count, nums));
	return 0;
}
