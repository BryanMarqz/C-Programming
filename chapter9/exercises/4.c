int day_of_year(int month, int day, int year)
{
  int num_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int day_count = 0, i;

  for (i = 0; i < month - 1; i++)
    day_count += num_days[i];

  /* adjust for leap years, assuming they are divisible by 4 */
  if (year % 4 == 0 && month > 2)
    day_count++;

  return day_count + day;
}
