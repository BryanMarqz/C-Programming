/* reverse.c (Chapter 8, page 164) */
/* Reverses a series of numbers */

#include <stdio.h>

#define SIZE 10

int main(void)
{
  int a[SIZE], i;

  printf("Enter %d numbers: ", SIZE);
  for (i = 0; i < SIZE; i++)
    scanf("%d", &a[i]);

  printf("In reverse order:");
  for (i = SIZE - 1; i >= 0; i--)
    printf(" %d", a[i]);
  printf("\n");

  return 0;
}
