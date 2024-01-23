#include <stdio.h>
#include <locale.h>

int search(int *arr, int n)
{
	int val = 0;
	for(int i = 0; i < n; i++)
	{
		if (arr[i] / 10 % 10 == 0)
		{                         
			val++;
		}
	}
	return val;
}

void sort(int *arr, int count, int n)
{
	int j = 0;
	int rez[count];
	for(int i = 0; i < n; i++)
	{
		if (arr[i] / 10 % 10 == 0)
		{                         
			rez[j] = arr[i];
			j++;
		}
	}
	for (int i = 0; i < count; i++) 
		printf("%d ", rez[i]);
}

int main(void)
{
	int n = 10;
	int count = 0;
	int nums[n];
	setlocale(LC_ALL, "Rus");
	printf("¬ведите последовательность из дес€ти чисел\n");
	for (int i = 0; i < n; i++) 
        scanf ("%d", &nums[i]);
	count = search(nums, n);
	sort(nums, count, n);
	return 0;
}

