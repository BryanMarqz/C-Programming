#include <stdio.h>

void day_to_date(int day_of_year, int year, int *month, int *day);

int main(void)
{
	int day_of_year, year, month, day;

	printf("Enter day of year (1-366): ");
	scanf("%d", &day_of_year);
	printf("Enter year: ");
	scanf("%d", &year);

	day_to_date(day_of_year, year, &month, &day);

	printf("Month: %d, Day: %d\n", month, day);

	return 0;
}

void day_to_date(int day_of_year, int year, int *month, int *day)
{
	int is_leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (is_leap)
		days_in_month[1] = 29;

	*month = 0;
	while (day_of_year > days_in_month[*month])
	{
		day_of_year -= days_in_month[*month];
		(*month)++;
	}

	*day = day_of_year;
	(*month)++;  /* convert from 0-indexed array to 1-indexed month */
}
