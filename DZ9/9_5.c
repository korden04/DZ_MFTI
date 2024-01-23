#include <stdio.h>
#include <locale.h>

int average(int size, int nums[size][size])
{	
	int temp = 0;
	for(int i = 0; i < size; i++)
		temp += nums[i][i];
	temp /= size;
	return temp;
}

int main(void)
{
	int n, diag;
	int count = 0;
	setlocale(LC_ALL, "Rus");
	printf("¬ведите размерность матрицы\n");
	scanf("%d", &n);
	int nums[n][n];
	printf("¬ведите значени€ элементов матрицы\n");
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &nums[i][j]);
		}
	}
	diag = average(n, nums);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if (nums[i][j] > diag)
			{
				count++;
			}
		}
	}
	printf("%d", count);
	return 0;
}
