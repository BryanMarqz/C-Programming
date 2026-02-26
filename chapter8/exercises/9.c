#include <stdio.h>

#define MONTH 30
#define HOURS 24

int main(void)
{
	int i, j;
	float temperature_readings[MONTH][HOURS] = {0.0f},
		avg = 0.0f;

	for(i = 0; i < MONTH; i++)
	{
		for(j = 0; j < HOURS; j++)
			avg += temperature_readings[i][j];
	}
	
	avg /= MONTH * HOURS;

	return 0;
}
