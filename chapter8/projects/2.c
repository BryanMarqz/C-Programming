/* repdigit.c (Chapter 8, page 166) */
/* Checks numbers for repeated digits */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>

int main(void)
{
  int digit, i, sum[10] = {0};
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    sum[digit] += 1;
    n /= 10;
  }

  printf("Digit:       ");
  for(i = 0; i < 10; i++)
    printf("%d ", i);
  printf("\n"); 

  printf("Occurrences: ");
  for(i = 0; i < 10; i++)
    printf("%d ", sum[i]);
  
  return 0;
}
