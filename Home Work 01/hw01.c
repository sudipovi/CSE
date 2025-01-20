// Shudip Golder Ovei, Roll: 2401040
//  Problem 1:

#include <stdio.h>

int main()
{
  int year, month, total_days, week, day;
  total_days = 863;
  year = (total_days / 365);
  month = (total_days % 365) / 30;
  week = (total_days % 365) / 7;
  day = total_days - (year * 365) - (month * 30);

  printf("%d years %d months %d weeks %d days", year, month, week, day);

  return 0;
}