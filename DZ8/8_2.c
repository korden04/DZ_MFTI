#include <stdio.h>
#include <locale.h>
 
void shift (int *arr, int n)
{
	int rev;
	for (int i = 0; i < 4; i++)
	{
		rev = arr[i + 8];
		arr[i + 8] = arr[i + 4];
		arr[i + 4] = arr[i];
		arr[i] = rev;
	}
}

int main(void)
{
	int n = 12;
	int nums[n];
	setlocale(LC_ALL, "Rus");
	printf("¬ведите последовательность из двенадцати чисел\n");
	for (int i = 0; i < n; i++) 
		scanf ("%d", &nums[i]);
	shift(nums, n);
	for (int i = 0; i < n; i++) 
		printf("%d ", nums[i]);
	return 0;
}
