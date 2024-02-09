#include <stdio.h>
#include <stdint.h>

struct temp_data  
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t t;
};

extern struct temp_data data[0];
void month_temp (struct temp_data data[], int month, int *average_temp, int *min_temp, int *max_temp, uint8_t size);
void year_temp (struct temp_data data[], int year, int *average_temp, int *min_temp, int *max_temp, uint8_t size);
int Open_csv(void);
void GetData_csv(FILE*file);
