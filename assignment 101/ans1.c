// Shudip Golder Ovei, Roll:2401040
// Problem 1
#include <stdio.h>
int main(void)
{
  float interest = 5350,
        rate = 12,
        time = 3,
        principal;

  principal = interest * 100 / (rate * time);

  printf("The principal is: %f", principal);
  return 0;
}