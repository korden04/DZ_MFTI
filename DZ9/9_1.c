#include <stdio.h>
#include <locale.h>

void sort_even_odd(int n, int a[])
{
	int i, j;
	int temp;
	for(i = 0; i < n; i++)
	{
		for(j = i; j <= n; j++)
		{
			if(a[i] % 2 == 1)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	} 
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
	sort_even_odd(count, nums);
	for (int i = 0; i < n; i++) 
		printf("%d ", nums[i]);
	return 0;
}
