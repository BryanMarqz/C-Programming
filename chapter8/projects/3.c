/* repdigit.c (Chapter 8, page 166) */
/* Checks numbers for repeated digits */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>

int main(void)
{
  int digit;
  long n, d;

  do
  {
    printf("Enter a number: ");
    scanf("%ld", &n);
    d = n;
    if(d <= 0) 
    {
        printf("Thank you for using program.\n");
	break;
    }
    bool digit_seen[10] = {false};

    while (n > 0) {
      digit = n % 10;
      if (digit_seen[digit])
        break;
      digit_seen[digit] = true;
      n /= 10;
    }

    if (n > 0)
      printf("Repeated digit\n");
    else
      printf("No repeated digit\n");

  } while(d > 0);

  return 0;
}
