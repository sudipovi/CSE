// Shudip Golder Ovei, Roll:2401040
// Problem 2
#include <stdio.h>
int main(void)
{

  float total_weight = (52 + 65 + 53 + 48 + 50 + 61 + 57 + 60),
        avg_weight, kg;
  avg_weight = total_weight / 8;
  kg = avg_weight / 1000;
  printf("The average weight is %.2f gram and %f kilogram",
         avg_weight, kg);
  return 0;
}