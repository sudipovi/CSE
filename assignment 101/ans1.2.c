// Problem 1; But this time with "Double".
// It shows the exact result.
#include <stdio.h>
int main(void)
{
  double interest = 5350,
         rate = 12,
         time = 3,
         principal;

  principal = interest * 100 / (rate * time);

  printf("The principal is: %lf", principal);
  return 0;
}