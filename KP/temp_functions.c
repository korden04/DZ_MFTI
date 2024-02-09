#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>	
#include <unistd.h>
#include <inttypes.h>
#include "temp_functions.h"

struct temp_data data[0]; 
char *input_file = NULL;
FILE *file;


void month_temp (struct temp_data data[], int month, int *average_month_temp, int *min_month_temp, int *max_month_temp, uint8_t size)
{
    int max = 0;
    int min = 0;
    int sum = 0;
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (data[i].month == month)
        {
            sum += data[i].t;
            if (count == 0)
            {
                max = data[i].t;
                min = data[i].t;
            }
            if (data[i].t > max)
            {
                max = data[i].t;
            }
            if (data[i].t < min)
            {
				min = data[i].t;
            }   
            count++;
        }
    }

    *average_month_temp = sum/count;
    *min_month_temp = min;
    *max_month_temp = max;
}

void year_temp (struct temp_data data[], int year, int *average_year_temp, int *min_year_temp, int *max_year_temp, uint8_t size)
{
    int max = 0;
    int min = 0;
    int sum = 0;
    int count = 0;
    
    for (int i = 0; i < size; i++)
    {
        if (data[i].year == year)
        {
        	sum += data[i].t;
            if (count == 0)
            {
                max = data[i].t;
                min = data[i].t;
            }
            if (data[i].t > max)
            {
                max = data[i].t;
            }
            if (data[i].t < min)
            {
				min = data[i].t;
            }   
        count++;
        }
    }
    *average_year_temp = sum/count;
    *min_year_temp = min;
    *max_year_temp = max;

} 

int Open_csv(void)
{
	input_file = optarg;
	if (input_file == NULL)
	{
		printf("Err: No input file\n");
		return 0;
	}
	
	if (input_file != NULL)
	{
    	if ((file = fopen(input_file, "r")) == NULL)
    	{
		printf("Err occured while opening input file!\n");
		return 1;
		}
	GetData_csv(file);
	}
	fclose(file);
	return 1;
}

void GetData_csv(FILE *file)
{
	char str[32] = { 0, }; 
	char *token;
	int i = 0;

	while (fgets(str, sizeof(str), file))
	{

		token = strtok(str, ";");
		data[i].year = atoi(token);
		token = strtok(NULL, ";");
		data[i].month = atoi(token);
		token = strtok(NULL, ";");
		data[i].day = atoi(token);
		token = strtok(NULL, ";");
		data[i].hour = atoi(token);
		token = strtok(NULL, ";");
		data[i].minute = atoi(token);
		token = strtok(NULL, ";");
		data[i].t = atoi(token);
		i++;
	}
}
