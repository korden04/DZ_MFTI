#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "temp_functions.h"

int main (int argc, char *argv[])
{
    int opt;
    int input;
    while ((opt = getopt(argc, argv, "f:m:y::h")) != -1)
    {
        switch (opt)
        {
			case 'f':
				Open_csv();
			break;      
			case 'm':
				input = atoi(optarg);	
				int average_month_temp;
				int min_month_temp;
				int max_month_temp;	
				month_temp(data, input, &average_month_temp, &min_month_temp, &max_month_temp, 100);			
				printf("Average temperature in month = %d\n", average_month_temp);
				printf("Min temperature in month = %d\n", min_month_temp);
				printf("Max temperature in month = %d\n", max_month_temp);
			break;
			case 'y':
				input = atoi(optarg);
				int average_year_temp;
				int min_year_temp;
				int max_year_temp;
				year_temp(data, input, &average_year_temp, &min_year_temp, &max_year_temp, 100); 			
				printf("Average temperature in year = %d\n", average_year_temp);
				printf("Min temperature in year = %d\n", min_year_temp);
				printf("Max temperature in year = %d\n", max_year_temp);
			break;
			case 'h':
				printf("Options:\n");
				printf("-h Help\n");
				printf("-f File name\n");							             
				printf("-m Monthly temperature\n"); 
				printf("-y Yearly temperature\n");           
        break;
        }
    }
    return 0;
}
