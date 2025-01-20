// Shudip Golder Ovei, Roll: 2401040
//  Problem 1:

#include <stdio.h>
int main()
{
  int total_days = 863, year, month, week, day;

  year = total_days / 365; // 1 year = 365 days
  total_days %= 365;
  month = total_days / 30; // 1 month = 30 days
  total_days %= 30;
  week = total_days / 7; // 1 week = 7 days
  day = total_days % 7;
  printf("863 days is %d years, %d months, %d week, %d days", year, month, week, day);
  return 0;
}