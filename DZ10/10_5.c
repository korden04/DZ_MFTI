#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *f;
	int n = 1000;
	char word[n];
	char c;
	int count=0;
	int a = 0;
	f = fopen("DZ5_in.txt", "r+");
	while ((c = fgetc(f)) != EOF && c != '\n')
	{
		word[count] = c;
		count++;
	}
	fclose(f);
	f = fopen("DZ5_out.txt", "w");
	for (int i = 0; i < count; i++)
	{
		if(word[i] == ' ' && word[i - 1] == 'a')
		{
			a++;
		}
			
	}
	fprintf(f, "%d", a);
	fclose(f);
	return 0;
}
