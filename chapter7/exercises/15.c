#include <stdio.h>

typedef char Int8;
typedef short Int16;
typedef int Int32; 

int main(void)
{
	Int32 i;
	
	printf("32 bits on my machine: %lu\n", (unsigned long) sizeof(i));
 
	return 0;
}
