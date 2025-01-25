// Shudip Golder Ovei; Roll:2401040;
// Problem 3;

#include <stdio.h>
#include <math.h>
int main()
{
  int a, x, p;
  printf("Enter the base number: ");
  scanf("%d", &a);

  printf("Enter the power value: ");
  scanf("%d", &x);

  p = pow(a, x);
  printf("The answer is: %d", p);
}