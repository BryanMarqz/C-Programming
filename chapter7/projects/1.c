/* square2.c (Chapter 6, page 110) */
/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void)
{
  short i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%hd", &n);

  for (i = 1; i <= n; i++)
    printf("%10hd%10hd\n", i, i * i);

  return 0;
}
/*
Smallest value of n that causes failure while i is of type
int: 46341
short: 182
long: 3037000500

Therefore, my machine stores short in 16 bits, int as 32 bits and long in 64 bits.
*/

