#include <stdio.h>
#include <ctype.h>

#define N 26
typedef int Bool;

void read_word(int counts[26]);
Bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{ 
	int array1[N] = {0},
	    array2[N] = {0};	
	Bool flag = 1;

	printf("Enter first word: ");

	read_word(array1);	

	printf("Enter second word: ");

	read_word(array2);

	flag = equal_array(array1, array2);

	if(flag)	
		printf("The words are anagrams.\n");
	else	
		printf("The words are not anagrams.\n");

	return 0;
}

void read_word(int counts[26])
{
	char ch;
	while((ch = getchar()) != '\n')
	{
		if(isalpha(ch))
			counts[tolower(ch) - 'a']++;
	}
}

Bool equal_array(int counts1[26], int counts2[26])
{
	Bool flag = 1;
	int i;

	for(i = 0; i < N; i++)
	{
		if(counts1[i] != counts2[i])
		{
			flag = 0;
			return flag;
		}
	}
	return flag;
}
