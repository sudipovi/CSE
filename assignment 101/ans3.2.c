// Shudip Golder Ovei, Roll:2401040
// Problem 3 but with "Double"
#include <stdio.h>
int main(void)
{
  int total_rice = 11120, eaten_rice = 450, days;
  days = total_rice / eaten_rice;

  double totalRice = 11200, eatenRice = 450,
         exact_days = totalRice / eatenRice;

  printf("The rice will finish in %d days or %.2lf days", days, exact_days);
  return 0;
}