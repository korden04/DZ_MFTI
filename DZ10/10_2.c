#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *f;
	int n = 1000;
	char word[n];
	char c;
	int count=0;
	
	f = fopen("DZ2_in.txt", "r+");
	while ((c = fgetc(f)) != EOF && c != '\n')
	{
		word[count] = c;
		count++;
	}
	fclose(f);
	f = fopen("DZ2_out.txt", "w");
	for(int i = 0; i < count; i++)
	{
		switch(word[i])
		{
			case 'a':
				fprintf(f,"%c", 'b');
				break;
			case 'b':
				fprintf(f,"%c", 'a');
				break;
			case 'A':
				fprintf(f,"%c", 'B');
				break;
			case 'B':
				fprintf(f,"%c", 'A');
				break;
			default:
				fprintf(f,"%c", word[i]);
		}
	}
	fclose(f);
}
