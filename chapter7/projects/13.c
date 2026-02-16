#include <stdio.h>

int main(void)
{
	int words = 1;
	float length = 0.0f;
	char ch;
	
	printf("Enter a sentence: ");
	
	while((ch = getchar()) != '\n')
	{
		if(ch == ' ')
			words++;
		else
			length++;	
	}
	
	printf("Average word length: %.1f\n", (length/words));

	return 0;
}
