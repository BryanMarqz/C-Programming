/*
total_sec is a time represented as the number of seconds since midnight.
hr, min and sec are pointers to variables in which the function will store 
the equivalent time in hours (0-23), minutes (0-59) and seconds (0-59), respectively.
*/

#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
	int time_in_seconds, hr, min, sec;

	printf("Enter time since midnight in seconds: ");
	scanf("%d", &time_in_seconds);
	
	split_time(time_in_seconds, &hr, &min, &sec);

	printf("%.2d:%.2d:%.2d\n", hr, min, sec);

	return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
	*hr = total_sec / 3600;
	*min = (total_sec / 60) % 60;
	*sec = total_sec % 60;
}
