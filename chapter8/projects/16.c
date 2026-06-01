#include <stdio.h>
#include <ctype.h>

#define N 26
typedef int Bool;

int main(void)
{
	char ch;
	int i, 
	    array[N] = {0};
	Bool flag = 1;
	
	printf("Enter first word: ");

	while((ch = getchar()) != '\n')
	{
		if(isalpha(ch))
			array[tolower(ch) - 'a']++;
	}

	printf("Enter second word: ");

	while((ch = getchar()) != '\n')
	{
		if(isalpha(ch))
			array[tolower(ch) - 'a']--;
	}

	for(i = 0; i < N; i++)
	{
		if(array[i] != 0)
		{
			flag = 0;
			break;
		}
	}

	if(flag)	
		printf("The words are anagrams.\n");
	else	
		printf("The words are not anagrams.\n");

	return 0;
}
