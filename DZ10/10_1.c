#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *f;
	int n = 100;
	char word[n], word_temp[n];
	char c;
	int count = 0;
	int count_temp = 0;
	int temp;
	
	f = fopen("DZ1_in.txt", "r+");
	while ((c = fgetc(f)) != EOF && c != '\n')
	{
		word[count] = c;
		count++;
	}
	fclose(f);
	for (int i = 0; i < count; i++)
	{
		if (word[i] == ' ')
		{
			temp = i;
		}
	}
	for(int i = 0; i < temp; i++)
	{
		for(int j = (temp * 2) - 1; j > temp; j--) 
		{
			if(word[i] == word[j])
			{
				word_temp[count_temp] = word[i];
				count_temp++;
			}
		}
	}
	f = fopen("DZ1_out.txt", "w");
	for (int i = 0; i < count_temp; i++)
	{
        if (word_temp[i] != word_temp[i + 1])
        {
			fprintf(f,"%c ", word_temp[i]);
        }
    }
	fclose(f);
}
