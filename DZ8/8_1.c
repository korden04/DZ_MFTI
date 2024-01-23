#include <stdio.h>
#include <locale.h>

int main(void)
{ 
	int n = 5;
	float nums[n];
	setlocale(LC_ALL, "Rus");
	printf("¬ведите последовательность из п€ти чисел\n");
	for (int i = 0; i < n; i++) 
		scanf ("%3f", &nums[i]);
	printf("%3f", (nums[0] + nums[1] + nums[2] + nums[3] + nums[4]) / 5);
	return 0;
}
