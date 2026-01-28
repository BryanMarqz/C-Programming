#include <stdio.h>

int main(void)
{
	int grade;

	printf("Enter numberical grade: ");
	scanf("%d", &grade);

	if(grade >= 6 && grade <= 9)
		grade = 1;
	else if(grade >= 10 && grade <= 100)
		grade /= 10;

	switch(grade)
	{
		case 0: case 1: case 2: case 3: case 4: case 5:
			printf("Letter grade: F\n");
			break;
		case 6:
			printf("Letter grade: D\n");
			break;
		case 7:
			printf("Letter grade: C\n");
			break;
		case 8:
			printf("Letter grade: B\n");
			break;
		case 9: case 10:
			printf("Letter grade: A\n");
			break;
		default:
			printf("Digit is smaller than 0 or larger than 100.\n");
			break;
	}

	return 0;
}
