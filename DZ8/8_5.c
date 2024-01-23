#include <stdio.h>
#include <locale.h>

int search(int *arr, int n)
{
	int x = 0;
	int out = 0; 
	for (int i = 0; i < n; i++)
	{
		int temp = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
				temp++;
		}
		if (x < temp)
		{
			x = temp;
			out = arr[i];
		}
	}
	return(out);
}

int main(void)
{
	int n = 10;
	int nums[n];
	setlocale(LC_ALL, "Rus");
	printf("¬ведите последовательность из дес€ти чисел\n");
	for (int i = 0; i < n; i++) 
        scanf ("%d", &nums[i]);
    printf("%d", search(nums, n));
	return 0;
}
