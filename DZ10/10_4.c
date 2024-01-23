#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *f;
	int n = 1000;
	char word[n];
	char c;
	int count=0;
	f = fopen("DZ4_in.txt", "r+");
	while ((c = fgetc(f)) != EOF && c != '\n')
	{
		word[count] = c;
		count++;
	}
	fclose(f);
	f = fopen("DZ4_out.txt", "w");
	for(int i = 0; i < count; i++)
	{
		int flag = 0;
		for(int j = i + 1; j < count; j++)
		{
			if(word[i] == word[j])
			{
				flag++;
			}
		}
		if(flag == 0 && word[i] != ' ')
		{
			fprintf(f, "%c", word[i]);
		}
	}
	fclose(f);
	return 0;
}
