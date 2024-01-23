#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *f;
	int n = 1000;
	char word[n];
	int word_temp[n], word_out[n];
	char c;
	int count = 0;
	int temp = 0;
	int m = 0;
	int l = 0;
	f = fopen("DZ3_in.txt", "r+");
	while ((c = fgetc(f)) != EOF && c != '\n')
	{
		word[count] = c;
		count++;
	}
	fclose(f);
	while (m < count)
	{
		if (word[m] > '0' && word[m] <= '9')
		{
			int j = 0;
			if (word[m + 1] > '0' && word[m + 1] <= '9')
			{
				do
				{
					word_temp[j] = word[m] - '0';
					m++;
					j++;
				}
				while('0' < word[m] && word[m] <= '9');
				for (int k = 0; k < j; k++)
				{
					l = (l * 10) + word_temp[k];
				}
				word_out[temp] = l;
				l = 0;
				temp++;
				
			}
			else
			{
				word_out[temp] = word[m] - '0';
				m++;
				temp++;
			}
		}
		else
		{
			m++;
		}
	}
	for (int i = 0; i < temp; i++) 
	{
		for (int j = 0; j < temp; j++) 
		{
			if (word_out[j] > word_out[j + 1]) 
			{
				int b = word_out[j];
				word_out[j] = word_out[j + 1];
				word_out[j + 1] = b;
			}
		}
	}
	f = fopen("DZ3_out.txt", "w");
	for (int i = 0; i <= temp; i++)
	{
		fprintf(f,"%d ", word_out[i]);
    }
	fclose(f);
}

