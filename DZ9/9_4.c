#include <stdio.h>
#include <locale.h>

int main(void)
{
	char num_1;
	int cells[2][8];
	int i, j, num_2, rez;
	for(i = 0; i < 2; i++)
	{ 
		for(j = 0; j < 8; j++)
		{
			if((i + j) % 2 != 0)
			{
				cells[i][j] = 1;
			}
			else
			{
				cells[i][j] = 0;
			}
		}
	}
	setlocale(LC_ALL, "Rus");
	printf("¬ведите номер клетки\n");
	scanf("%c%d", &num_1, &num_2);
	if ((num_1 == 'A') || (num_1 == 'C') || (num_1 == 'E') || (num_1 == 'G'))
	{
		rez = 1;
	}
	else if ((num_1 == 'B') || (num_1 == 'D') || (num_1 == 'F') || (num_1 == 'H'))
	{
		rez = 0;
	}
	cells[rez][num_2] ? printf("WHITE" ): printf("BLACK");
	return 0;
}
