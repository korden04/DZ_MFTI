#include <stdio.h>
#include <locale.h>

void swap(int *arr,int i,int j)
{
    int temp = arr[i];
    arr[i]   = arr[j];
    arr[j]   = temp;
}
 
void sort(int *arr, int n)
{
	int count = 0;
    for(int i = n - 1; count < n; count++)
    {
        for(int j = i; j > 0; j--){
			if(arr[j - 1] % 10 > arr[j] % 10){
               swap(arr, j - 1, j);
            }
        }
    }
}

int main(void)
{
	int n = 10;
	int nums[n];
	setlocale(LC_ALL, "Rus");
	printf("¬ведите последовательность из дес€ти чисел\n");
	for (int i = 0; i < n; i++) 
        scanf ("%d", &nums[i]);
	sort(nums, n);
	for (int i = 0; i < n; i++) 
		printf("%d ", nums[i]);
	return 0;
}
