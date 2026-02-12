#include <stdio.h>

int main(void)
{
	printf("Size of char: %lu\n", (unsigned long) sizeof(char));
	printf("Size of unsigned char: %lu\n", (unsigned long) sizeof(unsigned char));
	printf("Size of short: %lu\n", (unsigned long) sizeof(short));
	printf("Size of unsigned short: %lu\n", (unsigned long) sizeof(unsigned short));
	printf("Size of int: %lu\n", (unsigned long) sizeof(int));
	printf("Size of unsigned int: %lu\n", (unsigned long) sizeof(unsigned int));
	printf("Size of long: %lu\n", (unsigned long) sizeof(long));
	printf("Size of unsigned long: %lu\n", (unsigned long) sizeof(unsigned long));
	printf("Size of long long: %lu\n", (unsigned long) sizeof(long long));
	printf("Size of unsigned long long: %lu\n", (unsigned long) sizeof(unsigned long long));
	printf("Size of float: %lu\n", (unsigned long) sizeof(float));
	printf("Size of double: %lu\n", (unsigned long) sizeof(double));
	printf("Size of long double: %lu\n", (unsigned long) sizeof(long double));

	return 0;
}
