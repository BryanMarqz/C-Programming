/* maxmin.c (Chapter 11, page 250) */
/* Finds the largest and smallest elements in an array */

#include <stdio.h>

#define N 10

void max_min(int a[], int *max, int *min);

int main(void)
{
  int a[N], big, small;

  printf("Enter %d numbers: ", N);
  for (int *p = a; p < a + N; p++)
    scanf("%d", p);

  max_min(a, &big, &small);

  printf("Largest: %d\n", big);
  printf("Smallest: %d\n", small);

  return 0;
}

void max_min(int a[], int *max, int *min)
{
  *min = *max = *a;

  for (int *p = a; p < a + N; p++) {
    if (*p > *max)
      *max = *p;
    else if (*p < *min)
      *min = *p;
  }
}
