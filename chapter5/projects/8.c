#include <stdio.h>
#define MINUTES 60

int main(void)
{
	int hour, min, my_time;

	printf("Enter 24-hour time: ");
	scanf("%d :%d", &hour, &min);

	my_time = hour * MINUTES + min;	

	if (my_time <= (480 + 583) / 2)
	{
		// 8:00 a.m. - 10:16 a.m.
		printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
	}
	else if (my_time <= (583 + 679) / 2) 
	{
		// 9:43 a.m. - 11:52 a.m.
		printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
	}
	else if (my_time <= (679 + 767) / 2)
	{
		// 11:19 a.m. - 1:31 p.m.
		printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
	}
	else if (my_time <= (767 + 840) / 2)
	{
		// 12:47 p.m. - 3:00 p.m.
		printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
	}
	else if (my_time <= (840 + 945) / 2)
	{
		// 2:00 p.m. - 4:08 p.m.
		printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
	}
	else if (my_time <= (945 + 1140) / 2)
	{
		// 3:45 p.m. - 5:55 p.m.
		printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
	}
	else if (my_time <= (1140 + 1305) / 2)
	{
		// 7:00 p.m. - 9:20 p.m.
		printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
	}
	else
	{
		// 9:45 p.m. - 11:58 p.m.
		printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
	}
	return 0;
}
