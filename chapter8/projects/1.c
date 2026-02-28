/* repdigit.c (Chapter 8, page 166) */
/* Checks numbers for repeated digits */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>

int main(void)
{
  bool digit_seen[10] = {false};
  bool tracking_number[10] = {false};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  printf("Repeated digit(s): ");
  
  while (n > 0) {
    digit = n % 10;
    if (digit_seen[digit])
    {
        if(!tracking_number[digit])
        {
      	  printf("%d ", digit);
          tracking_number[digit] = true;
        }
    }
    digit_seen[digit] = true;
    n /= 10;
  }

  printf("\n"); 

  return 0;
}
